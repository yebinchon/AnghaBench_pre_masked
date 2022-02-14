
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_0, const char *VAR_1, int *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 if (0 <= VAR_3) {
  *VAR_2 = 1;
  return VAR_3;
 }
 *VAR_2 = 0;
 return FUNC_0(VAR_0, VAR_1);
}
