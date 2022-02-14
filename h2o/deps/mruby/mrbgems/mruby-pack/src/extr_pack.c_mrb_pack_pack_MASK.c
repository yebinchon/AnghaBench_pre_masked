
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpl {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int mrb_float ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

 int VAR_3 ;




 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tmpl*) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,int ,char*,int ) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ,int ,int,int,unsigned int) ;
 int FUNC_16 (int *,int ,int ,int,unsigned int) ;
 int FUNC_17 (int *,int ,int ,int,unsigned int) ;
 int FUNC_18 (int *,int ,int ,int,unsigned int) ;
 int FUNC_19 (int *,int ,int ,int,int,unsigned int) ;
 int FUNC_20 (int *,int ,int ,int,unsigned int) ;
 int FUNC_21 (int *,int ,int ,int,int,unsigned int) ;
 int FUNC_22 (int *,int ,int ,int,unsigned int) ;
 int FUNC_23 (int *,int ,int ,int,unsigned int) ;
 int FUNC_24 (int *,int ,int ,int,int,unsigned int) ;
 scalar_t__ FUNC_25 (int *,int ,int ,int,int,unsigned int) ;
 int FUNC_26 (int *,struct tmpl*) ;
 int FUNC_27 (int *,struct tmpl*,int*,int*,int*,int*,unsigned int*) ;

__attribute__((used)) static mrb_value
FUNC_28(mrb_state *VAR_8, mrb_value VAR_9)
{
  mrb_value VAR_10, VAR_11;
  mrb_int VAR_12;
  struct tmpl VAR_13;
  int VAR_14;
  unsigned int VAR_15;
  int VAR_16, VAR_17, VAR_18, VAR_19;

  FUNC_26(VAR_8, &VAR_13);

  VAR_11 = FUNC_10(VAR_8, ((void*)0), 128);
  VAR_12 = 0;
  VAR_17 = 0;
  while (FUNC_1(&VAR_13)) {
    FUNC_27(VAR_8, &VAR_13, &VAR_16, &VAR_19, &VAR_18, &VAR_14, &VAR_15);

    if (VAR_16 == VAR_2)
      continue;
    else if (VAR_16 == VAR_3) {
        VAR_17 += FUNC_25(VAR_8, FUNC_6(), VAR_11, VAR_17, VAR_14, VAR_15);
        continue;
    }

    for (; VAR_12 < FUNC_0(VAR_9); VAR_12++) {
      if (VAR_14 == 0 && !(VAR_15 & VAR_4))
        break;

      VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_12);
      if (VAR_19 == VAR_6) {
        VAR_10 = FUNC_14(VAR_8, VAR_10);
      }

      else if (VAR_19 == VAR_5) {
        if (!FUNC_4(VAR_10)) {
          mrb_float VAR_20 = FUNC_13(VAR_8, VAR_10);
          VAR_10 = FUNC_5(VAR_8, VAR_20);
        }
      }

      else if (VAR_19 == VAR_7) {
        if (!FUNC_12(VAR_10)) {
          FUNC_9(VAR_8, VAR_1, "can't convert %S into String", FUNC_3(VAR_8, FUNC_7(VAR_8, VAR_10)));
        }
      }

      switch (VAR_16) {
      case 136:
        VAR_17 += FUNC_16(VAR_8, VAR_10, VAR_11, VAR_17, VAR_15);
        break;
      case 130:
        VAR_17 += FUNC_23(VAR_8, VAR_10, VAR_11, VAR_17, VAR_15);
        break;
      case 132:
        VAR_17 += FUNC_20(VAR_8, VAR_10, VAR_11, VAR_17, VAR_15);
        break;
      case 131:
        VAR_17 += FUNC_22(VAR_8, VAR_10, VAR_11, VAR_17, VAR_15);
        break;
      case 137:
        VAR_17 += FUNC_21(VAR_8, VAR_10, VAR_11, VAR_17, VAR_14, VAR_15);
        break;
      case 133:
        VAR_17 += FUNC_19(VAR_8, VAR_10, VAR_11, VAR_17, VAR_14, VAR_15);
        break;
      case 129:
        VAR_17 += FUNC_15(VAR_8, VAR_10, VAR_11, VAR_17, VAR_14, VAR_15);
        break;

      case 135:
        VAR_17 += FUNC_17(VAR_8, VAR_10, VAR_11, VAR_17, VAR_15);
        break;
      case 134:
        VAR_17 += FUNC_18(VAR_8, VAR_10, VAR_11, VAR_17, VAR_15);
        break;

      case 128:
        VAR_17 += FUNC_24(VAR_8, VAR_10, VAR_11, VAR_17, VAR_14, VAR_15);
        break;
      default:
        break;
      }
      if (VAR_16 == 129) {
        VAR_12++;
        break;
      }
      if (VAR_14 > 0) {
        VAR_14--;
      }
    }
    if (VAR_17 < 0) {
      FUNC_8(VAR_8, VAR_0, "negative (or overflowed) template size");
    }
  }

  FUNC_11(VAR_8, VAR_11, VAR_17);
  return VAR_11;
}
