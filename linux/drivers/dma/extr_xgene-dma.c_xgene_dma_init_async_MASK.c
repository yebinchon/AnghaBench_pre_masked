
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_dma {TYPE_1__* chan; int * dma_dev; } ;
struct TYPE_2__ {int tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xgene_dma*,int) ;

__attribute__((used)) static int FUNC_3(struct xgene_dma *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0 ; VAR_3++) {
  VAR_2 = FUNC_2(VAR_1, VAR_3);
  if (VAR_2) {
   for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    FUNC_0(&VAR_1->dma_dev[VAR_4]);
    FUNC_1(&VAR_1->chan[VAR_4].tasklet);
   }

   return VAR_2;
  }
 }

 return VAR_2;
}
