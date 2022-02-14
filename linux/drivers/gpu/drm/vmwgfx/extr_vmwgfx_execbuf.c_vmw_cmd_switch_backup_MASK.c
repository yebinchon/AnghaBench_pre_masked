
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_user_resource_conv {int dummy; } ;
struct vmw_sw_context {int dummy; } ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
typedef enum vmw_res_type { ____Placeholder_vmw_res_type } vmw_res_type ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_private*,struct vmw_sw_context*,int,int ,struct vmw_user_resource_conv const*,int *,struct vmw_resource**) ;
 int FUNC_1 (struct vmw_private*,struct vmw_sw_context*,struct vmw_resource*,int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct vmw_private *VAR_1,
     struct vmw_sw_context *VAR_2,
     enum vmw_res_type VAR_3,
     const struct vmw_user_resource_conv
     *VAR_4, uint32_t *VAR_5, uint32_t *VAR_6,
     unsigned long VAR_7)
{
 struct vmw_resource *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3,
    VAR_0, VAR_4, VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;

 return FUNC_1(VAR_1, VAR_2, VAR_8, VAR_6,
      VAR_7);
}
