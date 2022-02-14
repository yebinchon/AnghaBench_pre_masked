
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; int tm_mday; int tm_mon; int tm_year; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int) ;
 int FUNC_2 (int *) ;

char *
FUNC_3(void)
{
 static char VAR_0[50];
 time_t VAR_1;
 struct tm *VAR_2;
 FUNC_2(&VAR_1);
 VAR_2 = FUNC_0(&VAR_1);
 FUNC_1(VAR_0, "%02d:%02d:%02d %02d/%02d/%02d",
       VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec,
       VAR_2->tm_mday, VAR_2->tm_mon+1, VAR_2->tm_year );
 return VAR_0;
}
