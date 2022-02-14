
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct RObject*,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state* VAR_0, mrb_value VAR_1) {
  (void)VAR_1;
  return FUNC_2(VAR_0, (struct RObject*)FUNC_0(VAR_0, "OnigRegexp"),
                        FUNC_1(VAR_0, "@set_global_variables"));
}
