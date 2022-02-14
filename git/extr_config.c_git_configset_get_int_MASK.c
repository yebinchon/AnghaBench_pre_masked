
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_set {int dummy; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (struct config_set*,char const*,char const**) ;

int FUNC_2(struct config_set *VAR_0, const char *VAR_1, int *VAR_2)
{
 const char *VAR_3;
 if (!FUNC_1(VAR_0, VAR_1, &VAR_3)) {
  *VAR_2 = FUNC_0(VAR_1, VAR_3);
  return 0;
 } else
  return 1;
}
