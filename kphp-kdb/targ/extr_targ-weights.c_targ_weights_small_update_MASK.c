
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* weights; } ;
typedef TYPE_1__ user_t ;
struct TYPE_5__ {int relaxation_time; int* values; } ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int const) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3 (int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_5 < 0 || VAR_5 >= VAR_2 || VAR_0 == ((void*)0)) {
    return -1;
  }
  user_t *VAR_8 = FUNC_0 (VAR_4);
  if (VAR_8 == ((void*)0)) {
    return -1;
  }
  if (VAR_8->weights == ((void*)0)) {
    VAR_8->weights = FUNC_1 ();
  }
  const int VAR_9 = VAR_6 - VAR_8->weights->relaxation_time;
  if (VAR_9 > 0) {
    int VAR_10;
    if (VAR_1 < VAR_6) {
      VAR_1 = VAR_6;
    }
    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
      VAR_8->weights->values[VAR_10] *= FUNC_2 (VAR_0[VAR_10], VAR_9);
    }
    VAR_8->weights->relaxation_time = VAR_6;
  }
  VAR_8->weights->values[VAR_5] = VAR_7 * (1.0 / 1073741824.0);
  VAR_3++;
  return 0;
}
