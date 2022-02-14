
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static inline int FUNC_2(char const *VAR_1, int VAR_2, unsigned int *VAR_3)
{
 unsigned long VAR_4;
 char *VAR_5;

 VAR_0 = 0;

 if (FUNC_0(VAR_1, '-'))
  return -1;
 VAR_4 = FUNC_1(VAR_1, &VAR_5, VAR_2);
 if (VAR_0 || *VAR_5 || VAR_5 == VAR_1 || (unsigned int) VAR_4 != VAR_4)
  return -1;
 *VAR_3 = VAR_4;
 return 0;
}
