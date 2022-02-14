
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rsxx_dma {scalar_t__ cmd; int list; int dma_addr; } ;
struct rsxx_cardinfo {int n_targets; TYPE_3__* ctrl; TYPE_1__* dev; } ;
struct list_head {int dummy; } ;
struct TYPE_5__ {int sw_q_depth; int hw_q_depth; int reads_issued; int discards_issued; int writes_issued; } ;
struct TYPE_6__ {int queue_lock; scalar_t__ e_cnt; TYPE_2__ stats; int queue; int trackers; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct list_head*) ;
 int VAR_6 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct rsxx_dma*) ;
 struct rsxx_dma* FUNC_4 (int ,int) ;
 struct list_head* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (struct list_head*,int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct rsxx_cardinfo *VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct rsxx_dma *VAR_11;
 struct list_head *VAR_12;

 VAR_12 = FUNC_5(VAR_7->n_targets, sizeof(*VAR_12),
         VAR_3);
 if (!VAR_12)
  return -VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_7->n_targets; VAR_8++) {
  FUNC_0(&VAR_12[VAR_8]);
  VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   VAR_11 = FUNC_4(VAR_7->ctrl[VAR_8].trackers, VAR_9);
   if (VAR_11 == ((void*)0))
    continue;

   if (VAR_11->cmd == VAR_5)
    VAR_7->ctrl[VAR_8].stats.writes_issued--;
   else if (VAR_11->cmd == VAR_4)
    VAR_7->ctrl[VAR_8].stats.discards_issued--;
   else
    VAR_7->ctrl[VAR_8].stats.reads_issued--;

   if (VAR_11->cmd != VAR_4) {
    FUNC_2(&VAR_7->dev->dev, VAR_11->dma_addr,
            FUNC_3(VAR_11),
            VAR_11->cmd == VAR_5 ?
            VAR_1 :
            VAR_0);
   }

   FUNC_7(&VAR_11->list, &VAR_12[VAR_8]);
   FUNC_9(VAR_7->ctrl[VAR_8].trackers, VAR_9);
   VAR_10++;
  }

  FUNC_10(&VAR_7->ctrl[VAR_8].queue_lock);
  FUNC_8(&VAR_12[VAR_8], &VAR_7->ctrl[VAR_8].queue);

  FUNC_1(VAR_10, &VAR_7->ctrl[VAR_8].stats.hw_q_depth);
  VAR_7->ctrl[VAR_8].stats.sw_q_depth += VAR_10;
  VAR_7->ctrl[VAR_8].e_cnt = 0;
  FUNC_11(&VAR_7->ctrl[VAR_8].queue_lock);
 }

 FUNC_6(VAR_12);

 return 0;
}
