
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int time_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

double
FUNC_2 (void)
{
  static uint64_t VAR_0 = 0;
  static time_t VAR_1 = 0;
  static uint32_t VAR_2 = 0;

  uint64_t VAR_3 = FUNC_1 ();
  time_t VAR_4 = FUNC_0(((void*)0));
  double VAR_5 = VAR_4 * 1000;
  if (VAR_4 - VAR_1 > (time_t)(((uint32_t)-1) / 1000000)) {
    VAR_2 = 0;
  } else if (VAR_0 > VAR_3) {
    VAR_2 = (VAR_2 + 33) % 1000;
  }
  VAR_5 += (VAR_3 / 1000 - VAR_2) % 1000;

  VAR_0 = VAR_3;
  VAR_1 = VAR_4;
  return VAR_5;
}
