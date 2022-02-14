
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {struct ttm_buffer_object* vm_private_data; int vm_start; } ;
struct TYPE_5__ {int mem_type; } ;
struct ttm_buffer_object {int num_pages; TYPE_3__* bdev; TYPE_4__* ttm; TYPE_1__ mem; } ;
typedef unsigned long addr ;
struct TYPE_8__ {int page_flags; } ;
struct TYPE_7__ {TYPE_2__* driver; } ;
struct TYPE_6__ {int (* access_memory ) (struct ttm_buffer_object*,unsigned long,void*,int,int) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct ttm_buffer_object*,unsigned long,void*,int,int) ;
 int FUNC_1 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_2 (struct ttm_buffer_object*) ;
 int FUNC_3 (struct ttm_buffer_object*,unsigned long,void*,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_3, unsigned long VAR_4,
       void *VAR_5, int VAR_6, int VAR_7)
{
 unsigned long VAR_8 = (VAR_4) - VAR_3->vm_start;
 struct ttm_buffer_object *VAR_9 = VAR_3->vm_private_data;
 int VAR_10;

 if (VAR_6 < 1 || (VAR_8 + VAR_6) >> VAR_1 > VAR_9->num_pages)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_9, 1, 0, ((void*)0));
 if (VAR_10)
  return VAR_10;

 switch (VAR_9->mem.mem_type) {
 case 129:
  if (FUNC_5(VAR_9->ttm->page_flags & VAR_2)) {
   VAR_10 = FUNC_4(VAR_9->ttm);
   if (FUNC_5(VAR_10 != 0))
    return VAR_10;
  }

 case 128:
  VAR_10 = FUNC_3(VAR_9, VAR_8, VAR_5, VAR_6, VAR_7);
  break;
 default:
  if (VAR_9->bdev->driver->access_memory)
   VAR_10 = VAR_9->bdev->driver->access_memory(
    VAR_9, VAR_8, VAR_5, VAR_6, VAR_7);
  else
   VAR_10 = -VAR_0;
 }

 FUNC_2(VAR_9);

 return VAR_10;
}
