
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long git_time_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (char const*,char**,int) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, git_time_t *VAR_2, int *VAR_3)
{
 char *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 if (*VAR_1 < '0' || '9' <= *VAR_1)
  return -1;
 VAR_5 = FUNC_1(VAR_1, &VAR_4, 10);
 if (*VAR_4 != ' ' || VAR_5 == VAR_0 || (VAR_4[1] != '+' && VAR_4[1] != '-'))
  return -1;
 VAR_1 = VAR_4 + 2;
 VAR_6 = FUNC_0(VAR_1, &VAR_4, 10);
 if ((*VAR_4 != '\0' && (*VAR_4 != '\n')) || VAR_4 != VAR_1 + 4)
  return -1;
 VAR_6 = (VAR_6 / 100) * 60 + (VAR_6 % 100);
 if (VAR_1[-1] == '-')
  VAR_6 = -VAR_6;
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;
 return 0;
}
