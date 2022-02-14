
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 long long FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2 (char *VAR_0, int VAR_1, long long *VAR_2) {
  int VAR_3 = 0;
  VAR_2[0] = VAR_2[1] = 0;
  if (!*VAR_0) {
    return 1;
  }
  if (*VAR_0 != '.') {
    return -1;
  }
  int VAR_4 = 1;
  while (VAR_0[VAR_4] >= '0' && VAR_0[VAR_4] <= '9') {
    VAR_4++;
  }
  if (VAR_4 > 1) {
    if (VAR_4 < 7) {
      return -1;
    }
    int VAR_5 = (VAR_0[1] - '0') * 10 + (VAR_0[2] - '0');
    if (VAR_5 > 18) {
      return -1;
    }

    long long VAR_6 = FUNC_1 (VAR_0 + 3, 0, 10);

    int VAR_7 = VAR_5 - (VAR_4 - 7);
    if (VAR_7 < 0) {
      return -1;
    }

    if (VAR_5 > 0 && VAR_0[3] == '0') {
      return -1;
    }

    VAR_2[0] = VAR_6;
    VAR_2[1] = VAR_6;

    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
      VAR_2[0] *= 10;
      VAR_2[1] = VAR_2[1] * 10 + 9;
    }

    VAR_0 += VAR_4;
    if (!*VAR_0) {
      return 5;
    }
    if (*VAR_0 != '.') {
      return -1;
    }
    VAR_3 = 4;
  } else {
    VAR_2[0] = 0;
    VAR_2[1] = (1LL << 62);
  }

  switch (VAR_0[1]) {
  case 'b':
    if (!FUNC_0 (VAR_0, ".bin")) {
      return VAR_3;
    }
    return FUNC_0 (VAR_0, ".bin.bz") ? -1 : (VAR_3 + 16);
  case 'e':
    return FUNC_0 (VAR_0, ".enc") ? -1 : VAR_3 + 32;
  case 't':
    return FUNC_0 (VAR_0, ".tmp") ? -1 : VAR_3 + 3;
  }
  return -1;
}
