
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef size_t u32 ;
struct vmw_sw_context {int dummy; } ;
struct vmw_resource {int dummy; } ;
struct vmw_ctx_validation_info {int staged; int ctx; } ;
struct TYPE_2__ {int bt; struct vmw_resource* res; int ctx; } ;
struct vmw_ctx_bindinfo_view {size_t slot; TYPE_1__ bi; scalar_t__ shader_slot; } ;
typedef enum vmw_view_type { ____Placeholder_vmw_view_type } vmw_view_type ;
typedef enum vmw_ctx_binding_type { ____Placeholder_vmw_ctx_binding_type } vmw_ctx_binding_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vmw_resource*) ;
 int FUNC_1 (struct vmw_resource*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 struct vmw_ctx_validation_info* FUNC_3 (struct vmw_sw_context*) ;
 int FUNC_4 (int ,TYPE_1__*,scalar_t__,size_t) ;
 struct vmw_resource* FUNC_5 (struct vmw_sw_context*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct vmw_sw_context *VAR_2,
     enum vmw_view_type VAR_3,
     enum vmw_ctx_binding_type VAR_4,
     uint32 VAR_5,
     uint32 VAR_6[], u32 VAR_7,
     u32 VAR_8)
{
 struct vmw_ctx_validation_info *VAR_9 = FUNC_3(VAR_2);
 u32 VAR_10;

 if (!VAR_9)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
  struct vmw_ctx_bindinfo_view VAR_11;
  struct vmw_resource *VAR_12 = ((void*)0);

  if (VAR_6[VAR_10] != VAR_1) {
   VAR_12 = FUNC_5(VAR_2, VAR_3,
         VAR_6[VAR_10]);
   if (FUNC_0(VAR_12)) {
    FUNC_2("View not found.\n");
    return FUNC_1(VAR_12);
   }
  }
  VAR_11.bi.ctx = VAR_9->ctx;
  VAR_11.bi.res = VAR_12;
  VAR_11.bi.bt = VAR_4;
  VAR_11.shader_slot = VAR_5;
  VAR_11.slot = VAR_8 + VAR_10;
  FUNC_4(VAR_9->staged, &VAR_11.bi,
    VAR_5, VAR_11.slot);
 }

 return 0;
}
