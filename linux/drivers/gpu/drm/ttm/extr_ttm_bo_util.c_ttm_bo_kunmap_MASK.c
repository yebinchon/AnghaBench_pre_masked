
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_4__ {size_t mem_type; } ;
struct ttm_buffer_object {TYPE_2__ mem; TYPE_1__* bdev; } ;
struct ttm_bo_kmap_obj {int bo_kmap_type; int * page; int * virtual; struct ttm_buffer_object* bo; } ;
struct TYPE_3__ {struct ttm_mem_type_manager* man; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;




 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (struct ttm_mem_type_manager*,int) ;
 int FUNC_5 (struct ttm_mem_type_manager*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ttm_bo_kmap_obj *VAR_0)
{
 struct ttm_buffer_object *VAR_1 = VAR_0->bo;
 struct ttm_mem_type_manager *VAR_2 =
  &VAR_1->bdev->man[VAR_1->mem.mem_type];

 if (!VAR_0->virtual)
  return;
 switch (VAR_0->bo_kmap_type) {
 case 131:
  FUNC_1(VAR_0->virtual);
  break;
 case 128:
  FUNC_6(VAR_0->virtual);
  break;
 case 130:
  FUNC_2(VAR_0->page);
  break;
 case 129:
  break;
 default:
  FUNC_0();
 }
 (void) FUNC_4(VAR_2, 0);
 FUNC_3(VAR_0->bo->bdev, &VAR_0->bo->mem);
 FUNC_5(VAR_2);
 VAR_0->virtual = ((void*)0);
 VAR_0->page = ((void*)0);
}
