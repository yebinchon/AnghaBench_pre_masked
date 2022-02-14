
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_1 (char const) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static inline int FUNC_3(const char *VAR_0, size_t *VAR_1,
         const char *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_2);
 if (*VAR_1 < VAR_3 + 1 ||
     !FUNC_1(VAR_0[*VAR_1 - VAR_3 - 1]) ||
     FUNC_0(VAR_0 + *VAR_1 - VAR_3, VAR_2, VAR_3))
  return 0;
 *VAR_1 -= VAR_3 + 1;

 while (*VAR_1 > 0 && FUNC_1(VAR_0[*VAR_1 - 1]))
  (*VAR_1)--;
 return 1;
}
