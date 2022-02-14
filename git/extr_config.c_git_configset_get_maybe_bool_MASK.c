
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_set {int dummy; } ;


 int FUNC_0 (struct config_set*,char const*,char const**) ;
 int FUNC_1 (char const*) ;

int FUNC_2(struct config_set *VAR_0, const char *VAR_1, int *VAR_2)
{
 const char *VAR_3;
 if (!FUNC_0(VAR_0, VAR_1, &VAR_3)) {
  *VAR_2 = FUNC_1(VAR_3);
  if (*VAR_2 == -1)
   return -1;
  return 0;
 } else
  return 1;
}
