
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int step; long long tot_buckets; int * buckets; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (long long) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 long long FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7 (void) {
  FUNC_3 ();
  long long VAR_1 = FUNC_4 ();
  if (VAR_1 < 0) { VAR_1 = -VAR_1; }
  if (VAR_1 < 0) { VAR_1 = 0; }
  if (FUNC_2 ()) {
    FUNC_5 ();
    return -1;
  }
  if (VAR_0->step) {
    VAR_1 /= VAR_0->step;
  }
  FUNC_0 (VAR_0->tot_buckets);
  VAR_1 %= VAR_0->tot_buckets;
  FUNC_6 ();
  return FUNC_1 (VAR_0->buckets[VAR_1]);
}
