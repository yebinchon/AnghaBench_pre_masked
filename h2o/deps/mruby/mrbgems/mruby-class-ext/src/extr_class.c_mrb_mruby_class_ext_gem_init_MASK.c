
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_4__ {struct RClass* module_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4(mrb_state *VAR_3)
{
  struct RClass *VAR_4 = VAR_3->module_class;

  FUNC_3(VAR_3, VAR_4, "name", VAR_1, FUNC_2());
  FUNC_3(VAR_3, VAR_4, "singleton_class?", VAR_2, FUNC_2());
  FUNC_3(VAR_3, VAR_4, "module_exec", VAR_0, FUNC_0()|FUNC_1());
  FUNC_3(VAR_3, VAR_4, "class_exec", VAR_0, FUNC_0()|FUNC_1());
}
