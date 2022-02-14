
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mstate ;
typedef int mspace ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(mspace VAR_0, int VAR_1) {
  int VAR_2 = 0;
  mstate VAR_3 = (mstate)VAR_0;
  if (!FUNC_1(VAR_3)) {
    if (FUNC_4(VAR_3))
      VAR_2 = 1;
    if (VAR_1)
      FUNC_3(VAR_3);
    else
      FUNC_2(VAR_3);
    FUNC_0(VAR_3);
  }
  return VAR_2;
}
