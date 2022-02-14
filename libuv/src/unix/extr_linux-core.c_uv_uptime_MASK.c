
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct timespec*) ;
 scalar_t__ VAR_3 ;

int FUNC_2(double* VAR_4) {
  static volatile int VAR_5;
  struct timespec VAR_6;
  int VAR_7;





  if (VAR_5) {
    retry: VAR_7 = FUNC_1(VAR_1, &VAR_6);
  }
  else if ((VAR_7 = FUNC_1(VAR_0, &VAR_6)) && VAR_3 == VAR_2) {
    VAR_5 = 1;
    goto retry;
  }

  if (VAR_7)
    return FUNC_0(VAR_3);

  *VAR_4 = VAR_6.tv_sec;
  return 0;
}
