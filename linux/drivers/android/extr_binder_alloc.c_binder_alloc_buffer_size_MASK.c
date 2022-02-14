
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_buffer {size_t user_data; int entry; } ;
struct binder_alloc {size_t buffer; size_t buffer_size; int buffers; } ;
struct TYPE_2__ {size_t user_data; } ;


 TYPE_1__* FUNC_0 (struct binder_buffer*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static size_t FUNC_2(struct binder_alloc *VAR_0,
           struct binder_buffer *VAR_1)
{
 if (FUNC_1(&VAR_1->entry, &VAR_0->buffers))
  return VAR_0->buffer + VAR_0->buffer_size - VAR_1->user_data;
 return FUNC_0(VAR_1)->user_data - VAR_1->user_data;
}
