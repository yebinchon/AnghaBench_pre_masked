
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1, mrb_sym VAR_2)
{
  mrb_value VAR_3, *VAR_4;
  const mrb_value *VAR_5;
  mrb_int VAR_6, VAR_7;

  VAR_3 = FUNC_8(VAR_0, VAR_1);
  VAR_5 = FUNC_1(VAR_3);
  VAR_7 = FUNC_0(VAR_3);
  VAR_4 = FUNC_2(VAR_1);
  for (VAR_6=0; VAR_6<VAR_7; VAR_6++) {
    mrb_value VAR_8 = VAR_5[VAR_6];
    if (FUNC_7(VAR_8) && FUNC_6(VAR_8) == VAR_2) {
      return VAR_4[VAR_6];
    }
  }
  FUNC_3(VAR_0, VAR_2, "no member '%S' in struct", FUNC_5(VAR_0, VAR_2));
  return FUNC_4();
}
