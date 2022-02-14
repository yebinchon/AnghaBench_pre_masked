
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int msg ;


 int FUNC_0 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char const*,int ) ;

void FUNC_3(const char *VAR_1, const char *VAR_2, va_list VAR_3)
{
 char VAR_4[4096];
 char *VAR_5;

 FUNC_2(VAR_4, sizeof(VAR_4), VAR_2, VAR_3);
 for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {
  if (FUNC_1(*VAR_5) && *VAR_5 != '\t' && *VAR_5 != '\n')
   *VAR_5 = '?';
 }
 FUNC_0(VAR_0, "%s%s\n", VAR_1, VAR_4);
}
