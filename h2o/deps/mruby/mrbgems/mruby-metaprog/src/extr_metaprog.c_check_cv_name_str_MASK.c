
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  const char *VAR_2 = FUNC_1(VAR_1);
  mrb_int VAR_3 = FUNC_0(VAR_1);

  if (VAR_3 < 3 || !(VAR_2[0] == '@' && VAR_2[1] == '@')) {
    FUNC_3(VAR_0, FUNC_2(VAR_0, VAR_1), "'%S' is not allowed as a class variable name", VAR_1);
  }
}
