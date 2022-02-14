
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_resource {int dummy; } ;
struct vmw_cmdbuf_res_manager {int dummy; } ;
struct list_head {int dummy; } ;
typedef int SVGA3dShaderType ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_cmdbuf_res_manager*,int ,int ,struct list_head*,struct vmw_resource**) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct vmw_cmdbuf_res_manager *VAR_2,
        u32 VAR_3, SVGA3dShaderType VAR_4,
        struct list_head *VAR_5)
{
 struct vmw_resource *VAR_6;

 if (!FUNC_1(VAR_3, VAR_4))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_1,
         FUNC_2(VAR_3, VAR_4),
         VAR_5, &VAR_6);
}
