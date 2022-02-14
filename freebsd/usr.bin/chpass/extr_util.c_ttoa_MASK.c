
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {size_t tm_mon; int tm_mday; int tm_year; } ;


 struct tm* FUNC_0 (scalar_t__*) ;
 char** VAR_0 ;
 int FUNC_1 (char*,char*,char*,int,int) ;

char *
FUNC_2(time_t VAR_1)
{
 struct tm *VAR_2;
 static char VAR_3[50];

 if (VAR_1) {
  VAR_2 = FUNC_0(&VAR_1);
  (void)FUNC_1(VAR_3, "%s %d, %d", VAR_0[VAR_2->tm_mon],
      VAR_2->tm_mday, VAR_2->tm_year + 1900);
 }
 else
  *VAR_3 = '\0';
 return (VAR_3);
}
