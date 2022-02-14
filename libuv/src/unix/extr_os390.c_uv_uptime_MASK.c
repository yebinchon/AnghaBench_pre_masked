
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct TYPE_2__ {int tv_sec; } ;
struct utmpx {TYPE_1__ ut_tv; int ut_type; } ;


 int VAR_0 ;
 double FUNC_0 (int ,int ) ;
 struct utmpx* FUNC_1 (struct utmpx*) ;
 int FUNC_2 (int *) ;

int FUNC_3(double* VAR_1) {
  struct utmpx VAR_2 ;
  struct utmpx *VAR_3;
  time64_t VAR_4;

  VAR_2.ut_type = VAR_0;
  VAR_3 = FUNC_1(&VAR_2);
  if (VAR_3 == ((void*)0))
    return -1;
  *VAR_1 = FUNC_0(FUNC_2(&VAR_4), VAR_3->ut_tv.tv_sec);
  return 0;
}
