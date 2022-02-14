
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sw_context {int dummy; } ;
struct vmw_private {int dummy; } ;
struct vmw_ctx_validation_info {int dummy; } ;
typedef int SVGA3dCmdHeader ;


 int VAR_0 ;
 struct vmw_ctx_validation_info* FUNC_0 (struct vmw_sw_context*) ;

__attribute__((used)) static int FUNC_1(struct vmw_private *VAR_1,
    struct vmw_sw_context *VAR_2,
    SVGA3dCmdHeader *VAR_3)
{
 struct vmw_ctx_validation_info *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
  return -VAR_0;

 return 0;
}
