
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_buckets; int cluster_mode; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 (int) ;

void FUNC_1 (int VAR_7) {
  FUNC_0 (VAR_0->tot_buckets <= VAR_1);
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_0->tot_buckets; VAR_8++) {
    VAR_6[VAR_8] = 0;
    VAR_5[VAR_8] = -1;
  }



  int VAR_9 = (VAR_7 != 0) ? VAR_0->tot_buckets : VAR_0->tot_buckets / 2;

  for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--) {
    int VAR_10;
    if (VAR_7 <= 0) {
      VAR_10 = VAR_2[VAR_8];
    } else {
      int VAR_11 = (VAR_0->cluster_mode & 7);
      switch (VAR_11) {
      case 2:
        VAR_10 = VAR_2[3 * VAR_8 + 1];
        break;
      case 3:
        VAR_10 = VAR_2[3 * VAR_8 + 2];
        break;
      default:
        VAR_10 = VAR_2[3 * VAR_8];
        break;
      }
    }
    if (VAR_7 == 0) {
      if (VAR_10 >= 0) {
        VAR_10 %= VAR_9;
      } else {
        VAR_10 = (-VAR_10 % VAR_9) + VAR_9;
      }
    } else {
      if (VAR_10 < 0) { VAR_10 = -VAR_10; }
      if (VAR_10 < 0) { VAR_10 = 0; }
      VAR_10 %= VAR_9;
    }
    FUNC_0 (VAR_10 >= 0 && VAR_10 < VAR_0->tot_buckets);
    VAR_3[VAR_8] = VAR_5[VAR_10];
    VAR_5[VAR_10] = VAR_8;
    VAR_6[VAR_10] ++;
  }
}
