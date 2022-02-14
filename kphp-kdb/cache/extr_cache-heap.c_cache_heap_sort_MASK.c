
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; void** H; } ;
typedef TYPE_1__ cache_heap_t ;


 int FUNC_0 (TYPE_1__*,void*,int) ;

int FUNC_1 (cache_heap_t *VAR_0) {
  int VAR_1 = VAR_0->size;
  while (VAR_0->size > 1) {
    void *VAR_2 = VAR_0->H[1];
    FUNC_0 (VAR_0, VAR_0->H[(VAR_0->size)--], 1);
    VAR_0->H[VAR_0->size+1] = VAR_2;
  }
  VAR_0->size = 0;
  return VAR_1;
}
