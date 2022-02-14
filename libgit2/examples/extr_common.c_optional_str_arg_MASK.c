
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_info {char** argv; size_t pos; int argc; } ;


 size_t FUNC_0 (char const*,char const*) ;

int FUNC_1(
 const char **VAR_0, struct args_info *VAR_1, const char *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = VAR_1->argv[VAR_1->pos];
 size_t VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (!VAR_5)
  return 0;

 if (!VAR_4[VAR_5]) {
  if (VAR_1->pos + 1 == VAR_1->argc) {
   *VAR_0 = VAR_3;
   return 1;
  }
  VAR_1->pos += 1;
  *VAR_0 = VAR_1->argv[VAR_1->pos];
  return 1;
 }

 if (VAR_4[VAR_5] == '=') {
  *VAR_0 = VAR_4 + VAR_5 + 1;
  return 1;
 }

 return 0;
}
