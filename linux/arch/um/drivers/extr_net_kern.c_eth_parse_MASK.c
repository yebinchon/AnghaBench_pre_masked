
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, int *VAR_2, char **VAR_3,
       char **VAR_4)
{
 char *VAR_5;
 int VAR_6, VAR_7 = -VAR_0;

 VAR_6 = FUNC_1(VAR_1, &VAR_5, 0);
 if (VAR_5 == VAR_1) {
  *VAR_4 = "Bad device number";
  return VAR_7;
 }

 VAR_1 = VAR_5;
 if (*VAR_1 != '=') {
  *VAR_4 = "Expected '=' after device number";
  return VAR_7;
 }

 VAR_1++;
 if (FUNC_0(VAR_6)) {
  *VAR_4 = "Device already configured";
  return VAR_7;
 }

 *VAR_2 = VAR_6;
 *VAR_3 = VAR_1;
 return 0;
}
