
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_user_resource_conv {scalar_t__ object_type; struct vmw_resource* (* base_obj_to_res ) (struct ttm_base_object*) ;} ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
struct ttm_object_file {int dummy; } ;
struct ttm_base_object {int dummy; } ;


 int VAR_0 ;
 struct vmw_resource* FUNC_0 (int ) ;
 int VAR_1 ;
 struct vmw_resource* FUNC_1 (struct ttm_base_object*) ;
 struct ttm_base_object* FUNC_2 (struct ttm_object_file*,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct ttm_base_object*) ;
 scalar_t__ FUNC_5 (int) ;

struct vmw_resource *
FUNC_6(struct vmw_private *VAR_2,
          struct ttm_object_file *VAR_3,
          uint32_t VAR_4,
          const struct vmw_user_resource_conv
          *VAR_5)
{
 struct ttm_base_object *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 if (FUNC_5(FUNC_4(VAR_6) != VAR_5->object_type)) {
  FUNC_3();
  return FUNC_0(-VAR_0);
 }

 return VAR_5->base_obj_to_res(VAR_6);
}
