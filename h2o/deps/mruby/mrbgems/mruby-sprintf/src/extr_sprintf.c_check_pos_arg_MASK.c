
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_1, mrb_int VAR_2, mrb_int VAR_3)
{
  if (VAR_2 > 0) {
    FUNC_1(VAR_1, VAR_0, "numbered(%S) after unnumbered(%S)",
               FUNC_0(VAR_3), FUNC_0(VAR_2));
  }
  if (VAR_2 == -2) {
    FUNC_1(VAR_1, VAR_0, "numbered(%S) after named", FUNC_0(VAR_3));
  }
  if (VAR_3 < 1) {
    FUNC_1(VAR_1, VAR_0, "invalid index - %S$", FUNC_0(VAR_3));
  }
}
