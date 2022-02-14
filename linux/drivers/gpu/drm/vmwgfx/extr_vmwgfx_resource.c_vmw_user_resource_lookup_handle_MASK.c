
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_user_resource_conv {scalar_t__ object_type; struct vmw_resource* (* base_obj_to_res ) (struct ttm_base_object*) ;} ;
struct vmw_resource {int kref; } ;
struct vmw_private {int dummy; } ;
struct ttm_object_file {int dummy; } ;
struct ttm_base_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vmw_resource* FUNC_1 (struct ttm_base_object*) ;
 struct ttm_base_object* FUNC_2 (struct ttm_object_file*,int ) ;
 scalar_t__ FUNC_3 (struct ttm_base_object*) ;
 int FUNC_4 (struct ttm_base_object**) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct vmw_private *VAR_1,
        struct ttm_object_file *VAR_2,
        uint32_t VAR_3,
        const struct vmw_user_resource_conv
        *VAR_4,
        struct vmw_resource **VAR_5)
{
 struct ttm_base_object *VAR_6;
 struct vmw_resource *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_5(VAR_6 == ((void*)0)))
  return -VAR_0;

 if (FUNC_5(FUNC_3(VAR_6) != VAR_4->object_type))
  goto out_bad_resource;

 VAR_7 = VAR_4->base_obj_to_res(VAR_6);
 FUNC_0(&VAR_7->kref);

 *VAR_5 = VAR_7;
 VAR_8 = 0;

out_bad_resource:
 FUNC_4(&VAR_6);

 return VAR_8;
}
