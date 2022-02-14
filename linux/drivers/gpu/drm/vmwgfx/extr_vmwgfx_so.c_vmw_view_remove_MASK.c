
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_resource {int dummy; } ;
struct vmw_cmdbuf_res_manager {int dummy; } ;
struct list_head {int dummy; } ;
typedef enum vmw_view_type { ____Placeholder_vmw_view_type } vmw_view_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct vmw_cmdbuf_res_manager*,int ,int ,struct list_head*,struct vmw_resource**) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct vmw_cmdbuf_res_manager *VAR_2,
      u32 VAR_3, enum vmw_view_type VAR_4,
      struct list_head *VAR_5,
      struct vmw_resource **VAR_6)
{
 if (!FUNC_2(VAR_3, VAR_4)) {
  FUNC_0("Illegal view remove view id.\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_1,
         FUNC_3(VAR_3, VAR_4),
         VAR_5, VAR_6);
}
