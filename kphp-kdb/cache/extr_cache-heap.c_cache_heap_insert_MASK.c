
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int max_size; scalar_t__ (* compare ) (void*,void*) ;void** H; } ;
typedef TYPE_1__ cache_heap_t ;


 int FUNC_0 (TYPE_1__*,void*,int) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;

void FUNC_3 (cache_heap_t *VAR_0, void *VAR_1) {
  if (VAR_0->size < VAR_0->max_size) {
    int VAR_2 = ++(VAR_0->size);
    while (VAR_2 > 1) {
      int VAR_3 = VAR_2 >> 1;
      if (VAR_0->compare (VAR_0->H[VAR_3], VAR_1) >= 0) {
        break;
      }
      VAR_0->H[VAR_2] = VAR_0->H[VAR_3];
      VAR_2 = VAR_3;
    }
    VAR_0->H[VAR_2] = VAR_1;
  } else {
    if (VAR_0->compare (VAR_0->H[1], VAR_1) > 0) {
      FUNC_0 (VAR_0, VAR_1, 1);
    }
  }
}
