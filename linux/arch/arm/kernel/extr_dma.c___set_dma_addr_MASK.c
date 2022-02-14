
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int invalid; void* addr; int * sg; scalar_t__ active; } ;
typedef TYPE_1__ dma_t ;


 TYPE_1__* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;

void FUNC_2 (unsigned int VAR_0, void *VAR_1)
{
 dma_t *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->active)
  FUNC_1("dma%d: altering DMA address while DMA active\n", VAR_0);

 VAR_2->sg = ((void*)0);
 VAR_2->addr = VAR_1;
 VAR_2->invalid = 1;
}
