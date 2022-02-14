
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, char **VAR_2)
{
 char *VAR_3;
 char VAR_4[VAR_0 + sizeof(":reload=")];
 int VAR_5;
 int VAR_6;

 if (VAR_1 == 0) {
  VAR_3 = FUNC_2(":reload=");
  return (FUNC_0(VAR_3));
 }

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_1(VAR_4, "%s:reload=", VAR_2[VAR_5]);
  VAR_3 = VAR_4;
  VAR_6 += FUNC_0(VAR_3);
 }

 return (VAR_6);
}
