
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_info {char** argv; size_t pos; int argc; } ;


 int FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*,char const*) ;

int FUNC_2(
 const char **VAR_0, struct args_info *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_1->argv[VAR_1->pos];
 size_t VAR_4 = FUNC_1(VAR_3, VAR_2);

 if (!VAR_4)
  return 0;

 if (!VAR_3[VAR_4]) {
  if (VAR_1->pos + 1 == VAR_1->argc)
   FUNC_0("expected value following argument", VAR_2);
  VAR_1->pos += 1;
  *VAR_0 = VAR_1->argv[VAR_1->pos];
  return 1;
 }

 if (VAR_3[VAR_4] == '=') {
  *VAR_0 = VAR_3 + VAR_4 + 1;
  return 1;
 }

 return 0;
}
