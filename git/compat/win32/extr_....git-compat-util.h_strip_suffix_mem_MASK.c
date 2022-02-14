
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_0, size_t *VAR_1,
       const char *VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_2);
 if (*VAR_1 < VAR_3 || FUNC_0(VAR_0 + (*VAR_1 - VAR_3), VAR_2, VAR_3))
  return 0;
 *VAR_1 -= VAR_3;
 return 1;
}
