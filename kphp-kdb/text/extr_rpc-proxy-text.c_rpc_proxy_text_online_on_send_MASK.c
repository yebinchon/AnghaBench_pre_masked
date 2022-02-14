
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gather {int dummy; } ;
struct TYPE_2__ {int tot_buckets; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2 (struct gather *VAR_5, int VAR_6) {
  FUNC_1 (VAR_2);
  FUNC_1 (VAR_4);
  int *VAR_7 = FUNC_0 (4);
  int VAR_8;
  int VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) if (VAR_1[VAR_8] % VAR_0->tot_buckets == VAR_6) {
    FUNC_1 (VAR_1[VAR_8]);
    VAR_9 ++;
  }
  if (!VAR_9) {
    return -1;
  } else {
    *VAR_7 = VAR_9;
    return 0;
  }
}
