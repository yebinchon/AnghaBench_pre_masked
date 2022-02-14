
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_bool ;
struct TYPE_2__ {int* beg; int* end; int num_regs; } ;
typedef TYPE_1__ OnigRegion ;
typedef int OnigRegex ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,int ,char*,int,int ,...) ;
 int FUNC_14 (int *,char*,int *,int*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,char*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int VAR_1 ;
 int FUNC_20 (int *,int ,char*) ;
 int FUNC_21 (int *,char*) ;
 char* FUNC_22 (int *,int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ,int const,int ,int) ;
 int FUNC_26 (int *,int ,int,scalar_t__) ;
 int FUNC_27 (char*,char*) ;

__attribute__((used)) static mrb_value
FUNC_28(mrb_state* VAR_2, mrb_value VAR_3) {
  mrb_value VAR_4 = FUNC_18(); mrb_int VAR_5 = 0;
  int VAR_6 = FUNC_14(VAR_2, "|oi", &VAR_4, &VAR_5);
  mrb_value VAR_7, VAR_8;
  mrb_bool VAR_9 = !(VAR_6 == 2 && 0 < VAR_5);

  if(FUNC_17(VAR_4)) {
    VAR_4 = FUNC_15(VAR_2, FUNC_16(VAR_2, "$;"));
    if (FUNC_17(VAR_4)) {
      VAR_4 = FUNC_21(VAR_2, " ");
    } else if (!FUNC_23(VAR_4) && !FUNC_2(VAR_4)) {
      FUNC_20(VAR_2, VAR_0, "value of $; must be String or Regexp");
    }
    if (VAR_6 == 0) { VAR_6 = 1; }
  }

  if (!FUNC_2(VAR_4)) {
    if(!FUNC_17(VAR_4)) { VAR_4 = FUNC_24(VAR_2, VAR_4); }
    if(FUNC_23(VAR_4) && FUNC_4(VAR_4) == 0) {

      VAR_4 = FUNC_13(VAR_2, FUNC_19(FUNC_11(VAR_2, "OnigRegexp")), "new", 1, VAR_4);
    } else {
      return FUNC_13(VAR_2, VAR_3, "string_split", VAR_6, VAR_4, FUNC_12(VAR_5));
    }
  }

  if(FUNC_4(VAR_3) == 0) { return FUNC_6(VAR_2); }
  if(VAR_5 == 1) { return FUNC_7(VAR_2, 1, &VAR_3); }

  VAR_7 = FUNC_6(VAR_2);

  OnigRegex VAR_10;
  FUNC_1(VAR_2, VAR_4, &VAR_1, VAR_10);
  mrb_value const VAR_11 = FUNC_5(VAR_2, VAR_3, VAR_4);
  OnigRegion* const VAR_12 = (OnigRegion*)FUNC_0(VAR_11);
  char *VAR_13 = FUNC_22(VAR_2, VAR_3);
  mrb_int VAR_14 = FUNC_4(VAR_3);
  mrb_int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
  mrb_int VAR_18 = 0, VAR_19 = 0;
  mrb_int VAR_20 = 0;

  if (VAR_6 == 2) { VAR_19 = 1; }
  while ((VAR_17 = FUNC_25(VAR_2, VAR_10, VAR_11, VAR_3, VAR_15)) >= 0) {
    if (VAR_15 == VAR_17 && VAR_12->beg[0] == VAR_12->end[0]) {
      if (!VAR_13) {
        FUNC_9(VAR_2, VAR_7, FUNC_21(VAR_2, ""));
        break;
      }
      else if (VAR_20 == 1) {
        FUNC_9(VAR_2, VAR_7, FUNC_26(VAR_2, VAR_3, VAR_16, FUNC_27(VAR_13+VAR_16, VAR_13+VAR_14)));
        VAR_16 = VAR_15;
      }
      else {
        if (VAR_15 == VAR_14)
          VAR_15++;
        else
          VAR_15 += FUNC_27(VAR_13+VAR_15, VAR_13+VAR_14);
        VAR_20 = 1;
        continue;
      }
    }
    else {
      FUNC_9(VAR_2, VAR_7, FUNC_26(VAR_2, VAR_3, VAR_16, VAR_17-VAR_16));
      VAR_16 = VAR_15 = VAR_12->end[0];
    }
    VAR_20 = 0;

    for (VAR_18=1; VAR_18 < VAR_12->num_regs; VAR_18++) {
      if (VAR_12->beg[VAR_18] == -1) continue;
      if (VAR_12->beg[VAR_18] == VAR_12->end[VAR_18])
        VAR_8 = FUNC_21(VAR_2, "");
      else
        VAR_8 = FUNC_26(VAR_2, VAR_3, VAR_12->beg[VAR_18], VAR_12->end[VAR_18]-VAR_12->beg[VAR_18]);
      FUNC_9(VAR_2, VAR_7, VAR_8);
    }
    if (!VAR_9 && VAR_5 <= ++VAR_19) break;
  }

  if (FUNC_4(VAR_3) > 0 && (!VAR_9 || FUNC_4(VAR_3) > VAR_16 || VAR_5 < 0)) {
    if (FUNC_4(VAR_3) == VAR_16)
      VAR_8 = FUNC_21(VAR_2, "");
    else
      VAR_8 = FUNC_26(VAR_2, VAR_3, VAR_16, FUNC_4(VAR_3)-VAR_16);
    FUNC_9(VAR_2, VAR_7, VAR_8);
  }
  if (VAR_9 && VAR_5 == 0) {
    while ((VAR_14 = FUNC_3(VAR_7)) > 0 &&
        (VAR_8 = FUNC_10(VAR_2, VAR_7, VAR_14-1), FUNC_4(VAR_8) == 0))
      FUNC_8(VAR_2, VAR_7);
  }

  return VAR_7;
}
