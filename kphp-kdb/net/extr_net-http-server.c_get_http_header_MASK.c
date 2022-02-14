
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*,char const*,int const) ;

int FUNC_2 (const char *VAR_0, const int VAR_1, char *VAR_2, int VAR_3, const char *VAR_4, const int VAR_5) {
  const char *VAR_6 = VAR_0;
  const char *VAR_7 = VAR_6 + VAR_1;
  while (VAR_6 < VAR_7) {
    const char *VAR_8 = VAR_6;
    while (VAR_6 < VAR_7 && (*VAR_6 != ':' && *VAR_6 != '\n')) {
      ++VAR_6;
    }
    if (VAR_6 == VAR_7) {
      VAR_2[0] = 0;
      return -1;
    }
    if (*VAR_6 == ':') {
      if (VAR_5 == VAR_6 - VAR_8 && !FUNC_1 (VAR_4, VAR_8, VAR_5)) {
        VAR_6++;
        while (VAR_6 < VAR_7 && (*VAR_6 == 9 || *VAR_6 == 32)) {
          VAR_6++;
        }
        VAR_8 = VAR_6;
        while (VAR_6 < VAR_7 && *VAR_6 != '\r' && *VAR_6 != '\n') {
          ++VAR_6;
        }
        while (VAR_6 > VAR_8 && (VAR_6[-1] == ' ' || VAR_6[-1] == 9)) {
          VAR_6--;
        }
        VAR_3--;
        if (VAR_6 - VAR_8 < VAR_3) {
          VAR_3 = VAR_6 - VAR_8;
        }
        FUNC_0 (VAR_2, VAR_8, VAR_3);
        VAR_2[VAR_3] = 0;
        return VAR_3;
      }
      ++VAR_6;
    }
    while (VAR_6 < VAR_7 && *VAR_6 != '\n') {
      ++VAR_6;
    }
    if (VAR_6 < VAR_7) {
      ++VAR_6;
    }
  }
  VAR_2[0] = 0;
  return -1;
}
