
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct ttm_place {int dummy; } ;
struct ttm_operation_ctx {int dummy; } ;
struct ttm_mem_type_manager {TYPE_2__* func; } ;
struct ttm_mem_reg {size_t mem_type; scalar_t__ mm_node; } ;
struct TYPE_3__ {int resv; } ;
struct ttm_buffer_object {TYPE_1__ base; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {int (* get_node ) (struct ttm_mem_type_manager*,struct ttm_buffer_object*,struct ttm_place const*,struct ttm_mem_reg*) ;} ;


 struct ww_acquire_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_mem_type_manager*,struct ttm_buffer_object*,struct ttm_place const*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_mem_type_manager*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_bo_device*,size_t,struct ttm_place const*,struct ttm_operation_ctx*,struct ww_acquire_ctx*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ttm_buffer_object *VAR_0,
      const struct ttm_place *VAR_1,
      struct ttm_mem_reg *VAR_2,
      struct ttm_operation_ctx *VAR_3)
{
 struct ttm_bo_device *VAR_4 = VAR_0->bdev;
 struct ttm_mem_type_manager *VAR_5 = &VAR_4->man[VAR_2->mem_type];
 struct ww_acquire_ctx *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_0->base.resv);
 do {
  VAR_7 = (*VAR_5->func->get_node)(VAR_5, VAR_0, VAR_1, VAR_2);
  if (FUNC_4(VAR_7 != 0))
   return VAR_7;
  if (VAR_2->mm_node)
   break;
  VAR_7 = FUNC_3(VAR_4, VAR_2->mem_type, VAR_1, VAR_3,
       VAR_6);
  if (FUNC_4(VAR_7 != 0))
   return VAR_7;
 } while (1);

 return FUNC_2(VAR_0, VAR_5, VAR_2);
}
