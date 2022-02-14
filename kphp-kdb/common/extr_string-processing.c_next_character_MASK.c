
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline char FUNC_1 (const char *VAR_0, int *VAR_1) {
  int VAR_2 = *VAR_1;
  char VAR_3 = VAR_0[VAR_2];
  if (VAR_3 == '&') {
    if (VAR_0[VAR_2 + 1] == 'a' && VAR_0[VAR_2 + 2] == 'm' && VAR_0[VAR_2 + 3] == 'p' && VAR_0[VAR_2 + 4] == ';') {
      VAR_2 += 4;
    } else if (VAR_0[VAR_2 + 1] == '#') {
      int VAR_4 = 0, VAR_5 = VAR_2;
      for (VAR_2 += 2; '0' <= VAR_0[VAR_2] && VAR_0[VAR_2] <= '9'; VAR_2++) {
        VAR_4 = VAR_4 * 10 + VAR_0[VAR_2] - '0';
      }
      if (VAR_0[VAR_2] == ';') {
        int VAR_6 = FUNC_0 (VAR_4);
        if (VAR_6 <= 255) {
          VAR_3 = VAR_6;
        } else {
          VAR_3 = 0;
        }
      } else {
        VAR_2 = VAR_5;
      }
    } else if (VAR_0[VAR_2 + 1] == 'l' && VAR_0[VAR_2 + 2] == 't' && VAR_0[VAR_2 + 3] == ';') {
      VAR_2 += 3, VAR_3 = '<';
    } else if (VAR_0[VAR_2 + 1] == 'g' && VAR_0[VAR_2 + 2] == 't' && VAR_0[VAR_2 + 3] == ';') {
      VAR_2 += 3, VAR_3 = '>';
    } else if (VAR_0[VAR_2 + 1] == 'q' && VAR_0[VAR_2 + 2] == 'u' && VAR_0[VAR_2 + 3] == 'o' && VAR_0[VAR_2 + 4] == 't' && VAR_0[VAR_2 + 5] == ';') {
      VAR_2 += 5, VAR_3 = '"';
    }
  } else if (VAR_3 == '<') {
    if (VAR_0[VAR_2 + 1] == 'b' && VAR_0[VAR_2 + 2] == 'r' && VAR_0[VAR_2 + 3] == '>') {
      VAR_2 += 3, VAR_3 = '\n';
    }
  }
  *VAR_1 = VAR_2;

  return VAR_3;
}
