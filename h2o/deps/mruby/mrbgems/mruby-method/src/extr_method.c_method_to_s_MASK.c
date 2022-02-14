
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,struct RClass*) ;
 struct RClass* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "@owner"));
  mrb_value VAR_3 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "@klass"));
  mrb_value VAR_4 = FUNC_4(VAR_0, VAR_1, FUNC_3(VAR_0, "@name"));
  mrb_value VAR_5 = FUNC_9(VAR_0, "#<");
  struct RClass *VAR_6;

  FUNC_6(VAR_0, VAR_5, FUNC_5(VAR_0, VAR_1));
  FUNC_7(VAR_0, VAR_5, ": ");
  VAR_6 = FUNC_1(VAR_3);
  if (FUNC_1(VAR_2) == VAR_6) {
    FUNC_8(VAR_0, VAR_5, FUNC_2(VAR_0, VAR_2, "to_s", 0));
    FUNC_7(VAR_0, VAR_5, "#");
    FUNC_8(VAR_0, VAR_5, FUNC_2(VAR_0, VAR_4, "to_s", 0));
  }
  else {
    FUNC_6(VAR_0, VAR_5, FUNC_0(VAR_0, VAR_6));
    FUNC_7(VAR_0, VAR_5, "(");
    FUNC_8(VAR_0, VAR_5, FUNC_2(VAR_0, VAR_2, "to_s", 0));
    FUNC_7(VAR_0, VAR_5, ")#");
    FUNC_8(VAR_0, VAR_5, FUNC_2(VAR_0, VAR_4, "to_s", 0));
  }
  FUNC_7(VAR_0, VAR_5, ">");
  return VAR_5;
}
