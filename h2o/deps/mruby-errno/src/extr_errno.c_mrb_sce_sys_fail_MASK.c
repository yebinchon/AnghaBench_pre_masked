
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int name ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_2__ {struct RClass* c; } ;


 TYPE_1__* FUNC_0 (int ) ;
 struct RClass* FUNC_1 (int *,char*) ;
 struct RClass* FUNC_2 (int *,int ,char*,struct RClass*) ;
 int FUNC_3 (int *,struct RClass*,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,char*,int,int ,...) ;
 int FUNC_7 (int *,char*,scalar_t__*,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 () ;
 struct RClass* FUNC_10 (int *,int ) ;
 int FUNC_11 (struct RClass*) ;
 int FUNC_12 (char*,int,char*,long) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RClass *VAR_2, *VAR_3;
  mrb_value VAR_4, VAR_5;
  mrb_int VAR_6;
  int VAR_7;
  char VAR_8[8];

  VAR_3 = FUNC_1(VAR_0, "SystemCallError");
  VAR_7 = FUNC_7(VAR_0, "i|S", &VAR_6, &VAR_5);
  if (VAR_7 == 1) {
    VAR_4 = FUNC_6(VAR_0, FUNC_11(VAR_3), "new", 1, FUNC_5(VAR_6));
  } else {
    VAR_4 = FUNC_6(VAR_0, FUNC_11(VAR_3), "new", 2, VAR_5, FUNC_5(VAR_6));
  }
  if (FUNC_10(VAR_0, VAR_4) == VAR_3) {
    FUNC_12(VAR_8, sizeof(VAR_8), "E%03ld", (long)VAR_6);
    VAR_2 = FUNC_2(VAR_0, FUNC_8(VAR_0, "Errno"), VAR_8, VAR_3);
    FUNC_3(VAR_0, VAR_2, "Errno", FUNC_5(VAR_6));
    FUNC_0(VAR_4)->c = VAR_2;
  }
  FUNC_4(VAR_0, VAR_4);
  return FUNC_9();
}
