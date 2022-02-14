
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_fence_obj {int dummy; } ;
struct vmw_fence_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmw_fence_obj*) ;
 struct vmw_fence_obj* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct vmw_fence_manager*,struct vmw_fence_obj*,int ,int ) ;

int FUNC_4(struct vmw_fence_manager *VAR_3,
       uint32_t VAR_4,
       struct vmw_fence_obj **VAR_5)
{
 struct vmw_fence_obj *VAR_6;
  int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (FUNC_2(!VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_4,
     VAR_2);
 if (FUNC_2(VAR_7 != 0))
  goto out_err_init;

 *VAR_5 = VAR_6;
 return 0;

out_err_init:
 FUNC_0(VAR_6);
 return VAR_7;
}
