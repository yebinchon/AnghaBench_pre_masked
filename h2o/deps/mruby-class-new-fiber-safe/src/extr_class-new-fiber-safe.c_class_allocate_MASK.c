
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
struct RClass {scalar_t__ tt; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef enum mrb_vtype { ____Placeholder_mrb_vtype } mrb_vtype ;


 int VAR_0 ;
 int FUNC_0 (struct RClass*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct RClass* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int,struct RClass*) ;
 int FUNC_3 (struct RObject*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int ,char*,int ) ;

__attribute__((used)) static mrb_value FUNC_6(mrb_state *VAR_4, mrb_value VAR_5)
{
  struct RClass *VAR_6 = FUNC_1(VAR_5);
  struct RObject *VAR_7;
  enum mrb_vtype VAR_8 = FUNC_0(VAR_6);

  if (VAR_6->tt == VAR_3)
    FUNC_4(VAR_4, VAR_0, "can't create instance of singleton class");

  if (VAR_8 == 0) VAR_8 = VAR_2;
  if (VAR_8 <= VAR_1) {
    FUNC_5(VAR_4, VAR_0, "can't create instance of %S", VAR_5);
  }
  VAR_7 = (struct RObject*)FUNC_2(VAR_4, VAR_8, VAR_6);
  return FUNC_3(VAR_7);
}
