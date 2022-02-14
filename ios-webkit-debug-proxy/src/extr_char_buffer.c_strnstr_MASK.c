
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,size_t) ;

char *FUNC_2(const char *VAR_0, const char *VAR_1, size_t VAR_2) {
  size_t VAR_3 = FUNC_0(VAR_1);
  if (VAR_2 >= VAR_3) {
    char VAR_4 = *VAR_1;
    const char *VAR_5 = VAR_0 + (VAR_2 - VAR_3);
    const char *VAR_6;
    for (VAR_6 = VAR_0; *VAR_6 && VAR_6 <= VAR_5; VAR_6++) {
      if (*VAR_6 == VAR_4 && !FUNC_1(VAR_6, VAR_1, VAR_3)) {
        return (char *)VAR_6;
      }
    }
  }
  return ((void*)0);
}
