
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ val; } ;
typedef TYPE_1__ score ;


 int FUNC_0 (TYPE_1__,TYPE_1__) ;

void FUNC_1 (score *VAR_0, int VAR_1, int VAR_2) {
  score *VAR_3[32];
  score *VAR_4[32];

  VAR_3[0] = VAR_0;
  VAR_4[0] = VAR_0 + VAR_2 - 1;

  int VAR_5;
  for (VAR_5 = 0; VAR_5 >= 0; --VAR_5) {
    score *VAR_6 = VAR_3[VAR_5];
    score *VAR_7 = VAR_4[VAR_5];

    while (VAR_6 < VAR_7) {
      int VAR_8 = (VAR_7 - VAR_6) >> 1;
      FUNC_0 (*VAR_6, VAR_6[VAR_8]);

      score *VAR_9 = VAR_6 + 1, *VAR_10 = VAR_7;

      while (1) {
        for ( ; VAR_9 < VAR_10 && VAR_6->val < VAR_9->val; VAR_9++) {
        }

        for ( ; VAR_10 >= VAR_9 && VAR_10->val < VAR_6->val; VAR_10--) {
        }

        if (VAR_9 >= VAR_10) {
          break;
        }

        FUNC_0 (*VAR_9, *VAR_10);
        ++VAR_9;
        --VAR_10;
      }

      FUNC_0 (*VAR_6, *VAR_10);

      if (VAR_10 - VAR_6 <= VAR_7 - VAR_10) {
        if (VAR_10 + 1 < VAR_7 && VAR_10 + 1 < VAR_0 + VAR_1) {
          VAR_3[VAR_5] = VAR_10 + 1;
          VAR_4[VAR_5++] = VAR_7;
        }
        VAR_7 = VAR_10 - 1;
      } else {
        if (VAR_10 - 1 > VAR_6) {
          VAR_3[VAR_5] = VAR_6;
          VAR_4[VAR_5++] = VAR_10 - 1;
        }
        VAR_6 = VAR_10 + 1;
      }
    }
  }
}
