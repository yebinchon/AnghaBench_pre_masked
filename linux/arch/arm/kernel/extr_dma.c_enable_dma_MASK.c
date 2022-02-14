
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int active; TYPE_1__* d_ops; int lock; } ;
typedef TYPE_2__ dma_t ;
struct TYPE_5__ {int (* enable ) (unsigned int,TYPE_2__*) ;} ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (unsigned int,TYPE_2__*) ;

void FUNC_4 (unsigned int VAR_0)
{
 dma_t *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->lock)
  goto free_dma;

 if (VAR_1->active == 0) {
  VAR_1->active = 1;
  VAR_1->d_ops->enable(VAR_0, VAR_1);
 }
 return;

free_dma:
 FUNC_2("dma%d: trying to enable free DMA\n", VAR_0);
 FUNC_0();
}
