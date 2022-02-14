
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {struct RClass* kernel_module; struct RClass* proc_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(mrb_state* VAR_5)
{
  struct RClass *VAR_6 = VAR_5->proc_class;
  FUNC_2(VAR_5, VAR_6, "lambda?", VAR_2, FUNC_0());
  FUNC_2(VAR_5, VAR_6, "source_location", VAR_4, FUNC_0());
  FUNC_2(VAR_5, VAR_6, "to_s", VAR_1, FUNC_0());
  FUNC_2(VAR_5, VAR_6, "inspect", VAR_1, FUNC_0());
  FUNC_2(VAR_5, VAR_6, "parameters", VAR_3, FUNC_0());

  FUNC_1(VAR_5, VAR_5->kernel_module, "proc", VAR_0, FUNC_0());
  FUNC_2(VAR_5, VAR_5->kernel_module, "proc", VAR_0, FUNC_0());
}
