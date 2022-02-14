
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_info {char** argv; size_t pos; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int) ;

int FUNC_3(int *VAR_0, struct args_info *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_1->argv[VAR_1->pos];

 if (!FUNC_0(VAR_3, VAR_2)) {
  *VAR_0 = 1;
  return 1;
 }

 if (!FUNC_2(VAR_3, "--no-", FUNC_1("--no-")) &&
     !FUNC_0(VAR_3 + FUNC_1("--no-"), VAR_2 + 2)) {
  *VAR_0 = 0;
  return 1;
 }

 *VAR_0 = -1;
 return 0;
}
