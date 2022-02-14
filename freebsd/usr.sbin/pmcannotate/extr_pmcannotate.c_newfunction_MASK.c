
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char*,void**,char*,int*) ;

__attribute__((used)) static inline int
FUNC_2(const char *VAR_1)
{
 char VAR_2[VAR_0];
 void *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_1[0]))
  return (0);
 if (FUNC_1(VAR_1, "%p <%[^>:]>:%n", &VAR_3, VAR_2, &VAR_4) != 2)
  return (0);
 return (VAR_4);
}
