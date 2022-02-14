
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashmap_ll_int {unsigned int size; TYPE_1__* h; } ;
struct TYPE_2__ {long long key; } ;



int FUNC_0 (struct hashmap_ll_int *VAR_0, long long VAR_1, int *VAR_2) {
  int VAR_3, VAR_4;
  long long VAR_5;
  VAR_3 = ((unsigned int) VAR_1) % VAR_0->size;
  VAR_4 = 1 + ((unsigned int) (VAR_1 >> 32)) % (VAR_0->size - 1);
  while ((VAR_5 = VAR_0->h[VAR_3].key) != 0) {
    if (VAR_5 == VAR_1) {
      *VAR_2 = VAR_3;
      return 1;
    }
    VAR_3 += VAR_4;
    if (VAR_3 >= VAR_0->size) { VAR_3 -= VAR_0->size; }
  }
  *VAR_2 = VAR_3;
  return 0;
}
