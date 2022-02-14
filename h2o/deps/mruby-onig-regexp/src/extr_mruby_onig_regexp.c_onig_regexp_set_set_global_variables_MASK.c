
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
typedef int const mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int const) ;
 int const FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int const*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct RObject*,int ,int const) ;
 int FUNC_6 (int *,int const) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state* VAR_0, mrb_value VAR_1) {
  mrb_value VAR_2;
  FUNC_3(VAR_0, "o", &VAR_2);
  mrb_value const VAR_3 = FUNC_1(FUNC_0(VAR_2));
  FUNC_5(VAR_0, (struct RObject*)FUNC_2(VAR_0, "OnigRegexp"),
                 FUNC_4(VAR_0, "@set_global_variables"), VAR_3);
  FUNC_6(VAR_0, VAR_1);
  return VAR_3;
}
