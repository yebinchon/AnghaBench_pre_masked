
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_4__ {struct RClass* kernel_module; struct RClass* nil_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_4(mrb_state* VAR_4)
{
  struct RClass * VAR_5 = VAR_4->nil_class;

  FUNC_3(VAR_4, VAR_5, "to_a", VAR_1, FUNC_2());

  FUNC_3(VAR_4, VAR_5, "to_f", VAR_2, FUNC_2());

  FUNC_3(VAR_4, VAR_5, "to_i", VAR_3, FUNC_2());

  FUNC_3(VAR_4, VAR_4->kernel_module, "instance_exec", VAR_0, FUNC_0() | FUNC_1());
}
