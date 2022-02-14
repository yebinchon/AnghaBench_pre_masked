
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct vmw_user_buffer_object {TYPE_1__ prime; } ;
struct ttm_object_file {int dummy; } ;
struct ttm_buffer_object {scalar_t__ destroy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ttm_object_file*,int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 struct vmw_user_buffer_object* FUNC_4 (struct ttm_buffer_object*) ;

int FUNC_5(struct ttm_buffer_object *VAR_2,
         struct ttm_object_file *VAR_3)
{
 struct vmw_user_buffer_object *VAR_4;

 if (FUNC_3(VAR_2->destroy != VAR_1))
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_2);


 if (FUNC_1(FUNC_2(VAR_3, &VAR_4->prime.base)))
  return 0;

 FUNC_0("Could not grant buffer access.\n");
 return -VAR_0;
}
