
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (char*,size_t,char*,int,int,int,int,int,int) ;

int FUNC_3 (char *VAR_0, int VAR_1, time_t VAR_2) {
  struct tm VAR_3;
  FUNC_0 (FUNC_1 (&VAR_2, &VAR_3));
  FUNC_0 (VAR_1 > 0);
  return FUNC_2 (VAR_0, (size_t)VAR_1, "[%4d-%02d-%02d %02d:%02d:%02d local] ", VAR_3.tm_year + 1900, VAR_3.tm_mon + 1, VAR_3.tm_mday, VAR_3.tm_hour, VAR_3.tm_min, VAR_3.tm_sec);
}
