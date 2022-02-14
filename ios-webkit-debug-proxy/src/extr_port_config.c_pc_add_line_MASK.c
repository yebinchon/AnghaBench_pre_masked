
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pc_t ;


 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ FUNC_1 (int ,char const*,int,char**,int*,int*) ;

const char *FUNC_2(pc_t VAR_0, const char *VAR_1, size_t VAR_2) {
  const char *VAR_3 = VAR_1;
  const char *VAR_4 = VAR_1 + VAR_2;
  while (VAR_3 < VAR_4) {
    while (VAR_3 < VAR_4 && (*VAR_3 == ' ' || *VAR_3 == '\t')) {
      VAR_3++;
    }
    const char *VAR_5 = VAR_3;
    while (VAR_5 < VAR_4 &&
        *VAR_5 && *VAR_5 != '\n' && *VAR_5 != '#' && *VAR_5 != ',') {
      VAR_5++;
    }
    if (VAR_3 < VAR_5) {
      char *VAR_6;
      int VAR_7;
      int VAR_8;
      if (FUNC_1(VAR_0, VAR_3, VAR_5 - VAR_3,
            &VAR_6, &VAR_7, &VAR_8)) {
        return VAR_3;
      }
      FUNC_0(VAR_0, VAR_6, VAR_7, VAR_8);
    }
    if (*VAR_5 != ',') break;
    VAR_3 = VAR_5+1;
  }
  return ((void*)0);
}
