
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashset_int {unsigned int size; int* h; } ;



int FUNC_0 (struct hashset_int *VAR_0, int VAR_1) {
  int VAR_2, VAR_3;
  VAR_2 = ((unsigned int) VAR_1) % VAR_0->size;
  VAR_3 = 1 + ((unsigned int) VAR_1) % (VAR_0->size - 1);
  while (VAR_0->h[VAR_2] != 0) {
    if (VAR_0->h[VAR_2] == VAR_1) {
      return 1;
    }
    VAR_2 += VAR_3;
    if (VAR_2 >= VAR_0->size) { VAR_2 -= VAR_0->size; }
  }
  return 0;
}
