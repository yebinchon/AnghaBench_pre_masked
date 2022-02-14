
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_4__ {int is_iomem; } ;
struct TYPE_6__ {size_t mem_type; TYPE_1__ bus; } ;
struct ttm_buffer_object {unsigned long num_pages; TYPE_3__ mem; TYPE_2__* bdev; } ;
struct ttm_bo_kmap_obj {struct ttm_buffer_object* bo; int * virtual; } ;
struct TYPE_5__ {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct ttm_buffer_object*,unsigned long,unsigned long,struct ttm_bo_kmap_obj*) ;
 int FUNC_1 (struct ttm_buffer_object*,unsigned long,unsigned long,struct ttm_bo_kmap_obj*) ;
 int FUNC_2 (struct ttm_mem_type_manager*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (struct ttm_mem_type_manager*) ;

int FUNC_5(struct ttm_buffer_object *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  struct ttm_bo_kmap_obj *VAR_5)
{
 struct ttm_mem_type_manager *VAR_6 =
  &VAR_2->bdev->man[VAR_2->mem.mem_type];
 unsigned long VAR_7, VAR_8;
 int VAR_9;

 VAR_5->virtual = ((void*)0);
 VAR_5->bo = VAR_2;
 if (VAR_4 > VAR_2->num_pages)
  return -VAR_0;
 if (VAR_3 > VAR_2->num_pages)
  return -VAR_0;

 (void) FUNC_2(VAR_6, 0);
 VAR_9 = FUNC_3(VAR_2->bdev, &VAR_2->mem);
 FUNC_4(VAR_6);
 if (VAR_9)
  return VAR_9;
 if (!VAR_2->mem.bus.is_iomem) {
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  VAR_7 = VAR_3 << VAR_1;
  VAR_8 = VAR_4 << VAR_1;
  return FUNC_0(VAR_2, VAR_7, VAR_8, VAR_5);
 }
}
