
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_3__ {int sgcount; int invalid; struct scatterlist* sg; scalar_t__ active; } ;
typedef TYPE_1__ dma_t ;


 TYPE_1__* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;

void FUNC_2 (unsigned int VAR_0, struct scatterlist *VAR_1, int VAR_2)
{
 dma_t *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->active)
  FUNC_1("dma%d: altering DMA SG while DMA active\n", VAR_0);

 VAR_3->sg = VAR_1;
 VAR_3->sgcount = VAR_2;
 VAR_3->invalid = 1;
}
