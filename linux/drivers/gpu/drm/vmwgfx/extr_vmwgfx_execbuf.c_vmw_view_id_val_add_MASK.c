
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_sw_context {int man; struct vmw_ctx_validation_info* dx_ctx_node; } ;
struct vmw_resource {int dummy; } ;
struct vmw_ctx_validation_info {int dummy; } ;
typedef enum vmw_view_type { ____Placeholder_vmw_view_type } vmw_view_type ;


 int VAR_0 ;
 struct vmw_resource* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vmw_resource*) ;
 struct vmw_resource* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct vmw_sw_context*,struct vmw_resource*) ;

__attribute__((used)) static struct vmw_resource *
FUNC_4(struct vmw_sw_context *VAR_1,
      enum vmw_view_type VAR_2, u32 VAR_3)
{
 struct vmw_ctx_validation_info *VAR_4 = VAR_1->dx_ctx_node;
 struct vmw_resource *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(VAR_1->man, VAR_2, VAR_3);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_3(VAR_1, VAR_5);
 if (VAR_6)
  return FUNC_0(VAR_6);

 return VAR_5;
}
