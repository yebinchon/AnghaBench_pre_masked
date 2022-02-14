
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {struct RClass* super; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 struct RClass* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct RClass*) ;
 struct RClass* FUNC_5 (int *) ;

__attribute__((used)) static inline mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1, mrb_sym VAR_2)
{
  struct RClass* VAR_3 = FUNC_0(VAR_1);
  struct RClass* VAR_4 = FUNC_5(VAR_0);
  mrb_value VAR_5;

  for (;;) {
    VAR_5 = FUNC_1(VAR_0, FUNC_4(VAR_3), VAR_2);
    if (!FUNC_2(VAR_5)) return VAR_5;
    VAR_3 = VAR_3->super;
    if (VAR_3 == VAR_4 || VAR_3 == 0)
      return FUNC_3();
  }
}
