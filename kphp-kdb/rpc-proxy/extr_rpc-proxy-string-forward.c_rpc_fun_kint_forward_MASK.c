
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long step; unsigned long long tot_buckets; int * buckets; scalar_t__* extensions_extra; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 unsigned long long FUNC_1 (char*,int,char**) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3 (void **VAR_3, void **VAR_4) {
  const char *VAR_5 = *VAR_4;
  int VAR_6 = (long)*(VAR_4 + 1);
  int VAR_7 = (long)VAR_0->extensions_extra[VAR_2];
  char *VAR_8 = (char *) VAR_5, *VAR_9;
  int VAR_10 = VAR_6;
  unsigned long long VAR_11 = 0;
  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
    VAR_11 = FUNC_1 (VAR_8, VAR_10, &VAR_9);
    if ((long long) VAR_11 == -1) {
      FUNC_2 (VAR_1, "Can not extract %d ints", VAR_7);
      return -1;
    }
    FUNC_0 (VAR_9 >= VAR_8 && VAR_9 <= VAR_8 + VAR_10);
    VAR_10 -= VAR_9 - VAR_8;
    VAR_8 = VAR_9;
  }
  if (VAR_0->step > 0) {
    VAR_11 /= VAR_0->step;
  }
  *(VAR_4 + 2) = &VAR_0->buckets[VAR_11 % VAR_0->tot_buckets];
  return 0;
}
