
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_type_manager {int flags; int * lru; } ;
struct ttm_mem_reg {int placement; size_t mem_type; } ;
struct TYPE_4__ {int resv; } ;
struct ttm_buffer_object {size_t priority; int list_kref; int swap; TYPE_2__* ttm; int lru; TYPE_1__ base; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {TYPE_3__* glob; struct ttm_mem_type_manager* man; } ;
struct TYPE_6__ {int * swap_lru; } ;
struct TYPE_5__ {int page_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ttm_buffer_object *VAR_4,
      struct ttm_mem_reg *VAR_5)
{
 struct ttm_bo_device *VAR_6 = VAR_4->bdev;
 struct ttm_mem_type_manager *VAR_7;

 FUNC_0(VAR_4->base.resv);

 if (!FUNC_3(&VAR_4->lru))
  return;

 if (VAR_5->placement & VAR_3)
  return;

 VAR_7 = &VAR_6->man[VAR_5->mem_type];
 FUNC_2(&VAR_4->lru, &VAR_7->lru[VAR_4->priority]);
 FUNC_1(&VAR_4->list_kref);

 if (!(VAR_7->flags & VAR_0) && VAR_4->ttm &&
     !(VAR_4->ttm->page_flags & (VAR_1 |
         VAR_2))) {
  FUNC_2(&VAR_4->swap, &VAR_6->glob->swap_lru[VAR_4->priority]);
  FUNC_1(&VAR_4->list_kref);
 }
}
