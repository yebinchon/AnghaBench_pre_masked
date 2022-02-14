
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mt_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mt_state *VAR_1, mrb_value VAR_2)
{
  if (FUNC_2(VAR_2)) {
    VAR_2 = FUNC_1((mrb_int)(FUNC_5(((void*)0)) + FUNC_3(VAR_1)));
    if (FUNC_0(VAR_2) < 0) {
      VAR_2 = FUNC_1(0 - FUNC_0(VAR_2));
    }
  }

  FUNC_4(VAR_1, (unsigned) FUNC_0(VAR_2));

  return VAR_2;
}
