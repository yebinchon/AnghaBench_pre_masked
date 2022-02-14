
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tot_buckets; int * buckets; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6 (void) {
  int VAR_1 = FUNC_1 ();
  if (FUNC_3 ()) {
    FUNC_4 ();
    return -1;
  }
  FUNC_0 (VAR_0->tot_buckets);
  FUNC_0 (VAR_1 >= 0);
  VAR_1 %= VAR_0->tot_buckets;
  FUNC_5 ();
  return FUNC_2 (VAR_0->buckets[VAR_1]);
}
