
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {void* vmap_ptr; scalar_t__ vmapping_counter; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* vunmap ) (struct dma_buf*,void*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dma_buf*,void*) ;

void FUNC_5(struct dma_buf *VAR_0, void *VAR_1)
{
 if (FUNC_1(!VAR_0))
  return;

 FUNC_0(!VAR_0->vmap_ptr);
 FUNC_0(VAR_0->vmapping_counter == 0);
 FUNC_0(VAR_0->vmap_ptr != VAR_1);

 FUNC_2(&VAR_0->lock);
 if (--VAR_0->vmapping_counter == 0) {
  if (VAR_0->ops->vunmap)
   VAR_0->ops->vunmap(VAR_0, VAR_1);
  VAR_0->vmap_ptr = ((void*)0);
 }
 FUNC_3(&VAR_0->lock);
}
