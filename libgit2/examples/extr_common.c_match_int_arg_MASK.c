
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_info {int dummy; } ;


 int FUNC_0 (int*,char const*,int,char const*) ;
 char* FUNC_1 (struct args_info*,char const*) ;

int FUNC_2(
 int *VAR_0, struct args_info *VAR_1, const char *VAR_2, int VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4)
  return 0;
 return FUNC_0(VAR_0, VAR_4, VAR_3, VAR_2);
}
