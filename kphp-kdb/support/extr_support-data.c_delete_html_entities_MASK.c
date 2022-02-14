
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

void FUNC_1 (char *VAR_0) {
  int VAR_1;

  for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
    int VAR_2 = VAR_1;
    if (VAR_0[VAR_1 + 1] == '#' && (VAR_0[VAR_1] == '&' || VAR_0[VAR_1] == '$')) {
      if (VAR_0[VAR_1 + 2] != 'x') {
        for (VAR_1 += 2; '0' <= VAR_0[VAR_1] && VAR_0[VAR_1] <= '9'; VAR_1++) {
        }
      } else {
        for (VAR_1 += 3; ('0' <= VAR_0[VAR_1] && VAR_0[VAR_1] <= '9') || ('a' <= VAR_0[VAR_1] && VAR_0[VAR_1] <= 'f') || ('A' <= VAR_0[VAR_1] && VAR_0[VAR_1] <= 'F'); VAR_1++) {
        }
      }
      while (VAR_2 != VAR_1) {
        VAR_0[VAR_2++] = ' ';
      }

      if (VAR_0[VAR_1] != ';') {
        VAR_1--;
      }
    } else if (VAR_0[VAR_1] == '%' && '0' <= VAR_0[VAR_1 + 1] && VAR_0[VAR_1 + 1] <= '7' &&
                            (('0' <= VAR_0[VAR_1 + 2] && VAR_0[VAR_1 + 2] <= '9') ||
                             ('a' <= VAR_0[VAR_1 + 2] && VAR_0[VAR_1 + 2] <= 'f') ||
                             ('A' <= VAR_0[VAR_1 + 2] && VAR_0[VAR_1 + 2] <= 'F'))) {
      VAR_1 += 2;

      while (VAR_2 != VAR_1) {
        VAR_0[VAR_2++] = ' ';
      }
    }
  }
  for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
    if (VAR_0[VAR_1] == '&' && VAR_0[VAR_1 + 1] == '#') {
      if (!strncmp (VAR_0 + VAR_1 + 2, &"&#amp;" [ 2], 6 - 2)) { int VAR_3 = VAR_1 + 6; while (VAR_1 < VAR_3) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#gt;" [ 2], 5 - 2)) { int VAR_4 = VAR_1 + 5; while (VAR_1 < VAR_4) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#lt;" [ 2], 5 - 2)) { int VAR_5 = VAR_1 + 5; while (VAR_1 < VAR_5) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#quot;" [ 2], 7 - 2)) { int VAR_6 = VAR_1 + 7; while (VAR_1 < VAR_6) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#33;" [ 2], 5 - 2)) { int VAR_7 = VAR_1 + 5; while (VAR_1 < VAR_7) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#34;" [ 2], 5 - 2)) { int VAR_8 = VAR_1 + 5; while (VAR_1 < VAR_8) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#36;" [ 2], 5 - 2)) { int VAR_9 = VAR_1 + 5; while (VAR_1 < VAR_9) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#39;" [ 2], 5 - 2)) { int VAR_10 = VAR_1 + 5; while (VAR_1 < VAR_10) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#60;" [ 2], 5 - 2)) { int VAR_11 = VAR_1 + 5; while (VAR_1 < VAR_11) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#62;" [ 2], 5 - 2)) { int VAR_12 = VAR_1 + 5; while (VAR_1 < VAR_12) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#8232;" [ 2], 7 - 2)) { int VAR_13 = VAR_1 + 7; while (VAR_1 < VAR_13) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
      if (!FUNC_0 (VAR_0 + VAR_1 + 2, &"&#8233;" [ 2], 7 - 2)) { int VAR_14 = VAR_1 + 7; while (VAR_1 < VAR_14) { VAR_0[VAR_1++] = ' '; } VAR_1--; };
    }
  }


}
