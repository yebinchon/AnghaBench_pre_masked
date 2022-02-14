
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_buckets; int cluster_mode; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;

void FUNC_1 () {
  int VAR_12, VAR_13, VAR_14;

  for (VAR_12 = 0; VAR_12 < VAR_0->tot_buckets; VAR_12++) {
    VAR_10[VAR_12] = 0;
    VAR_9[VAR_12] = -1;
  }


  VAR_11 = (VAR_5) ? VAR_0->tot_buckets / 2 : VAR_0->tot_buckets;

  for (VAR_12 = VAR_7-1; VAR_12 >= 0; VAR_12--) {
   if ((VAR_5 || VAR_4)) {
     VAR_13 = VAR_14 = VAR_6[VAR_12];
   } else {
    if ((VAR_0->cluster_mode & 0xf) == VAR_3) {
      VAR_13 = VAR_14 = VAR_6[3 * VAR_12 + 2];
    } else if ((VAR_0->cluster_mode & 0xf) == VAR_2) {
      VAR_13 = VAR_14 = VAR_6[3 * VAR_12 + 1];
    } else {
     FUNC_0 ((VAR_0->cluster_mode & 0xf) == VAR_1);
     VAR_13 = VAR_14 = VAR_6[3 * VAR_12];
    }
   }
    if (VAR_5) {
      if (VAR_13 >= 0) {
        VAR_13 %= VAR_11;
      } else {
        VAR_13 = (-VAR_13 % VAR_11) + VAR_11;
      }
    } else {
      if (VAR_13 < 0) { VAR_13 = -VAR_13; }
      VAR_13 %= VAR_11;
    }
    if (VAR_13 < VAR_0->tot_buckets) {
      VAR_8[VAR_12] = VAR_9[VAR_13];
      VAR_9[VAR_13] = VAR_12;
      VAR_10[VAR_13] ++;
    }
  }
}
