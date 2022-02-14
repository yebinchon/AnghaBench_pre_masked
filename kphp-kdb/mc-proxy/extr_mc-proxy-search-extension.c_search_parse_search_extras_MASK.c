
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static const char *FUNC_1 (const char *VAR_7) {
  VAR_5 = 0;
  VAR_4 = 0;
  VAR_1 = 0;
  VAR_6 = 0;

  VAR_3 = VAR_2 = 0;

  if (*VAR_7 != '#') {
    return VAR_7;
  }
  VAR_7++;
  while (*VAR_7 != '(' && *VAR_7 != '[') {
    if (*VAR_7 == '%') {
      VAR_5 = 1;
    } else if (*VAR_7 == 'X') {
    } else if (*VAR_7 == 'i') {
     VAR_4 &= ~4;
    } else if (*VAR_7 == 'I') {
     VAR_4 |= 4;
    } else if (*VAR_7 == 'P' || *VAR_7 == 'T') {
      VAR_4 |= 8;
    } else if (*VAR_7 == 'U') {
      VAR_4 |= 2;
    } else if (*VAR_7 == 'V') {

    } else if ('A' <= *VAR_7 && *VAR_7 <= 'Z') {
      VAR_4 |= 4;
      VAR_4 |= 8;
    } else if (('a' <= *VAR_7 && *VAR_7 <= 'z') || *VAR_7 == '?') {
      VAR_4 &= ~4;
      VAR_4 |= 8;
    } else if ('0' <= *VAR_7 && *VAR_7 <= '9') {
      VAR_3 = VAR_7;
      char *VAR_8;
      VAR_1 = FUNC_0 (VAR_7, &VAR_8, 10);
      VAR_7 = VAR_8;
      VAR_2 = VAR_7;
      if (VAR_1 < 0) { VAR_1 = 0; }
      if (VAR_1 > VAR_0) { VAR_1 = VAR_0; }
      VAR_7--;
    } else {
      return VAR_7;
    }
    VAR_7++;
  }
  return VAR_7;
}
