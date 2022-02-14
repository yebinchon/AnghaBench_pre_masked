
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int ) ;

int FUNC_7(int VAR_6, int VAR_7) {
  int VAR_8;
  static int VAR_9;
  if (!VAR_9) {
    do
      VAR_8 = FUNC_6(VAR_6, VAR_7, VAR_4);
    while (VAR_8 == -1 && VAR_5 == VAR_0);
    if (VAR_8 != -1)
      return VAR_8;
    if (VAR_5 != VAR_2)
      return FUNC_0(VAR_5);

    VAR_9 = 1;
  }

  {
    int VAR_10;
    do
      VAR_8 = FUNC_1(VAR_6, VAR_7);

    while (VAR_8 == -1 && VAR_5 == VAR_0);




    if (VAR_8 == -1)
      return FUNC_0(VAR_5);

    VAR_10 = FUNC_4(VAR_7, 1);
    if (VAR_10) {
      FUNC_5(VAR_7);
      return VAR_10;
    }

    return VAR_8;
  }
}
