
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {scalar_t__ idx; } ;
struct TYPE_4__ {int hw_q_depth; } ;
struct rsxx_dma_ctrl {int id; TYPE_3__* card; int queue_lock; int queue; int activity_timer; scalar_t__ regmap; TYPE_2__ cmd; TYPE_1__ stats; } ;
struct TYPE_6__ {int dma_fault; int eeh_state; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 struct rsxx_dma_ctrl* VAR_4 ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct rsxx_dma_ctrl* FUNC_4 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct rsxx_dma_ctrl*,int *,int ) ;
 scalar_t__ FUNC_9 (struct rsxx_dma_ctrl*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct timer_list *VAR_6)
{
 struct rsxx_dma_ctrl *VAR_7 = FUNC_4(VAR_7, VAR_6, VAR_3);
 int VAR_8;

 if (FUNC_1(&VAR_7->stats.hw_q_depth) == 0 ||
     FUNC_12(VAR_7->card->eeh_state))
  return;

 if (VAR_7->cmd.idx != FUNC_5(VAR_7->regmap + VAR_2)) {




  FUNC_3(FUNC_0(VAR_7->card),
   "SW_CMD_IDX write was lost, re-writing...\n");
  FUNC_6(VAR_7->cmd.idx, VAR_7->regmap + VAR_2);
  FUNC_7(&VAR_7->activity_timer,
     VAR_5 + VAR_1);
 } else {
  FUNC_3(FUNC_0(VAR_7->card),
   "DMA channel %d has stalled, faulting interface.\n",
   VAR_7->id);
  VAR_7->card->dma_fault = 1;


  FUNC_10(&VAR_7->queue_lock);
  VAR_8 = FUNC_8(VAR_7, &VAR_7->queue, VAR_0);
  FUNC_11(&VAR_7->queue_lock);

  VAR_8 += FUNC_9(VAR_7);

  if (VAR_8)
   FUNC_2(FUNC_0(VAR_7->card),
    "Freed %d queued DMAs on channel %d\n",
    VAR_8, VAR_7->id);
 }
}
