
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_1(char const **VAR_1, int VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_0(*VAR_1, &VAR_6, 10);
 if (*VAR_6 && *VAR_6 != VAR_2)
  return -1;
 if (VAR_4 > VAR_0)
  return -1;
 VAR_5 = *VAR_1 == VAR_6 ? VAR_3 : (int)VAR_4;
 *VAR_1 = *VAR_6 ? VAR_6 + 1 : VAR_6;
 return VAR_5;
}
