
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_buckets; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1 () {
  int VAR_10, VAR_11;

  for (VAR_10 = 0; VAR_10 < VAR_0->tot_buckets; VAR_10++) {
    VAR_8[VAR_10] = 0;
    VAR_7[VAR_10] = -1;
  }


  VAR_9 = VAR_0->tot_buckets ? VAR_0->tot_buckets : 0;
  VAR_5[0] = 0x31303030;
  VAR_6 = 1;
  for (VAR_10 = VAR_3-1; VAR_10 >= 0; VAR_10--) {
    if (VAR_2[2 * VAR_10 + 1] < 0) {
      FUNC_0 (VAR_6 + 2 <= VAR_1 + 1);
      VAR_5[VAR_6++] = VAR_2[2*VAR_10];
      VAR_5[VAR_6++] = VAR_2[2*VAR_10+1];
    } else {
      VAR_11 = VAR_2[2 * VAR_10];

      if (VAR_11 < 0) { VAR_11 = -VAR_11; }
      VAR_11 %= VAR_9;

      if (VAR_11 < VAR_0->tot_buckets) {
        VAR_4[VAR_10] = VAR_7[VAR_11];
        VAR_7[VAR_11] = VAR_10;
        VAR_8[VAR_11] ++;
      }
    }
  }
}
