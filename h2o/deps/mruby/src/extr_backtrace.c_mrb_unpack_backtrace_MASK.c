
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct backtrace_location {scalar_t__ method_id; int lineno; int * filename; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
struct TYPE_2__ {scalar_t__ flags; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,scalar_t__) ;

mrb_value
FUNC_14(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct backtrace_location *VAR_3;
  mrb_int VAR_4, VAR_5;
  int VAR_6;

  if (FUNC_9(VAR_2)) {
  empty_backtrace:
    return FUNC_2(VAR_1, 0);
  }
  if (FUNC_1(VAR_2)) return VAR_2;
  VAR_3 = (struct backtrace_location*)FUNC_4(VAR_1, VAR_2, &VAR_0);
  if (VAR_3 == ((void*)0)) goto empty_backtrace;
  VAR_4 = (mrb_int)FUNC_0(VAR_2)->flags;
  VAR_2 = FUNC_2(VAR_1, VAR_4);
  VAR_6 = FUNC_8(VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    struct backtrace_location *VAR_7 = &VAR_3[VAR_5];
    mrb_value VAR_8;

    if (VAR_7->filename == ((void*)0)) continue;
    VAR_8 = FUNC_6(VAR_1, "%S:%S",
                              FUNC_12(VAR_1, VAR_7->filename),
                              FUNC_5(VAR_7->lineno));
    if (VAR_7->method_id != 0) {
      FUNC_11(VAR_1, VAR_8, ":in ");
      FUNC_10(VAR_1, VAR_8, FUNC_13(VAR_1, VAR_7->method_id));
    }
    FUNC_3(VAR_1, VAR_2, VAR_8);
    FUNC_7(VAR_1, VAR_6);
  }

  return VAR_2;
}
