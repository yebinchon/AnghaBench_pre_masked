
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*,void**,int*) ;

__attribute__((used)) static inline int
FUNC_2(const char *VAR_0)
{
 void *VAR_1;
 int VAR_2;

 if (FUNC_1(VAR_0, " %p%n", &VAR_1, &VAR_2) != 1)
  return (0);
 if (VAR_0[VAR_2] != ':' || FUNC_0(VAR_0[VAR_2 + 1]) == 0)
  return (0);
 return (1);
}
