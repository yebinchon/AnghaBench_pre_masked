
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int) ;

char *FUNC_2 (time_t *VAR_0)
{
  struct tm *VAR_1;
  static char VAR_2[32];

  VAR_1 = FUNC_0(VAR_0);
  FUNC_1(VAR_2,"%4d/%02d/%02d %02d:%02d:%02d",
          VAR_1->tm_year+1900, VAR_1->tm_mon+1, VAR_1->tm_mday,
          VAR_1->tm_hour, VAR_1->tm_min, VAR_1->tm_sec);
  return VAR_2;
}
