
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;


 struct tm* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,char*,int,int,int) ;
 int FUNC_2 (char*,char*) ;

void
FUNC_3(time_t VAR_0, char *VAR_1)
{
 struct tm *VAR_2;

 if (VAR_0 == 0) {
  FUNC_2(VAR_1, "no-entry");
 } else {
  VAR_2 = FUNC_0(&VAR_0);
  FUNC_1(VAR_1, "%2d:%02d:%02d",
   VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec);
 }
}
