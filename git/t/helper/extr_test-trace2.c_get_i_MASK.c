
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_1(int *VAR_4, const char *VAR_5)
{
 char *VAR_6;

 if (!VAR_5 || !*VAR_5)
  return VAR_1;

 *VAR_4 = FUNC_0(VAR_5, &VAR_6, 10);
 if (*VAR_6 || VAR_3 == VAR_0)
  return VAR_1;

 return VAR_2;
}
