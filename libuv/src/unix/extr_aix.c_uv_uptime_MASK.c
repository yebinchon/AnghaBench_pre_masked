
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct utmp {scalar_t__ ut_type; scalar_t__ ut_time; scalar_t__* ut_user; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct utmp* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(double* VAR_4) {
  struct utmp *VAR_5;
  size_t VAR_6 = 0;
  time_t VAR_7;

  VAR_7 = 0;
  FUNC_4(VAR_2);

  FUNC_2();

  while ((VAR_5 = FUNC_1()) != ((void*)0)) {
    if (VAR_5->ut_user[0] && VAR_5->ut_type == VAR_1)
      ++VAR_6;
    if (VAR_5->ut_type == VAR_0)
      VAR_7 = VAR_5->ut_time;
  }

  FUNC_0();

  if (VAR_7 == 0)
    return VAR_3;

  *VAR_4 = FUNC_3(((void*)0)) - VAR_7;
  return 0;
}
