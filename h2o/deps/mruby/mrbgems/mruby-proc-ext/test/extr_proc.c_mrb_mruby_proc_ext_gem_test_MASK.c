
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct RClass* FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_2 ;

void FUNC_4(mrb_state *VAR_3)
{
  struct RClass *VAR_4;

  VAR_4 = FUNC_2(VAR_3, "ProcExtTest", VAR_3->object_class);
  FUNC_3(VAR_3, VAR_4, "mrb_proc_new_cfunc_with_env", VAR_2, FUNC_1(1));
  FUNC_3(VAR_3, VAR_4, "mrb_cfunc_env_get", VAR_0, FUNC_1(2));
  FUNC_3(VAR_3, VAR_4, "cfunc_without_env", VAR_1, FUNC_0());
}
