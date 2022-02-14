
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_validation_context {struct mutex* res_mutex; } ;
struct mutex {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct vmw_validation_context*) ;
 int FUNC_4 (struct vmw_validation_context*,int) ;
 int FUNC_5 (struct vmw_validation_context*,int) ;
 int FUNC_6 (struct vmw_validation_context*,int) ;
 int FUNC_7 (struct vmw_validation_context*,int) ;
 int FUNC_8 (struct vmw_validation_context*,int) ;

int FUNC_9(struct vmw_validation_context *VAR_1,
      struct mutex *VAR_2,
      bool VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2) {
  if (VAR_3)
   VAR_4 = FUNC_1(VAR_2);
  else
   FUNC_0(VAR_2);
  if (VAR_4)
   return -VAR_0;
 }

 VAR_1->res_mutex = VAR_2;
 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (VAR_4)
  goto out_no_res_reserve;

 VAR_4 = FUNC_4(VAR_1, VAR_3);
 if (VAR_4)
  goto out_no_bo_reserve;

 VAR_4 = FUNC_5(VAR_1, VAR_3);
 if (VAR_4)
  goto out_no_validate;

 VAR_4 = FUNC_8(VAR_1, VAR_3);
 if (VAR_4)
  goto out_no_validate;

 return 0;

out_no_validate:
 FUNC_3(VAR_1);
out_no_bo_reserve:
 FUNC_7(VAR_1, 1);
out_no_res_reserve:
 if (VAR_2)
  FUNC_2(VAR_2);

 return VAR_4;
}
