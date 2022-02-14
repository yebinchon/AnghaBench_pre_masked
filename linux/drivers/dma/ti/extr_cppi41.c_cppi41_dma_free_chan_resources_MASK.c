
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cppi41_dd {TYPE_1__ ddev; int pending; } ;
struct cppi41_channel {struct cppi41_dd* cdd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct cppi41_channel* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct cppi41_channel *VAR_1 = FUNC_6(VAR_0);
 struct cppi41_dd *VAR_2 = VAR_1->cdd;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->ddev.dev);
 if (VAR_3 < 0) {
  FUNC_5(VAR_2->ddev.dev);

  return;
 }

 FUNC_0(!FUNC_1(&VAR_2->pending));

 FUNC_3(VAR_2->ddev.dev);
 FUNC_4(VAR_2->ddev.dev);
}
