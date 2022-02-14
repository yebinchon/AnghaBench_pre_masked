
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int resbuf ;


 int FUNC_0 (char*,int,char*,char const*,...) ;

__attribute__((used)) static char *
FUNC_1(time_t VAR_0, const char *VAR_1)
{
 static char VAR_2[32];
 int VAR_3, VAR_4, VAR_5;

 if (VAR_0 < 0) {
  (void)FUNC_0(VAR_2, sizeof(VAR_2), "%s      ??:??", VAR_1);
  return (VAR_2);
 }

 VAR_5 = (VAR_0 + (60 - 1)) / 60;
 VAR_4 = VAR_5 / 60;
 VAR_5 %= 60;
 VAR_3 = VAR_4 / 24;
 VAR_4 %= 24;
 if (VAR_3)
  (void)FUNC_0(VAR_2, sizeof(VAR_2),
      "%s %4d+%02d:%02d", VAR_1, VAR_3, VAR_4, VAR_5);
 else
  (void)FUNC_0(VAR_2, sizeof(VAR_2),
      "%s      %2d:%02d", VAR_1, VAR_4, VAR_5);
 return (VAR_2);
}
