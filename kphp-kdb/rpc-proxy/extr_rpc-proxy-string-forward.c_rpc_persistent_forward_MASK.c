
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long step; long long tot_buckets; int * buckets; } ;


 TYPE_1__* VAR_0 ;
 long long FUNC_0 (char const*,int) ;

int FUNC_1 (void **VAR_1, void **VAR_2) {
  const char *VAR_3 = *VAR_2;
  int VAR_4 = (long)*(VAR_2 + 1);
  int VAR_5 = 0;
  if (VAR_4 >= 4 && *VAR_3 == '#' && *(VAR_3 + 1) == '#') {
    VAR_5 = 2;
    while (VAR_5 < VAR_4 && VAR_3[VAR_5] != '#') {
      VAR_5 ++;
    }
    if (VAR_5 < VAR_4 - 1 && VAR_3[VAR_5] == '#' && VAR_3[VAR_5 + 1] == '#') {
      VAR_5 += 2;
    } else {
      VAR_5 = 0;
    }
    if (VAR_5 >= VAR_4) {
      VAR_5 = 0;
    }
  }
  long long VAR_6 = FUNC_0 (VAR_3 + VAR_5, VAR_4 - VAR_5);
  if (VAR_0->step > 0) {
    VAR_6 /= VAR_0->step;
  }
  *(VAR_2 + 2) = &VAR_0->buckets[VAR_6 % VAR_0->tot_buckets];
  return 0;
}
