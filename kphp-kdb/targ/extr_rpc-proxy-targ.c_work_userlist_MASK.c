
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_buckets; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int) ;

int FUNC_2 (void) {
  VAR_4 = 1;
  int VAR_7 = FUNC_0 ();
  VAR_3 = VAR_7;
  int VAR_8 = VAR_0->tot_buckets;
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    VAR_5[VAR_9] = -1;
    VAR_6[VAR_9] = 0;
  }
  if (VAR_7 <= 0) {
    return 4;
  } else {
    FUNC_1 (VAR_1, 4 * VAR_7);
    for (VAR_9 = VAR_7 - 1; VAR_9 >= 0; VAR_9--) {
      int VAR_10 = VAR_1[VAR_9] % VAR_8;
      if (VAR_10 < 0) { VAR_10 = -VAR_10; }
      VAR_2[VAR_9] = VAR_5[VAR_10];
      VAR_5[VAR_10] = VAR_9;
      VAR_6[VAR_10] ++;
    }
    return 4 + 4 * VAR_7;
  }
}
