
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, char **VAR_2)
{
 char *VAR_3;
 char VAR_4[VAR_0 + sizeof(":enable=")];
 int VAR_5;
 int VAR_6;

 if (VAR_1 < 1)
  return (1);

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_1(VAR_4, "%s:enable=", VAR_2[VAR_5]);
  VAR_3 = VAR_4;
  VAR_6 += FUNC_0(VAR_3);
 }

 return (VAR_6);
}
