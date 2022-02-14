
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_0)
{
 char *VAR_1 = FUNC_1(FUNC_0(VAR_0));
 char VAR_2;
 char VAR_3 = '/';
 char *VAR_4 = VAR_1;

 while ((VAR_2 = *VAR_0++) != '\0') {
  if (VAR_3 == '/' && VAR_2 == VAR_3)
   continue;

  *VAR_4++ = VAR_2;
  VAR_3 = VAR_2;
 }
 *VAR_4 = '\0';
 return VAR_1;
}
