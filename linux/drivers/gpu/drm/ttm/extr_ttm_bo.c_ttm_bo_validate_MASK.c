
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_placement {int dummy; } ;
struct ttm_operation_ctx {int dummy; } ;
struct TYPE_4__ {scalar_t__ mem_type; int placement; } ;
struct TYPE_3__ {int resv; } ;
struct ttm_buffer_object {int * ttm; TYPE_2__ mem; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_placement*,TYPE_2__*,int *) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_operation_ctx*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct ttm_buffer_object*,int) ;

int FUNC_5(struct ttm_buffer_object *VAR_2,
      struct ttm_placement *VAR_3,
      struct ttm_operation_ctx *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 FUNC_0(VAR_2->base.resv);



 if (!FUNC_1(VAR_3, &VAR_2->mem, &VAR_6)) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 } else {




  FUNC_3(&VAR_2->mem.placement, VAR_6,
    ~VAR_0);
 }



 if (VAR_2->mem.mem_type == VAR_1 && VAR_2->ttm == ((void*)0)) {
  VAR_5 = FUNC_4(VAR_2, 1);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
