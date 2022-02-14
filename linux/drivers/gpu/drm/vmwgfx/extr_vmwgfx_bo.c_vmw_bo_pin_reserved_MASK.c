
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ mem_type; } ;
struct TYPE_3__ {int resv; } ;
struct ttm_buffer_object {TYPE_2__ mem; TYPE_1__ base; } ;
struct vmw_buffer_object {scalar_t__ pin_count; struct ttm_buffer_object base; } ;
struct ttm_placement {int num_placement; struct ttm_place* placement; } ;
struct ttm_place {int flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
typedef int placement ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ttm_placement*,int ,int) ;
 int FUNC_4 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_operation_ctx*) ;

void FUNC_5(struct vmw_buffer_object *VAR_6, bool VAR_7)
{
 struct ttm_operation_ctx VAR_8 = { 0, 1 };
 struct ttm_place VAR_9;
 struct ttm_placement VAR_10;
 struct ttm_buffer_object *VAR_11 = &VAR_6->base;
 uint32_t VAR_12 = VAR_11->mem.mem_type;
 int VAR_13;

 FUNC_2(VAR_11->base.resv);

 if (VAR_7) {
  if (VAR_6->pin_count++ > 0)
   return;
 } else {
  FUNC_1(VAR_6->pin_count <= 0);
  if (--VAR_6->pin_count > 0)
   return;
 }

 VAR_9.fpfn = 0;
 VAR_9.lpfn = 0;
 VAR_9.flags = VAR_3 | VAR_4 | VAR_5
  | VAR_2 | VAR_0;
 if (VAR_7)
  VAR_9.flags |= VAR_1;

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.num_placement = 1;
 VAR_10.placement = &VAR_9;

 VAR_13 = FUNC_4(VAR_11, &VAR_10, &VAR_8);

 FUNC_0(VAR_13 != 0 || VAR_11->mem.mem_type != VAR_12);
}
