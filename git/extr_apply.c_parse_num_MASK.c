
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, unsigned long *VAR_1)
{
 char *VAR_2;

 if (!FUNC_0(*VAR_0))
  return 0;
 *VAR_1 = FUNC_1(VAR_0, &VAR_2, 10);
 return VAR_2 - VAR_0;
}
