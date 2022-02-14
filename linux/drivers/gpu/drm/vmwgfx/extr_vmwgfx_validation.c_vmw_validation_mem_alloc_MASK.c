
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_validation_context {unsigned int mem_size_left; unsigned int vm_size_left; unsigned int page_address; int page_list; TYPE_1__* vm; int total_mem; } ;
struct page {int lru; } ;
struct TYPE_2__ {int (* reserve_mem ) (TYPE_1__*,scalar_t__) ;scalar_t__ gran; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 (struct page*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 unsigned int FUNC_4 (unsigned int) ;

void *FUNC_5(struct vmw_validation_context *VAR_3,
          unsigned int VAR_4)
{
 void *VAR_5;

 VAR_4 = FUNC_4(VAR_4);
 if (VAR_4 > VAR_1)
  return ((void*)0);

 if (VAR_3->mem_size_left < VAR_4) {
  struct page *VAR_6;

  if (VAR_3->vm && VAR_3->vm_size_left < VAR_1) {
   int VAR_7 = VAR_3->vm->reserve_mem(VAR_3->vm, VAR_3->vm->gran);

   if (VAR_7)
    return ((void*)0);

   VAR_3->vm_size_left += VAR_3->vm->gran;
   VAR_3->total_mem += VAR_3->vm->gran;
  }

  VAR_6 = FUNC_0(VAR_0 | VAR_2);
  if (!VAR_6)
   return ((void*)0);

  if (VAR_3->vm)
   VAR_3->vm_size_left -= VAR_1;

  FUNC_1(&VAR_6->lru, &VAR_3->page_list);
  VAR_3->page_address = FUNC_2(VAR_6);
  VAR_3->mem_size_left = VAR_1;
 }

 VAR_5 = (void *) (VAR_3->page_address + (VAR_1 - VAR_3->mem_size_left));
 VAR_3->mem_size_left -= VAR_4;

 return VAR_5;
}
