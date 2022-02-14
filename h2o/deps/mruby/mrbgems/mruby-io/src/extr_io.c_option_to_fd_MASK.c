
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int,int ) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int
FUNC_9(mrb_state *VAR_1, mrb_value VAR_2, const char *VAR_3)
{
  mrb_value VAR_4 = FUNC_1(VAR_1, VAR_2, "[]", 1, FUNC_6(FUNC_2(VAR_1, VAR_3, FUNC_8(VAR_3))));
  if (FUNC_4(VAR_4)) {
    return -1;
  }

  switch (FUNC_7(VAR_4)) {
    case 129:
      return (int)FUNC_0(FUNC_3(VAR_1, VAR_4));
    case 128:
      return (int)FUNC_0(VAR_4);
    default:
      FUNC_5(VAR_1, VAR_0, "wrong exec redirect action");
      break;
  }
  return -1;
}
