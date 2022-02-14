
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; scalar_t__ (* compare ) (void*,void*) ;void** H; } ;
typedef TYPE_1__ cache_heap_t ;


 scalar_t__ FUNC_0 (void*,void*) ;
 scalar_t__ FUNC_1 (void*,void*) ;

__attribute__((used)) static void FUNC_2 (cache_heap_t *VAR_0, void *VAR_1, int VAR_2) {
  while (1) {
    int VAR_3 = VAR_2 << 1;
    if (VAR_3 > VAR_0->size) {
      break;
    }
    if (VAR_3 < VAR_0->size && VAR_0->compare (VAR_0->H[VAR_3], VAR_0->H[VAR_3+1]) < 0) {
      VAR_3++;
    }
    if (VAR_0->compare (VAR_1, VAR_0->H[VAR_3]) >= 0) {
      break;
    }
    VAR_0->H[VAR_2] = VAR_0->H[VAR_3];
    VAR_2 = VAR_3;
  }
  VAR_0->H[VAR_2] = VAR_1;
}
