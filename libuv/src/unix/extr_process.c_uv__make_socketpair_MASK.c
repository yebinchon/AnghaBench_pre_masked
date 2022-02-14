
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int,int ,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(int VAR_6[2], int VAR_7) {

  static int VAR_8;

  if (VAR_8)
    goto skip;

  if (FUNC_1(VAR_0, VAR_2 | VAR_4 | VAR_7, 0, VAR_6) == 0)
    return 0;




  if (VAR_5 != VAR_1)
    return FUNC_0(VAR_5);

  VAR_8 = 1;

skip:


  if (FUNC_1(VAR_0, VAR_2, 0, VAR_6))
    return FUNC_0(VAR_5);

  FUNC_2(VAR_6[0], 1);
  FUNC_2(VAR_6[1], 1);

  if (VAR_7 & VAR_3) {
    FUNC_3(VAR_6[0], 1);
    FUNC_3(VAR_6[1], 1);
  }

  return 0;
}
