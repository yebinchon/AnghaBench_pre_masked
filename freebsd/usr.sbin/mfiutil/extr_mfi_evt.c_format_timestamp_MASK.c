
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tm ;
typedef int time_t ;
struct tm {int tm_mday; int tm_year; } ;
typedef int buffer ;


 int FUNC_0 (struct tm*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct tm*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*,int,char*,int ) ;

__attribute__((used)) static const char *
FUNC_5(uint32_t VAR_0)
{
 static char VAR_1[32];
 static time_t VAR_2;
 time_t VAR_3;
 struct tm VAR_4;

 if ((VAR_0 & 0xff000000) == 0xff000000) {
  FUNC_3(VAR_1, sizeof(VAR_1), "boot + %us", VAR_0 &
      0x00ffffff);
  return (VAR_1);
 }

 if (VAR_2 == 0) {

  FUNC_0(&VAR_4, sizeof(VAR_4));
  VAR_4.tm_mday = 1;
  VAR_4.tm_year = (2000 - 1900);
  VAR_2 = FUNC_2(&VAR_4);
 }
 if (VAR_2 == -1) {
  FUNC_3(VAR_1, sizeof(VAR_1), "%us", VAR_0);
  return (VAR_1);
 }
 VAR_3 = VAR_2 + VAR_0;
 FUNC_4(VAR_1, sizeof(VAR_1), "%+", FUNC_1(&VAR_3));
 return (VAR_1);
}
