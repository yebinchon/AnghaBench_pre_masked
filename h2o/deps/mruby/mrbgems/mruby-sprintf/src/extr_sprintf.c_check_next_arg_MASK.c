
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_1, int VAR_2, int VAR_3)
{
  switch (VAR_2) {
  case -1:
    FUNC_1(VAR_1, VAR_0, "unnumbered(%S) mixed with numbered", FUNC_0(VAR_3));
    break;
  case -2:
    FUNC_1(VAR_1, VAR_0, "unnumbered(%S) mixed with named", FUNC_0(VAR_3));
    break;
  default:
    break;
  }
}
