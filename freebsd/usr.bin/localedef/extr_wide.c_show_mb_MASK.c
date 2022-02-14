
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scr ;
typedef int buf ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,int,char*,char const) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0)
{
 static char VAR_1[64];


 if (FUNC_0(*VAR_0) && FUNC_1(*VAR_0)) {
  VAR_1[0] = *VAR_0;
  VAR_1[1] = 0;
  return (VAR_1);
 }
 VAR_1[0] = 0;
 while (*VAR_0 != 0) {
  char VAR_2[8];
  (void) FUNC_2(VAR_2, sizeof (VAR_2), "\\x%02x", *VAR_0);
  (void) FUNC_3(VAR_1, VAR_2, sizeof (VAR_1));
  VAR_0++;
 }
 return (VAR_1);
}
