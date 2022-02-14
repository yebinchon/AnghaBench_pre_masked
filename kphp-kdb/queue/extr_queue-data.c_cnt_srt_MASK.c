
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int was ;
struct TYPE_4__ {int x; } ;
typedef TYPE_1__ pli ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int*,int ,int) ;

void FUNC_3 (pli *VAR_1, int VAR_2, pli *VAR_3) {
  static int VAR_4[10001] = {0},
             VAR_5[10001] = {0},
             VAR_6[10001] = {0},
             VAR_7 = 0, VAR_8 = 0;

  FUNC_0 (0 < VAR_0 && VAR_0 <= 10000);

  if (++VAR_8 == 0) {
    FUNC_2 (VAR_4, 0, sizeof (VAR_4));
    VAR_8 = 1;
  }

  int VAR_9;
  VAR_7 = 0;
  VAR_6[0] = 0;
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
    int VAR_10 = FUNC_1 (VAR_1[VAR_9].x) % VAR_0;
    if (VAR_4[VAR_10] != VAR_8) {
      VAR_5[VAR_10] = VAR_7;
      VAR_4[VAR_10] = VAR_8;
      VAR_7++;
      VAR_6[VAR_7] = 0;
    }

    VAR_6[VAR_5[VAR_10] + 1]++;
  }
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    VAR_6[VAR_9 + 1] += VAR_6[VAR_9];
  }
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
    VAR_3[VAR_6[VAR_5[FUNC_1 (VAR_1[VAR_9].x) % VAR_0]]++] = VAR_1[VAR_9];
  }
}
