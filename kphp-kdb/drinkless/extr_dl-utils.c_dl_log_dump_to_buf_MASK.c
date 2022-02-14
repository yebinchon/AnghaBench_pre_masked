
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; char* s; int* v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2 (int VAR_3, int VAR_4, int VAR_5, char *VAR_6, int VAR_7, int VAR_8) {
  FUNC_0 (0 <= VAR_3 && VAR_3 < VAR_1);

  int VAR_9 = VAR_2[VAR_3].i, VAR_10 = 0;

  do {
    if (--VAR_9 == -1) {
      VAR_9 = VAR_0 - 1;
    }

    char VAR_11 = VAR_2[VAR_3].s[VAR_9];
    if (FUNC_1 (VAR_11 == 0)) {
      break;
    }
    if (VAR_5 >= VAR_2[VAR_3].v[VAR_9] && VAR_2[VAR_3].v[VAR_9] >= VAR_4) {
      if (VAR_11 == '\n') {
        if (--VAR_8 < 0) {
          break;
        }
      }
      VAR_6[VAR_10++] = VAR_11;
    }
  } while (VAR_2[VAR_3].i != VAR_9 && VAR_10 + 1 < VAR_7);
  VAR_6[VAR_10] = 0;
  VAR_9 = 0;
  int VAR_12 = VAR_10 - 1;
  while (VAR_9 < VAR_12) {
    char VAR_13 = VAR_6[VAR_9];
    VAR_6[VAR_9] = VAR_6[VAR_12];
    VAR_6[VAR_12] = VAR_13;
    VAR_9++, VAR_12--;
  }

  return VAR_10;
}
