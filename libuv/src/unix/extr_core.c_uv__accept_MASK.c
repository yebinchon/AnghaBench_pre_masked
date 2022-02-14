
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int *,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,int *,int *,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

int FUNC_7(int VAR_5) {
  int VAR_6;
  int VAR_7;

  FUNC_2(VAR_5 >= 0);

  while (1) {



    static int VAR_8;

    if (VAR_8)
      goto skip;

    VAR_6 = FUNC_3(VAR_5,
                         ((void*)0),
                         ((void*)0),
                         VAR_3|VAR_2);
    if (VAR_6 != -1)
      return VAR_6;

    if (VAR_4 == VAR_0)
      continue;

    if (VAR_4 != VAR_1)
      return FUNC_0(VAR_4);

    VAR_8 = 1;
skip:


    VAR_6 = FUNC_1(VAR_5, ((void*)0), ((void*)0));
    if (VAR_6 == -1) {
      if (VAR_4 == VAR_0)
        continue;
      return FUNC_0(VAR_4);
    }

    VAR_7 = FUNC_4(VAR_6, 1);
    if (VAR_7 == 0)
      VAR_7 = FUNC_6(VAR_6, 1);

    if (VAR_7) {
      FUNC_5(VAR_6);
      return VAR_7;
    }

    return VAR_6;
  }
}
