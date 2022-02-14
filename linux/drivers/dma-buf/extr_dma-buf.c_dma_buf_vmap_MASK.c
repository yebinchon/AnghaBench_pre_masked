
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buf {int vmapping_counter; int vmap_ptr; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {void* (* vmap ) (struct dma_buf*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (struct dma_buf*) ;

void *FUNC_7(struct dma_buf *VAR_0)
{
 void *VAR_1;

 if (FUNC_2(!VAR_0))
  return ((void*)0);

 if (!VAR_0->ops->vmap)
  return ((void*)0);

 FUNC_4(&VAR_0->lock);
 if (VAR_0->vmapping_counter) {
  VAR_0->vmapping_counter++;
  FUNC_0(!VAR_0->vmap_ptr);
  VAR_1 = VAR_0->vmap_ptr;
  goto out_unlock;
 }

 FUNC_0(VAR_0->vmap_ptr);

 VAR_1 = VAR_0->ops->vmap(VAR_0);
 if (FUNC_3(FUNC_1(VAR_1)))
  VAR_1 = ((void*)0);
 if (!VAR_1)
  goto out_unlock;

 VAR_0->vmap_ptr = VAR_1;
 VAR_0->vmapping_counter = 1;

out_unlock:
 FUNC_5(&VAR_0->lock);
 return VAR_1;
}
