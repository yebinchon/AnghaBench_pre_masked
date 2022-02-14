
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_resource {int dummy; } ;
struct vmw_cmdbuf_res_manager {int dummy; } ;
typedef int SVGA3dShaderType ;


 int VAR_0 ;
 struct vmw_resource* FUNC_0 (int ) ;
 struct vmw_resource* FUNC_1 (struct vmw_cmdbuf_res_manager*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

struct vmw_resource *
FUNC_4(struct vmw_cmdbuf_res_manager *VAR_2,
    u32 VAR_3,
    SVGA3dShaderType VAR_4)
{
 if (!FUNC_2(VAR_3, VAR_4))
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_2, VAR_1,
         FUNC_3(VAR_3, VAR_4));
}
