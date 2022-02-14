
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_surface {int dummy; } ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int dummy; } ;
struct ttm_object_file {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct vmw_surface* FUNC_1 (struct vmw_resource*) ;
 int FUNC_2 (struct ttm_object_file*,int ,struct vmw_buffer_object**,int *) ;
 int FUNC_3 (struct vmw_private*,struct ttm_object_file*,int ,int ,struct vmw_resource**) ;

int FUNC_4(struct vmw_private *VAR_1,
      struct ttm_object_file *VAR_2,
      uint32_t VAR_3,
      struct vmw_surface **VAR_4,
      struct vmw_buffer_object **VAR_5)
{
 struct vmw_resource *VAR_6;
 int VAR_7;

 FUNC_0(*VAR_4 || *VAR_5);

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3,
           VAR_0,
           &VAR_6);
 if (!VAR_7) {
  *VAR_4 = FUNC_1(VAR_6);
  return 0;
 }

 *VAR_4 = ((void*)0);
 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5, ((void*)0));
 return VAR_7;
}
