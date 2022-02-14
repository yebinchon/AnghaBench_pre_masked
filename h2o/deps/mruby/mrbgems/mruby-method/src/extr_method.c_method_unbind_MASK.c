
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 struct RObject* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct RObject*,int ,int ) ;
 int FUNC_6 (struct RObject*) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RObject *VAR_2;
  mrb_value VAR_3 = FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, "@owner"));
  mrb_value VAR_4 = FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, "@name"));
  mrb_value VAR_5 = FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, "proc"));
  mrb_value VAR_6 = FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, "@klass"));

  VAR_2 = FUNC_0(VAR_0, FUNC_1(VAR_0, "UnboundMethod"));
  FUNC_5(VAR_0, VAR_2, FUNC_2(VAR_0, "@owner"), VAR_3);
  FUNC_5(VAR_0, VAR_2, FUNC_2(VAR_0, "@recv"), FUNC_4());
  FUNC_5(VAR_0, VAR_2, FUNC_2(VAR_0, "@name"), VAR_4);
  FUNC_5(VAR_0, VAR_2, FUNC_2(VAR_0, "proc"), VAR_5);
  FUNC_5(VAR_0, VAR_2, FUNC_2(VAR_0, "@klass"), VAR_6);

  return FUNC_6(VAR_2);
}
