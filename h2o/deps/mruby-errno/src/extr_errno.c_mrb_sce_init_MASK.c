
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int buf ;
struct TYPE_2__ {int c; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*,int *,scalar_t__*) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int ,char*) ;
 int FUNC_15 (int *,char*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (char*,int,char*,int) ;
 char* FUNC_18 (scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_19(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3, VAR_4, VAR_5, VAR_6;
  mrb_int VAR_7;
  int VAR_8, VAR_9 = 0;
  char VAR_10[20];

  VAR_8 = FUNC_5(VAR_1, "o|i", &VAR_5, &VAR_7);
  if (VAR_8 == 1) {
    if (FUNC_16(VAR_5) == VAR_0) {
      VAR_7 = FUNC_3(VAR_5);
      VAR_5 = FUNC_11();
    } else {
      VAR_9 = 1;
    }
  }
  if (!VAR_9) {
    VAR_4 = FUNC_2(VAR_1, FUNC_12(FUNC_9(VAR_1, "Errno")), FUNC_7(VAR_1, "Errno2class"));
    VAR_3 = FUNC_6(VAR_1, VAR_4, FUNC_4(VAR_7), FUNC_11());
    if (!FUNC_10(VAR_3)) {
      FUNC_0(VAR_2)->c = FUNC_1(VAR_3);
      VAR_6 = FUNC_15(VAR_1, FUNC_18(VAR_7));
    } else {
      FUNC_8(VAR_1, VAR_2, FUNC_7(VAR_1, "errno"), FUNC_4(VAR_7));
      VAR_6 = FUNC_15(VAR_1, "Unknown error: ");
      FUNC_17(VAR_10, sizeof(VAR_10), "%d", (int)VAR_7);
      FUNC_14(VAR_1, VAR_6, VAR_10);
    }
  } else {
    VAR_6 = FUNC_15(VAR_1, "unknown error");
  }
  if (!FUNC_10(VAR_5)) {
    FUNC_14(VAR_1, VAR_6, " - ");
    FUNC_13(VAR_1, VAR_6, VAR_5);
  }
  FUNC_8(VAR_1, VAR_2, FUNC_7(VAR_1, "mesg"), VAR_6);
  return VAR_2;
}
