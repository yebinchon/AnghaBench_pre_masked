
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cluster_mode; int step; int tot_buckets; int * buckets; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6 (void) {
  FUNC_3 ();
  int VAR_1 = (VAR_0->cluster_mode & 7);
  VAR_1 --;
  if (VAR_1 < 0) { VAR_1 = 0; }
  int VAR_2 = FUNC_3 ();
  if (VAR_1 > VAR_2 - 1) { VAR_1 = VAR_2 - 1; }
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    FUNC_3 ();
  }
  VAR_2 = FUNC_3 ();
  if (VAR_2 < 0) { VAR_2 = -VAR_2; }
  if (VAR_2 < 0) { VAR_2 = 0; }
  if (FUNC_2 ()) {
    FUNC_4 ();
    return -1;
  }
  if (VAR_0->step) {
    VAR_2 /= VAR_0->step;
  }
  FUNC_0 (VAR_0->tot_buckets);
  VAR_2 %= VAR_0->tot_buckets;
  FUNC_5 ();
  return FUNC_1 (VAR_0->buckets[VAR_2]);
}
