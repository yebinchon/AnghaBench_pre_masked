
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_9__ {struct RClass* kernel_module; } ;
typedef TYPE_1__ mrb_state ;
typedef scalar_t__ mrb_bool ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,struct RClass*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int VAR_3 ;
 int FUNC_8 () ;

void
FUNC_9(mrb_state *VAR_4, mrb_bool VAR_5)
{
  struct RClass *VAR_6, *VAR_7;

  VAR_6 = VAR_4->kernel_module;
  FUNC_2(VAR_4, VAR_6, "__t_printstr__", VAR_3, FUNC_0(1));

  VAR_7 = FUNC_3(VAR_4, "Mrbtest");

  FUNC_1(VAR_4, VAR_7, "FIXNUM_MAX", FUNC_4(VAR_1));
  FUNC_1(VAR_4, VAR_7, "FIXNUM_MIN", FUNC_4(VAR_2));
  FUNC_1(VAR_4, VAR_7, "FIXNUM_BIT", FUNC_4(VAR_0));





  FUNC_1(VAR_4, VAR_7, "FLOAT_TOLERANCE", FUNC_5(VAR_4, 1e-12));



  if (VAR_5) {
    FUNC_6(VAR_4, FUNC_7(VAR_4, "$mrbtest_verbose"), FUNC_8());
  }
}
