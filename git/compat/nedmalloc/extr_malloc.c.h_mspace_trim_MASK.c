
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mstate ;
typedef int mspace ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;

int FUNC_5(mspace VAR_0, size_t VAR_1) {
  int VAR_2 = 0;
  mstate VAR_3 = (mstate)VAR_0;
  if (FUNC_3(VAR_3)) {
    if (!FUNC_1(VAR_3)) {
      VAR_2 = FUNC_4(VAR_3, VAR_1);
      FUNC_0(VAR_3);
    }
  }
  else {
    FUNC_2(VAR_3,VAR_3);
  }
  return VAR_2;
}
