
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* weights; } ;
typedef TYPE_1__ user_t ;
struct TYPE_5__ {int* values; } ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2 (int VAR_3, int VAR_4, int VAR_5, int *VAR_6) {
  if (VAR_5 != VAR_1 || VAR_0 == ((void*)0)) {
    return -1;
  }
  user_t *VAR_7 = FUNC_0 (VAR_3);
  if (VAR_7 == ((void*)0)) {
    return -1;
  }
  if (VAR_7->weights == ((void*)0)) {
    VAR_7->weights = FUNC_1 ();
  }
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    VAR_7->weights->values[VAR_8] = VAR_6[VAR_8] * (1.0 / 1073741824.0);
  }
  VAR_2++;
  return 0;
}
