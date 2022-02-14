
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int **,scalar_t__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int,int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3, VAR_4;
  mrb_value *VAR_5;
  mrb_int VAR_6;
  mrb_int VAR_7;
  mrb_value VAR_8, VAR_9;
  mrb_sym VAR_10;
  mrb_value *VAR_11;
  mrb_int VAR_12;

  VAR_3 = FUNC_7();
  FUNC_5(VAR_1, "*&", &VAR_11, &VAR_12, &VAR_8);
  if (VAR_12 == 0) {
    FUNC_9(VAR_1, VAR_0, "wrong number of arguments");
  }
  else {
    VAR_5 = VAR_11;
    VAR_6 = VAR_12;
    if (VAR_12 > 0) {
      VAR_3 = VAR_11[0];
      if (FUNC_10(VAR_3)) {

        VAR_3 = FUNC_7();
      }
      else {
        VAR_5++;
        VAR_6--;
      }
    }
    VAR_4 = FUNC_2(VAR_1, VAR_6, VAR_5);
    for (VAR_7=0; VAR_7<VAR_6; VAR_7++) {
      VAR_10 = FUNC_8(VAR_1, FUNC_0(VAR_4)[VAR_7]);
      FUNC_3(VAR_1, VAR_4, VAR_7, FUNC_11(VAR_10));
    }
    VAR_9 = FUNC_1(VAR_1, VAR_3, VAR_4, FUNC_4(VAR_2));
    if (!FUNC_6(VAR_8)) {
      FUNC_12(VAR_1, VAR_8, 1, &VAR_9, VAR_9, FUNC_4(VAR_9));
    }

    return VAR_9;
  }

  return FUNC_7();
}
