
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io {unsigned long error_bits; TYPE_1__* client; scalar_t__ vma_invalidate_size; int vma_invalidate_address; void* context; int (* callback ) (unsigned long,void*) ;} ;
typedef int (* io_notify_fn ) (unsigned long,void*) ;
struct TYPE_2__ {int pool; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct io*,int *) ;

__attribute__((used)) static void FUNC_2(struct io *VAR_0)
{
 unsigned long VAR_1 = VAR_0->error_bits;
 io_notify_fn VAR_2 = VAR_0->callback;
 void *VAR_3 = VAR_0->context;

 if (VAR_0->vma_invalidate_size)
  FUNC_0(VAR_0->vma_invalidate_address,
          VAR_0->vma_invalidate_size);

 FUNC_1(VAR_0, &VAR_0->client->pool);
 VAR_2(VAR_1, VAR_3);
}
