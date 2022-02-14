
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_4__ {int* beg; int* end; int const num_regs; } ;
typedef int OnigUChar ;
typedef TYPE_1__ OnigRegion ;
typedef int OnigRegex ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (int *,int ,char const*,int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int const*,int const*,TYPE_1__*) ;
 int FUNC_13 (int *,int ,int,int) ;

__attribute__((used)) static void
FUNC_14(mrb_state* VAR_2, mrb_value VAR_3, mrb_value VAR_4,
                   mrb_value VAR_5, OnigRegex VAR_6, OnigRegion* VAR_7)
{
  if (FUNC_5(VAR_4)) {
    mrb_value VAR_8 = FUNC_4(VAR_2, VAR_4, FUNC_9(VAR_2, VAR_5, VAR_7->beg[0], VAR_7->end[0] - VAR_7->beg[0]));
    VAR_8 = FUNC_10(VAR_2, VAR_8);
    FUNC_8(VAR_2, VAR_3, VAR_8);
    return;
  }

  FUNC_3(FUNC_11(VAR_4));
  char const* VAR_9;
  char const* const VAR_10 = FUNC_1(VAR_4) + FUNC_0(VAR_4);
  for(VAR_9 = FUNC_1(VAR_4); VAR_9 < VAR_10; ++VAR_9) {
    if (*VAR_9 != '\\' || (VAR_9 + 1) >= VAR_10) {
      FUNC_7(VAR_2, VAR_3, VAR_9, 1);
      continue;
    }

    switch(*(++VAR_9)) {
      case 'k': {
        if ((VAR_9 + 2) >= VAR_10 || VAR_9[1] != '<') { goto replace_expr_error; }
        char const* VAR_11 = VAR_9 += 2;
        while (*VAR_9 != '>') { if(++VAR_9 == VAR_10) { goto replace_expr_error; } }
        FUNC_3(VAR_9 < VAR_10);
        FUNC_3(*VAR_9 == '>');
        int const VAR_12 = FUNC_12(
            VAR_6, (OnigUChar const*)VAR_11, (OnigUChar const*)VAR_9, VAR_7);
        if (VAR_12 < 0) {
          FUNC_6(VAR_2, VAR_0, "undefined group name reference: %S",
                     FUNC_13(VAR_2, VAR_4, VAR_11 - FUNC_1(VAR_4), VAR_9 - VAR_11));
        }
        FUNC_7(VAR_2, VAR_3, FUNC_1(VAR_5) + VAR_7->beg[VAR_12], VAR_7->end[VAR_12] - VAR_7->beg[VAR_12]);
      } break;

      case '\\':
        FUNC_7(VAR_2, VAR_3, VAR_9, 1);
        break;

      default:
        if (FUNC_2(*VAR_9)) {
          int const VAR_13 = *VAR_9 - '0';
          if (VAR_13 < VAR_7->num_regs) {
            FUNC_7(VAR_2, VAR_3, FUNC_1(VAR_5) + VAR_7->beg[VAR_13], VAR_7->end[VAR_13] - VAR_7->beg[VAR_13]);
          }
        } else {
          char const VAR_14[] = { '\\', *VAR_9 };
          FUNC_7(VAR_2, VAR_3, VAR_14, 2);
        }
        break;
    }
  }

  if(VAR_9 == VAR_10) { return; }

replace_expr_error:
  FUNC_6(VAR_2, VAR_1, "invalid replace expression: %S", VAR_4);
}
