
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long privacy_key_t ;


 unsigned int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2 (const char *VAR_2, privacy_key_t *VAR_3, int VAR_4) {
  int VAR_5 = 0, VAR_6;
  unsigned VAR_7, VAR_8;
  if (VAR_1 > 1) {
    FUNC_1 (VAR_0, "parsing privacy key '%s', reqeol=%d\n", VAR_2, VAR_4);
  }
  while ((VAR_2[VAR_5] | 0x20) >= 'a' && (VAR_2[VAR_5] | 0x20) <= 'z' && VAR_5 <= 32) {
    VAR_5++;
  }
  if (VAR_5 <= 0 || VAR_5 == 32) {
    return -1;
  }
  VAR_6 = VAR_5;
  if (VAR_2[VAR_6] >= '0' && VAR_2[VAR_6] <= '9') {
    VAR_8 = 0;
    while (VAR_2[VAR_6] >= '0' && VAR_2[VAR_6] <= '9') {
      if (VAR_6 >= 48 || VAR_8 > 0x7fffffff / 10) {
        return -1;
      }
      VAR_8 = VAR_8 * 10 + (VAR_2[VAR_6] - '0');
      VAR_6++;
    }
  } else if (VAR_2[VAR_6] == '*') {
    VAR_8 = ~0;
    VAR_6++;
  } else {
    if (VAR_2[VAR_6] != '_' && VAR_2[VAR_6] != ' ' && VAR_2[VAR_6] != ',' && VAR_2[VAR_6]) {
      return -1;
    }
    while ((signed char) VAR_2[VAR_6] >= '0') {
      VAR_6++;
      if (VAR_6 >= 64) {
        return -1;
      }
    }
    VAR_8 = FUNC_0 (VAR_2 + VAR_5, VAR_6 - VAR_5);
  }
  if (VAR_2[VAR_6]) {
    if (VAR_4 > 0) {
      return -1;
    }
    if (VAR_2[VAR_6] != ' ' && (VAR_2[VAR_6] != ',' || VAR_4 != -1)) {
      return -1;
    }
  }
  VAR_7 = FUNC_0 (VAR_2, VAR_5);
  *VAR_3 = (((unsigned long long) VAR_7) << 32) + VAR_8;
  if (VAR_1 > 1) {
    FUNC_1 (VAR_0, "privacy key = %016llx\n", *VAR_3);
  }
  return VAR_6;
}
