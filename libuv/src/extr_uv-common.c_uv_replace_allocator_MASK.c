
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * uv_realloc_func ;
typedef int * uv_malloc_func ;
typedef int * uv_free_func ;
typedef int * uv_calloc_func ;
struct TYPE_2__ {int * local_free; int * local_calloc; int * local_realloc; int * local_malloc; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_0(uv_malloc_func VAR_2,
                         uv_realloc_func VAR_3,
                         uv_calloc_func VAR_4,
                         uv_free_func VAR_5) {
  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) ||
      VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
    return VAR_0;
  }

  VAR_1.local_malloc = VAR_2;
  VAR_1.local_realloc = VAR_3;
  VAR_1.local_calloc = VAR_4;
  VAR_1.local_free = VAR_5;

  return 0;
}
