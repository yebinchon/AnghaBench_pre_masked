
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dma_addr; scalar_t__ buf; } ;
struct TYPE_4__ {int dma_addr; scalar_t__ buf; } ;
struct rsxx_dma_ctrl {int id; TYPE_2__ cmd; TYPE_1__ status; scalar_t__ trackers; int * done_wq; int * issue_wq; struct rsxx_cardinfo* card; scalar_t__ regmap; } ;
struct rsxx_cardinfo {int n_targets; int scrub_hard; TYPE_3__* dev; struct rsxx_dma_ctrl* ctrl; int irq_lock; scalar_t__ config_valid; scalar_t__ dma_fault; scalar_t__ regmap; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 int FUNC_5 (struct rsxx_cardinfo*) ;
 int FUNC_6 (TYPE_3__*,struct rsxx_dma_ctrl*) ;
 int FUNC_7 (struct rsxx_cardinfo*) ;
 int FUNC_8 (struct rsxx_cardinfo*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (scalar_t__) ;

int FUNC_12(struct rsxx_cardinfo *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_3(FUNC_0(VAR_2),
  "Initializing %d DMA targets\n",
  VAR_2->n_targets);


 for (VAR_5 = 0; VAR_5 < VAR_2->n_targets; VAR_5++)
  VAR_2->ctrl[VAR_5].regmap = VAR_2->regmap + (VAR_5 * 4096);

 VAR_2->dma_fault = 0;


 FUNC_7(VAR_2);


 for (VAR_5 = 0; VAR_5 < VAR_2->n_targets; VAR_5++) {
  VAR_4 = FUNC_6(VAR_2->dev, &VAR_2->ctrl[VAR_5]);
  if (VAR_4)
   goto failed_dma_setup;

  VAR_2->ctrl[VAR_5].card = VAR_2;
  VAR_2->ctrl[VAR_5].id = VAR_5;
 }

 VAR_2->scrub_hard = 1;

 if (VAR_2->config_valid)
  FUNC_5(VAR_2);


 for (VAR_5 = 0; VAR_5 < VAR_2->n_targets; VAR_5++) {
  FUNC_9(&VAR_2->irq_lock, VAR_3);
  FUNC_8(VAR_2, FUNC_1(VAR_5));
  FUNC_10(&VAR_2->irq_lock, VAR_3);
 }

 return 0;

failed_dma_setup:
 for (VAR_5 = 0; VAR_5 < VAR_2->n_targets; VAR_5++) {
  struct rsxx_dma_ctrl *VAR_6 = &VAR_2->ctrl[VAR_5];

  if (VAR_6->issue_wq) {
   FUNC_2(VAR_6->issue_wq);
   VAR_6->issue_wq = ((void*)0);
  }

  if (VAR_6->done_wq) {
   FUNC_2(VAR_6->done_wq);
   VAR_6->done_wq = ((void*)0);
  }

  if (VAR_6->trackers)
   FUNC_11(VAR_6->trackers);

  if (VAR_6->status.buf)
   FUNC_4(&VAR_2->dev->dev, VAR_1,
       VAR_6->status.buf,
       VAR_6->status.dma_addr);
  if (VAR_6->cmd.buf)
   FUNC_4(&VAR_2->dev->dev, VAR_0,
       VAR_6->cmd.buf, VAR_6->cmd.dma_addr);
 }

 return VAR_4;
}
