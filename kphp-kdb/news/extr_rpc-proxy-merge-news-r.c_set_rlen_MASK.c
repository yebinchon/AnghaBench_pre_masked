
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_buckets; } ;


 TYPE_1__* VAR_0 ;
 void** VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;
 scalar_t__* VAR_7 ;

__attribute__((used)) static void FUNC_0 (void) {
  int VAR_8, VAR_9;

  for (VAR_8 = 0; VAR_8 < VAR_0->tot_buckets; VAR_8++) {
    VAR_7[VAR_8] = 0;
    VAR_6[VAR_8] = -1;
  }

  int VAR_10 = VAR_0->tot_buckets;
  VAR_5 = 0;
  for (VAR_8 = VAR_3 - 1; VAR_8 >= 0; VAR_8--) {
    if (VAR_1[2 * VAR_8 + 1] < 0) {
      VAR_4[VAR_5++] = VAR_1[2 * VAR_8];
      VAR_4[VAR_5++] = VAR_1[2 * VAR_8 + 1];
    } else {
      VAR_9 = VAR_1[2 * VAR_8];

      if (VAR_9 < 0) { VAR_9 = -VAR_9; }
      VAR_9 %= VAR_10;

      if (VAR_9 < VAR_0->tot_buckets) {
        VAR_2[VAR_8] = VAR_6[VAR_9];
        VAR_6[VAR_9] = VAR_8;
        VAR_7[VAR_9] ++;
      }
    }
  }
}
