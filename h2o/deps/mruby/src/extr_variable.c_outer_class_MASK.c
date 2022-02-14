
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;




 struct RClass* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,struct RObject*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct RClass*
FUNC_5(mrb_state *VAR_0, struct RClass *VAR_1)
{
  mrb_value VAR_2;

  VAR_2 = FUNC_3(VAR_0, (struct RObject*)VAR_1, FUNC_1(VAR_0, "__outer__"));
  if (FUNC_2(VAR_2)) return ((void*)0);
  switch (FUNC_4(VAR_2)) {
  case 129:
  case 128:
    return FUNC_0(VAR_2);
  default:
    break;
  }
  return ((void*)0);
}
