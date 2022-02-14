
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RBasic {int dummy; } ;
struct RArray {int dummy; } ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (struct RArray*) ;
 scalar_t__ FUNC_1 (struct RArray*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct RArray*) ;
 int FUNC_3 (struct RArray*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,struct RArray*,scalar_t__) ;
 int FUNC_6 (int *,struct RArray*) ;
 int FUNC_7 (int *,struct RArray*,struct RArray*) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,struct RBasic*) ;

__attribute__((used)) static void
FUNC_10(mrb_state *VAR_2, struct RArray *VAR_3, struct RArray *VAR_4)
{
  mrb_int VAR_5;

  if (FUNC_1(VAR_3) == 0) {
    FUNC_7(VAR_2, VAR_3, VAR_4);
    return;
  }
  if (FUNC_1(VAR_4) > VAR_0 - FUNC_1(VAR_3)) {
    FUNC_8(VAR_2, VAR_1, "array size too big");
  }
  VAR_5 = FUNC_1(VAR_3) + FUNC_1(VAR_4);

  FUNC_6(VAR_2, VAR_3);
  if (FUNC_0(VAR_3) < VAR_5) {
    FUNC_5(VAR_2, VAR_3, VAR_5);
  }
  FUNC_4(FUNC_2(VAR_3)+FUNC_1(VAR_3), FUNC_2(VAR_4), FUNC_1(VAR_4));
  FUNC_9(VAR_2, (struct RBasic*)VAR_3);
  FUNC_3(VAR_3, VAR_5);
}
