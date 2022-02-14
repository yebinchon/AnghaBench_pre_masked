
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_4__ {struct RClass* kernel_module; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(mrb_state *VAR_2)
{
  struct RClass *VAR_3;
  VAR_3 = VAR_2->kernel_module;

  FUNC_2(VAR_2, VAR_3, "_load_rb_str", VAR_1, FUNC_0());
  FUNC_2(VAR_2, VAR_3, "_load_mrb_file", VAR_0, FUNC_1(1));
}
