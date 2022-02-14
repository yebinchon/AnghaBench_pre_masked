
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (unsigned short const) ;
 int FUNC_2 (char*,char*,unsigned short const,...) ;

int FUNC_3 (const unsigned short VAR_0[8], char *VAR_1) {
  int VAR_2, VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
  for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
    if (VAR_0[VAR_2]) {
      if (VAR_3 > VAR_5) {
 VAR_5 = VAR_3;
 VAR_4 = VAR_2;
      }
      VAR_3 = 0;
    } else {
      VAR_3++;
    }
  }
  if (VAR_3 == 8) {
    FUNC_0 (VAR_1, "::", 3);
    return 2;
  }
  if (VAR_5 == 5 && VAR_0[5] == 0xffff) {
    return FUNC_2 (VAR_1, "::ffff:%d.%d.%d.%d", VAR_0[6]&255, VAR_0[6]>>8, VAR_0[7]&255, VAR_0[7]>>8);
  }
  char *VAR_6 = VAR_1;
  if (VAR_5) {
    for (VAR_2 = 0; VAR_2 < VAR_4 - VAR_5; VAR_2++) {
      VAR_6 += FUNC_2 (VAR_6, "%x:", FUNC_1 (VAR_0[VAR_2]));
    }
    if (!VAR_2 || VAR_4 == 8) {
      *VAR_6++ = ':';
    }
    for (VAR_2 = VAR_4; VAR_2 < 8; VAR_2++) {
      VAR_6 += FUNC_2 (VAR_6, ":%x", FUNC_1 (VAR_0[VAR_2]));
    }
  } else {
    for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
      VAR_6 += FUNC_2 (VAR_6, "%x:", FUNC_1 (VAR_0[VAR_2]));
    }
    VAR_6 += FUNC_2 (VAR_6, "%x", FUNC_1 (VAR_0[VAR_2]));
  }
  return VAR_6 - VAR_1;
}
