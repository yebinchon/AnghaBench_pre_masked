
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mday; } ;


 int FUNC_0 (int) ;
 struct tm* FUNC_1 (int *) ;

int FUNC_2 (int VAR_0) {
  long VAR_1 = VAR_0 * 86400 + 43200 ;
  FUNC_0 (sizeof (time_t) == sizeof (long));

  struct tm *VAR_2 = FUNC_1 ((time_t *)&VAR_1);
  return VAR_0 - VAR_2->tm_mday;
}
