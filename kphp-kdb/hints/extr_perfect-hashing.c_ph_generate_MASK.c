
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; int* sums; int mul0; int mul1; int * used; int * code; } ;
typedef TYPE_1__ perfect_hash ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int ) ;
 int* VAR_0 ;
 int FUNC_3 (int*,int) ;
 int* FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*,int,int) ;
 int* VAR_1 ;
 int FUNC_11 (long long,int,int) ;
 int FUNC_12 (int *,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

void FUNC_13 (perfect_hash *VAR_5, long long *VAR_6, int VAR_7) {


  FUNC_1 (VAR_5->code == ((void*)0));
  int VAR_8 = VAR_7 * (1 + 0.1);

  VAR_5->d = VAR_8;
  VAR_5->code = FUNC_5 (FUNC_7 (VAR_8));
  VAR_5->used = FUNC_5 (FUNC_9 (VAR_8));
  FUNC_1 (sizeof (int) == 4);
  VAR_5->sums = FUNC_5 (FUNC_8 (VAR_8));

  int VAR_9 = 2 * VAR_8, VAR_10 = VAR_8 * 2;

  VAR_3 = FUNC_4 (sizeof (int) * VAR_9),
  VAR_1 = FUNC_4 (sizeof (int) * VAR_9);
  VAR_2 = FUNC_4 (sizeof (int) * (VAR_10)),
  VAR_4 = FUNC_4 (sizeof (int) * (VAR_10)),
  VAR_0 = FUNC_4 (sizeof (int) * (VAR_10));


  int VAR_11 = 0;

  int VAR_12 = 301, VAR_13 = 303;
  while (1) {
    FUNC_10 (VAR_2, -1, sizeof (int) * (2 * VAR_8));



    int VAR_14;
    VAR_9 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
      int VAR_15 = FUNC_11 (VAR_6[VAR_14], VAR_12, VAR_8), VAR_16 = FUNC_11 (VAR_6[VAR_14], VAR_13, VAR_8) + VAR_8;



      VAR_1[VAR_9] = VAR_2[VAR_15];
      VAR_2[VAR_15] = VAR_9;
      VAR_3[VAR_9++] = VAR_16;

      VAR_1[VAR_9] = VAR_2[VAR_16];
      VAR_2[VAR_16] = VAR_9;
      VAR_3[VAR_9++] = VAR_15;
    }

    FUNC_10 (VAR_4, 0, sizeof (int) * VAR_10);
    int VAR_17 = 1;
    for (VAR_14 = 0; VAR_14 < VAR_8 && VAR_17; VAR_14++) {
      if (!VAR_4[VAR_14]) {
        VAR_17 &= FUNC_2 (VAR_14, -1, 0);
      }
    }


    if (VAR_17) {
      int VAR_18 =0;
      for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
        if (VAR_4[VAR_14]) {
          if (VAR_0[VAR_14] % 4 == 1 || VAR_0[VAR_14] % 4 == 2) {
            FUNC_12 (VAR_5->code, VAR_14);
          }
          if (VAR_0[VAR_14]) {
            FUNC_12 (VAR_5->used, VAR_14);
            VAR_18++;
          }
        }
      }


      int VAR_19 = 0;
      for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
        if ((VAR_14 & 63) == 0) {
          VAR_5->sums[VAR_14 >> 6] = VAR_19;
        }
        if (FUNC_6 (VAR_5->used, VAR_14)) {
          VAR_19++;
        }
      }

      VAR_5->mul0 = VAR_12;
      VAR_5->mul1 = VAR_13;
      break;
    }
    VAR_11++;

    VAR_12 = FUNC_0(1, 1000000000);
    VAR_13 = FUNC_0(1, 1000000000);
  }

  VAR_9 = 2 * VAR_8;
  FUNC_3 (VAR_3, sizeof (int) * VAR_9);
  FUNC_3 (VAR_1, sizeof (int) * VAR_9);
  FUNC_3 (VAR_2, sizeof (int) * (VAR_10));
  FUNC_3 (VAR_4, sizeof (int) * (VAR_10));
  FUNC_3 (VAR_0, sizeof (int) * (VAR_10));

}
