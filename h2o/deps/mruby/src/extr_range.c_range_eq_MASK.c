
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RRange {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (struct RRange*) ;
 int FUNC_1 (struct RRange*) ;
 scalar_t__ FUNC_2 (struct RRange*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*,int,int ) ;
 int FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 struct RRange* FUNC_10 (int *,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RRange *VAR_2;
  struct RRange *VAR_3;
  mrb_value VAR_4, VAR_5, VAR_6;

  FUNC_6(VAR_0, "o", &VAR_4);

  if (FUNC_8(VAR_0, VAR_1, VAR_4)) return FUNC_11();
  if (!FUNC_9(VAR_0, VAR_4, FUNC_7(VAR_0, VAR_1))) {
    return FUNC_4();
  }

  VAR_2 = FUNC_10(VAR_0, VAR_1);
  VAR_3 = FUNC_10(VAR_0, VAR_4);
  VAR_5 = FUNC_5(VAR_0, FUNC_0(VAR_2), "==", 1, FUNC_0(VAR_3));
  VAR_6 = FUNC_5(VAR_0, FUNC_1(VAR_2), "==", 1, FUNC_1(VAR_3));
  if (!FUNC_3(VAR_5) || !FUNC_3(VAR_6) || FUNC_2(VAR_2) != FUNC_2(VAR_3)) {
    return FUNC_4();
  }
  return FUNC_11();
}
