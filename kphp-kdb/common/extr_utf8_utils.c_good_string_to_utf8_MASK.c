
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,int*) ;

void FUNC_1 (const unsigned char *VAR_0, int *VAR_1) {
  FUNC_0 (VAR_0, VAR_1);

  int VAR_2, VAR_3;
  for (VAR_2 = VAR_3 = 0; VAR_1[VAR_2]; VAR_2++) {
    if (VAR_1[VAR_2] == '&') {
      if (VAR_1[VAR_2 + 1] == 'a' && VAR_1[VAR_2 + 2] == 'm' && VAR_1[VAR_2 + 3] == 'p' && VAR_1[VAR_2 + 4] == ';') {
        VAR_2 += 4, VAR_1[VAR_3++] = '&';
      } else if (VAR_1[VAR_2 + 1] == 'l' && VAR_1[VAR_2 + 2] == 't' && VAR_1[VAR_2 + 3] == ';') {
        VAR_2 += 3, VAR_1[VAR_3++] = '<';
      } else if (VAR_1[VAR_2 + 1] == 'g' && VAR_1[VAR_2 + 2] == 't' && VAR_1[VAR_2 + 3] == ';') {
        VAR_2 += 3, VAR_1[VAR_3++] = '>';
      } else if (VAR_1[VAR_2 + 1] == 'q' && VAR_1[VAR_2 + 2] == 'u' && VAR_1[VAR_2 + 3] == 'o' && VAR_1[VAR_2 + 4] == 't' && VAR_1[VAR_2 + 5] == ';') {
        VAR_2 += 5, VAR_1[VAR_3++] = '"';
      } else {
        VAR_1[VAR_3++] = '&';
      }
    } else {
      VAR_1[VAR_3++] = VAR_1[VAR_2];
    }
  }
  VAR_1[VAR_3++] = 0;

  for (VAR_2 = VAR_3 = 0; VAR_1[VAR_2]; VAR_2++) {
    if (VAR_1[VAR_2] == '&') {
      if (VAR_1[VAR_2 + 1] == 'a' && VAR_1[VAR_2 + 2] == 'm' && VAR_1[VAR_2 + 3] == 'p' && VAR_1[VAR_2 + 4] == ';') {
        VAR_2 += 4, VAR_1[VAR_3++] = '&';
      } else if (VAR_1[VAR_2 + 1] == '#') {
        int VAR_4 = 0, VAR_5 = VAR_2;
        for (VAR_2 += 2; VAR_1[VAR_2]!=';' && VAR_1[VAR_2]; VAR_2++) {
          if ('0' <= VAR_1[VAR_2] && VAR_1[VAR_2] <= '9') {
            VAR_4 = VAR_4 * 10 + VAR_1[VAR_2] - '0';
          } else {
            break;
          }
        }
        if (VAR_1[VAR_2] != ';') {
          VAR_1[VAR_3++] = VAR_1[VAR_2 = VAR_5];
        } else {
          VAR_1[VAR_3++] = VAR_4;
        }
      } else {
        VAR_1[VAR_3++] = VAR_1[VAR_2];
      }
    } else {
      VAR_1[VAR_3++] = VAR_1[VAR_2];
    }
  }
  VAR_1[VAR_3++] = 0;

  for (VAR_2 = VAR_3 = 0; VAR_1[VAR_2]; VAR_2++) {
    if (VAR_1[VAR_2] != 173 && (VAR_1[VAR_2] < 65024 || VAR_1[VAR_2] > 65062) && (VAR_1[VAR_2] < 7627 || VAR_1[VAR_2] > 7654) &&
        VAR_1[VAR_2] != 8288 && (VAR_1[VAR_2] < 8202 || VAR_1[VAR_2] > 8207) && (VAR_1[VAR_2] < 8400 || VAR_1[VAR_2] > 8433) &&
        VAR_1[VAR_2] != 8228 && (VAR_1[VAR_2] < 8298 || VAR_1[VAR_2] > 8303) &&
        VAR_1[VAR_2] != 65279 && (VAR_1[VAR_2] < 768 || VAR_1[VAR_2] > 879)) {
      VAR_1[VAR_3++] = VAR_1[VAR_2];
    }
  }
  VAR_1[VAR_3++] = 0;
}
