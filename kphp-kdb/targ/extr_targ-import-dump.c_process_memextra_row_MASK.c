
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_interests {int user_id; int text; scalar_t__ len; scalar_t__ type; } ;


 int* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char**,int) ;
 int VAR_9 ;
 struct lev_interests* FUNC_4 (scalar_t__) ;

void FUNC_5 (void) {
  int VAR_10 = VAR_0[VAR_6] / 1000;
  int VAR_11 = (VAR_0[VAR_6] % 1000) / 10;
  char *VAR_12, *VAR_13, *VAR_14;
  int VAR_15;
  VAR_9 = VAR_10;

  if (!FUNC_0(VAR_10)) {
    return;
  }
  if (VAR_11 <= 0 || VAR_11 > 7) {
    return;
  }


  if (VAR_8 != 1) {
    struct lev_interests *VAR_16 = FUNC_4 (11+VAR_1[VAR_7]);
    VAR_16->type = VAR_2 + VAR_11;
    VAR_16->user_id = VAR_9;
    VAR_16->len = VAR_1[VAR_7];
    FUNC_2 (VAR_16->text, VAR_3[VAR_7]);

    VAR_4++;
    return;
  }

  VAR_12 = VAR_13 = VAR_3[VAR_7];
  while (*VAR_12) {
    VAR_15 = (unsigned char) *VAR_12;
    if (VAR_15 == '&') {
      if (VAR_12[1] == '#') {
        VAR_15 = FUNC_3(VAR_12+2, &VAR_14, 10);
        if (!*VAR_14) { break; }
        if (VAR_14 > VAR_12+2 && *VAR_14 == ';') {
          if (VAR_15 < 128 || VAR_15 == 10006 || VAR_15 == 8236) {
            VAR_12 = VAR_14 + 1;
            *VAR_13++ = ' ';
            continue;
          }
          while (VAR_12 <= VAR_14) {
            *VAR_13++ = *VAR_12++;
          }
          continue;
        }
        VAR_12 += 2;
        continue;
      }
      if (VAR_12[1] >= 'a' && VAR_12[1] <= 'z') {
        VAR_14 = VAR_12 + 1;
        while (*VAR_14 >= 'a' && *VAR_14 <= 'z') { VAR_14++; }
        if (!*VAR_14) {
          break;
        }
        if (*VAR_14 == ';') {
          VAR_12 = VAR_14 + 1;
          *VAR_13++ = ' ';
          continue;
        }
      }
      *VAR_13++ = ' ';
      VAR_12++;
      continue;
    }
    if (VAR_15 == '<') {
      if (VAR_12[1] == 'b' && VAR_12[2] == 'r' && VAR_12[3] == '>') {
        *VAR_13++ = ' ';
        VAR_12 += 4;
        continue;
      }
      if (VAR_12[1] == '/' && VAR_12[2] == 'b' && VAR_12[3] == 'r' && VAR_12[4] == '>') {
        *VAR_13++ = ' ';
        VAR_12 += 5;
        continue;
      }
    }
    if (VAR_15 < 128 && !VAR_5[VAR_15]) { VAR_15 = ' '; }
    if (VAR_15 == 0xa8) { VAR_15 = 0xc5; }
    if (VAR_15 == 0xb8) { VAR_15 = 0xe5; }

    *VAR_13++ = VAR_15;
    VAR_12++;
  }
  VAR_13[0] = 0;

  VAR_15 = 0;
  for (VAR_12 = VAR_13 = VAR_3[VAR_7]; *VAR_12; VAR_12++) {
    if (*VAR_12 != VAR_15) {
      *VAR_13++ = VAR_15 = *VAR_12;
      if (VAR_15 != ' ') { VAR_15 = 0; }
    }
  }

  VAR_13[0] = VAR_13[1] = 0;

  VAR_12 = VAR_3[VAR_7];



  do {
    while ((unsigned char) *VAR_12 <= ' ' && *VAR_12) { VAR_12++; }
    if (!*VAR_12) { break; }
    if (*VAR_12 == ',') { VAR_12++; continue; }
    VAR_13 = VAR_12;
    while (*VAR_12 && *VAR_12 != ',') { VAR_12++; }
    while (VAR_12 > VAR_13 && VAR_12[-1] == ' ') { VAR_12--; }
    *VAR_12 = 0;
    if (VAR_8 == 1) {
      FUNC_1 (VAR_13, VAR_12-VAR_13);
    }
  } while (1);

  VAR_4++;

}
