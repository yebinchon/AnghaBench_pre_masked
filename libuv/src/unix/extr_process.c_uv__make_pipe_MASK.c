
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int*,int) ;

int FUNC_5(int VAR_4[2], int VAR_5) {

  static int VAR_6;

  if (VAR_6)
    goto skip;

  if (FUNC_4(VAR_4, VAR_5 | VAR_2) == 0)
    return 0;

  if (VAR_3 != VAR_0)
    return FUNC_0(VAR_3);

  VAR_6 = 1;

skip:


  if (FUNC_1(VAR_4))
    return FUNC_0(VAR_3);

  FUNC_2(VAR_4[0], 1);
  FUNC_2(VAR_4[1], 1);

  if (VAR_5 & VAR_1) {
    FUNC_3(VAR_4[0], 1);
    FUNC_3(VAR_4[1], 1);
  }

  return 0;
}
