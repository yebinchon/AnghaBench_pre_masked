
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,char*,int,int ,int ) ;
 int FUNC_5 (int *,char*,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,char*,int ) ;
 int FUNC_9 (int *,int ,int*,int*,int,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_3, mrb_value VAR_4)
{
  mrb_value VAR_5, VAR_6, VAR_7;
  mrb_int VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_5 = FUNC_6(VAR_3);
  VAR_8 = FUNC_0(VAR_5);
  VAR_9 = FUNC_5(VAR_3, "|oo", &VAR_6, &VAR_7);

  switch (VAR_9) {
    case 0:
      VAR_10 = 1;
      VAR_11 = VAR_8 - VAR_10;
      break;
    case 1:
      if (FUNC_11(VAR_6) == VAR_1) {
        mrb_int VAR_12, VAR_13;
        if (FUNC_9(VAR_3, VAR_6, &VAR_12, &VAR_13, VAR_8, VAR_2) == 1) {
          VAR_10 = VAR_12;
          VAR_11 = VAR_13;
        }
        else {
          return FUNC_7();
        }
      }
      else {
        VAR_6 = FUNC_10(VAR_3, VAR_6);
        VAR_10 = FUNC_2(VAR_6);
        if (VAR_10 < 0) {
          FUNC_8(VAR_3, VAR_0, "negative level (%S)", VAR_6);
        }
        VAR_11 = VAR_8 - VAR_10;
      }
      break;
    case 2:
      VAR_10 = FUNC_2(FUNC_10(VAR_3, VAR_6));
      VAR_11 = FUNC_2(FUNC_10(VAR_3, VAR_7));
      if (VAR_10 < 0) {
        FUNC_8(VAR_3, VAR_0, "negative level (%S)", VAR_6);
      }
      if (VAR_11 < 0) {
        FUNC_8(VAR_3, VAR_0, "negative size (%S)", VAR_7);
      }
      break;
    default:
      VAR_10 = VAR_11 = 0;
      break;
  }

  if (VAR_11 == 0) {
    return FUNC_1(VAR_3);
  }

  return FUNC_4(VAR_3, VAR_5, "[]", 2, FUNC_3(VAR_10), FUNC_3(VAR_11));
}
