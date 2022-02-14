
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_flag {char* name; int flag; } ;
typedef int regmatch_t ;
typedef int regex_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 () ;
 struct reg_flag* VAR_0 ;
 scalar_t__ FUNC_2 (int *,char const*,int) ;
 scalar_t__ FUNC_3 (int *,char const*,int,int *,int ) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

int FUNC_7(int VAR_1, const char **VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;
 int VAR_5 = 0;
 regex_t VAR_6;
 regmatch_t VAR_7[1];

 if (VAR_1 == 2 && !FUNC_4(VAR_2[1], "--bug"))
  return FUNC_5();
 else if (VAR_1 < 3)
  FUNC_6("test-tool regex --bug\n"
        "test-tool regex <pattern> <string> [<options>]");

 VAR_2++;
 VAR_3 = *VAR_2++;
 VAR_4 = *VAR_2++;
 while (*VAR_2) {
  struct reg_flag *VAR_8;
  for (VAR_8 = VAR_0; VAR_8->name; VAR_8++)
   if (!FUNC_4(*VAR_2, VAR_8->name)) {
    VAR_5 |= VAR_8->flag;
    break;
   }
  if (!VAR_8->name)
   FUNC_0("do not recognize %s", *VAR_2);
  VAR_2++;
 }
 FUNC_1();

 if (FUNC_2(&VAR_6, VAR_3, VAR_5))
  FUNC_0("failed regcomp() for pattern '%s'", VAR_3);
 if (FUNC_3(&VAR_6, VAR_4, 1, VAR_7, 0))
  return 1;

 return 0;
}
