
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const mrb_value ;
typedef int mrb_state ;
struct TYPE_2__ {int num_regs; int* beg; int* end; } ;
typedef TYPE_1__ OnigRegion ;
typedef int OnigRegex ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int *,int const,int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 char* FUNC_4 (int const) ;
 int const FUNC_5 (int *,int const,int const) ;
 int FUNC_6 (int const) ;
 int const FUNC_7 (int *) ;
 int const FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int const,int const) ;
 int FUNC_10 (int ) ;
 int const FUNC_11 (int *,int const,int ,int,int const*,int const) ;
 int FUNC_12 (int *,char*,int const*,int const*) ;
 int FUNC_13 (int *,char*) ;
 scalar_t__ FUNC_14 (int const) ;
 int VAR_1 ;
 int FUNC_15 (int const) ;
 int FUNC_16 (int *,int const,int const) ;
 scalar_t__ FUNC_17 (int *,int ,int const,int const,int) ;
 int const FUNC_18 (int *,int const,int,int) ;
 int FUNC_19 (char*,char*) ;

__attribute__((used)) static mrb_value
FUNC_20(mrb_state* VAR_2, mrb_value VAR_3) {
  mrb_value VAR_4, VAR_5;
  FUNC_12(VAR_2, "&o", &VAR_4, &VAR_5);

  if(!FUNC_2(VAR_5)) {
    return FUNC_11(VAR_2, VAR_3, FUNC_13(VAR_2, "string_scan"),
                                  1, &VAR_5, VAR_4);
  }

  OnigRegex VAR_6;
  FUNC_1(VAR_2, VAR_5, &VAR_1, VAR_6);
  mrb_value const VAR_7 = FUNC_14(VAR_4)? FUNC_7(VAR_2) : VAR_3;
  mrb_value VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_5);
  OnigRegion* const VAR_9 = (OnigRegion*)FUNC_0(VAR_8);
  int VAR_10 = 0;
  int VAR_11;

  while (1) {
    if(FUNC_17(VAR_2, VAR_6, VAR_8, VAR_3, VAR_10) == VAR_0) { break; }

    if(FUNC_14(VAR_4)) {
      FUNC_10(FUNC_6(VAR_7));
      if(VAR_9->num_regs == 1) {
        FUNC_9(VAR_2, VAR_7, FUNC_18(VAR_2, VAR_3, VAR_9->beg[0], VAR_9->end[0] - VAR_9->beg[0]));
      } else {
        mrb_value const VAR_12 = FUNC_8(VAR_2, VAR_9->num_regs - 1);
        for(VAR_11 = 1; VAR_11 < VAR_9->num_regs; ++VAR_11) {
          FUNC_9(VAR_2, VAR_12, FUNC_18(VAR_2, VAR_3, VAR_9->beg[VAR_11], VAR_9->end[VAR_11] - VAR_9->beg[VAR_11]));
        }
        FUNC_9(VAR_2, VAR_7, VAR_12);
      }
    } else {
      FUNC_10(FUNC_15(VAR_7));
      if(VAR_9->num_regs == 1) {
        FUNC_16(VAR_2, VAR_4, FUNC_18(VAR_2, VAR_3, VAR_9->beg[0], VAR_9->end[0] - VAR_9->beg[0]));
      } else {
        mrb_value VAR_13 = FUNC_8(VAR_2, VAR_9->num_regs - 1);
        for(VAR_11 = 1; VAR_11 < VAR_9->num_regs; ++VAR_11) {
          FUNC_9(VAR_2, VAR_13, FUNC_18(VAR_2, VAR_3, VAR_9->beg[VAR_11], VAR_9->end[VAR_11] - VAR_9->beg[VAR_11]));
        }
        FUNC_16(VAR_2, VAR_4, VAR_13);
      }
    }

    if (VAR_9->beg[0] == VAR_9->end[0]) {



      if (FUNC_3(VAR_3) > VAR_9->end[0]) {
        char* VAR_14 = FUNC_4(VAR_3) + VAR_10;
        char* VAR_15 = VAR_14 + FUNC_3(VAR_3);
        int VAR_16 = FUNC_19(VAR_14, VAR_15);
        VAR_10 = VAR_9->end[0] + VAR_16;
      } else {
        VAR_10 = VAR_9->end[0] + 1;
      }
    } else {
      VAR_10 = VAR_9->end[0];
    }
  }

  return VAR_7;
}
