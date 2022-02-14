
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static inline int FUNC_2(const char *VAR_0, size_t VAR_1,
      const char *VAR_2,
      const char **VAR_3, size_t *VAR_4)
{
 size_t VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 <= VAR_1 && !FUNC_0(VAR_0, VAR_2, VAR_5)) {
  *VAR_3 = VAR_0 + VAR_5;
  *VAR_4 = VAR_1 - VAR_5;
  return 1;
 }
 return 0;
}
