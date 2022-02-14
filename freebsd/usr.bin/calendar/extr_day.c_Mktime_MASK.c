
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_mday; int tm_mon; int tm_year; } ;


 char* FUNC_0 (struct tm*) ;
 int FUNC_1 (int ,char*,int,int,char*) ;
 int FUNC_2 (scalar_t__*,struct tm*) ;
 scalar_t__ FUNC_3 (struct tm*) ;
 int FUNC_4 (char*,char*,int*,int*,int*) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__*) ;
 struct tm VAR_1 ;

time_t
FUNC_6(char *VAR_2)
{
 time_t VAR_3;
 int VAR_4, VAR_5, VAR_6;
 struct tm VAR_7, VAR_8;

 (void)FUNC_5(&VAR_3);
 FUNC_2(&VAR_3, &VAR_8);

 VAR_7 = VAR_1;
 VAR_7.tm_mday = VAR_8.tm_mday;
 VAR_7.tm_mon = VAR_8.tm_mon;
 VAR_7.tm_year = VAR_8.tm_year;

 switch (FUNC_4(VAR_2, "%d.%d.%d", &VAR_4, &VAR_5, &VAR_6)) {
 case 3:
  if (VAR_6 > 1900)
   VAR_6 -= 1900;
  VAR_7.tm_year = VAR_6;

 case 2:
  VAR_7.tm_mon = VAR_5 - 1;

 case 1:
  VAR_7.tm_mday = VAR_4;
 }





 return (FUNC_3(&VAR_7));
}
