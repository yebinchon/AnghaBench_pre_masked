
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int,int const*,int *) ;
 scalar_t__ FUNC_1 (int,int const*,int *) ;

int FUNC_2(int VAR_1, const sigset_t* VAR_2, sigset_t* VAR_3) {
  static int VAR_4;
  int VAR_5;

  if (VAR_4) {
    return FUNC_1(VAR_1, VAR_2, VAR_3);
  } else {
    VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
    if (VAR_5) {
      if (VAR_5 == VAR_0 && FUNC_1(VAR_1, VAR_2, VAR_3) == 0) {
        VAR_4 = 1;
        return 0;
      } else {
        return -1;
      }
    }
  }

  return 0;
}
