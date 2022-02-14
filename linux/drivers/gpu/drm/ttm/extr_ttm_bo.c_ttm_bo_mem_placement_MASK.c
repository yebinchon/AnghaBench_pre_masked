
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ttm_place {int flags; } ;
struct ttm_operation_ctx {int dummy; } ;
struct ttm_mem_type_manager {int use_type; int has_type; } ;
struct ttm_mem_reg {size_t mem_type; size_t placement; } ;
struct TYPE_3__ {size_t mem_type; int placement; } ;
struct ttm_buffer_object {struct ttm_bo_device* bdev; int lru; TYPE_1__ mem; } ;
struct ttm_bo_device {TYPE_2__* glob; struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {int lru_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_4 (struct ttm_buffer_object*) ;
 int FUNC_5 (struct ttm_mem_type_manager*,size_t,struct ttm_place const*,size_t*) ;
 size_t FUNC_6 (struct ttm_mem_type_manager*,int ,size_t) ;
 int FUNC_7 (size_t*,int ,int ) ;
 int FUNC_8 (struct ttm_place const*,size_t*) ;

__attribute__((used)) static int FUNC_9(struct ttm_buffer_object *VAR_3,
    const struct ttm_place *VAR_4,
    struct ttm_mem_reg *VAR_5,
    struct ttm_operation_ctx *VAR_6)
{
 struct ttm_bo_device *VAR_7 = VAR_3->bdev;
 uint32_t VAR_8 = VAR_2;
 struct ttm_mem_type_manager *VAR_9;
 uint32_t VAR_10 = 0;
 int VAR_11;

 VAR_11 = FUNC_8(VAR_4, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_9 = &VAR_7->man[VAR_8];
 if (!VAR_9->has_type || !VAR_9->use_type)
  return -VAR_0;

 if (!FUNC_5(VAR_9, VAR_8, VAR_4, &VAR_10))
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_9, VAR_3->mem.placement, VAR_10);




 FUNC_7(&VAR_10, VAR_4->flags, ~VAR_1);

 VAR_5->mem_type = VAR_8;
 VAR_5->placement = VAR_10;

 if (VAR_3->mem.mem_type < VAR_8 && !FUNC_0(&VAR_3->lru)) {
  FUNC_1(&VAR_3->bdev->glob->lru_lock);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3, VAR_5);
  FUNC_2(&VAR_3->bdev->glob->lru_lock);
 }

 return 0;
}
