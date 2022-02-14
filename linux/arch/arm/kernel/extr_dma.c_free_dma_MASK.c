
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* d_ops; int lock; scalar_t__ active; } ;
typedef TYPE_2__ dma_t ;
struct TYPE_6__ {int (* free ) (unsigned int,TYPE_2__*) ;int (* disable ) (unsigned int,TYPE_2__*) ;} ;


 TYPE_2__* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (unsigned int,TYPE_2__*) ;
 int FUNC_3 (unsigned int,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

void FUNC_5(unsigned int VAR_0)
{
 dma_t *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  goto bad_dma;

 if (VAR_1->active) {
  FUNC_1("dma%d: freeing active DMA\n", VAR_0);
  VAR_1->d_ops->disable(VAR_0, VAR_1);
  VAR_1->active = 0;
 }

 if (FUNC_4(&VAR_1->lock, 0) != 0) {
  if (VAR_1->d_ops->free)
   VAR_1->d_ops->free(VAR_0, VAR_1);
  return;
 }

 FUNC_1("dma%d: trying to free free DMA\n", VAR_0);
 return;

bad_dma:
 FUNC_1("dma: trying to free DMA%d\n", VAR_0);
}
