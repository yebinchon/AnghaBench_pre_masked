
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const** VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_4 ;
 int FUNC_1 (char const*,char const*) ;
 char FUNC_2 (char) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3 (const char* VAR_6, int VAR_7) {
  unsigned VAR_8 = 0;
  const char *VAR_9 = VAR_6;
  while (*VAR_9) {
    char VAR_10 = *VAR_9++;
    if (VAR_10 < 0) {
      return VAR_0;
    }
    if (FUNC_0 (VAR_10)) {
      VAR_10 = FUNC_2 (VAR_10);
    }
    VAR_8 *= 131;
    VAR_8 += VAR_10;
  }

  unsigned VAR_11 = VAR_8 &= VAR_3 - 1;
  while (VAR_2[VAR_11]) {
    if (!FUNC_1 (VAR_6, VAR_2[VAR_11])) {
      return VAR_11;
    }
    if (++VAR_11 == VAR_3) {
      VAR_11 = 0;
    }
  }

  if (VAR_7) {
    VAR_2[VAR_11] = VAR_6;
    VAR_4++;
    if (VAR_11 != VAR_8) {
      VAR_5++;
    }
    return VAR_11;
  } else {
    return VAR_1;
  }
}
