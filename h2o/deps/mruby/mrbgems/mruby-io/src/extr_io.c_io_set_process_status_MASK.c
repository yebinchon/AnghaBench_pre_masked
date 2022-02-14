
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int pid_t ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 struct RClass* FUNC_2 (int *,struct RClass*,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,char*,int,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 struct RClass* FUNC_8 (int *,char*) ;
 int FUNC_9 (struct RClass*) ;

__attribute__((used)) static void
FUNC_10(mrb_state *VAR_0, pid_t VAR_1, int VAR_2)
{
  struct RClass *VAR_3, *VAR_4;
  mrb_value VAR_5;

  VAR_4 = ((void*)0);
  if (FUNC_1(VAR_0, "Process")) {
    VAR_3 = FUNC_8(VAR_0, "Process");
    if (FUNC_3(VAR_0, FUNC_9(VAR_3), FUNC_7(VAR_0, "Status"))) {
      VAR_4 = FUNC_2(VAR_0, VAR_3, "Status");
    }
  }
  if (VAR_4 != ((void*)0)) {
    VAR_5 = FUNC_5(VAR_0, FUNC_9(VAR_4), "new", 2, FUNC_4(VAR_1), FUNC_4(VAR_2));
  } else {
    VAR_5 = FUNC_4(FUNC_0(VAR_2));
  }
  FUNC_6(VAR_0, FUNC_7(VAR_0, "$?"), VAR_5);
}
