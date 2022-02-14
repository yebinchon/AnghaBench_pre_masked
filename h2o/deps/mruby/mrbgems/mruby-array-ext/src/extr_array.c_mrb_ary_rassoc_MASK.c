
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3;
  mrb_value VAR_4, VAR_5;

  FUNC_3(VAR_1, "o", &VAR_5);

  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); ++VAR_3) {
    VAR_4 = FUNC_1(VAR_2)[VAR_3];
    if (FUNC_5(VAR_4) == VAR_0 &&
        FUNC_0(VAR_4) > 1 &&
        FUNC_2(VAR_1, FUNC_1(VAR_4)[1], VAR_5))
      return VAR_4;
  }
  return FUNC_4();
}
