
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cppi41_dd {TYPE_1__ ddev; int lock; int is_suspended; int pending; } ;
struct cppi41_channel {int node; struct cppi41_dd* cdd; } ;


 int VAR_0 ;
 int FUNC_0 (struct cppi41_dd*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct cppi41_channel* FUNC_9 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_10(struct dma_chan *VAR_1)
{
 struct cppi41_channel *VAR_2 = FUNC_9(VAR_1);
 struct cppi41_dd *VAR_3 = VAR_2->cdd;
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3->ddev.dev);
 if ((VAR_5 != -VAR_0) && VAR_5 < 0) {
  FUNC_6(VAR_3->ddev.dev);
  FUNC_1(VAR_3->ddev.dev, "Failed to pm_runtime_get: %i\n",
   VAR_5);

  return;
 }

 FUNC_7(&VAR_3->lock, VAR_4);
 FUNC_2(&VAR_2->node, &VAR_3->pending);
 if (!VAR_3->is_suspended)
  FUNC_0(VAR_3);
 FUNC_8(&VAR_3->lock, VAR_4);

 FUNC_4(VAR_3->ddev.dev);
 FUNC_5(VAR_3->ddev.dev);
}
