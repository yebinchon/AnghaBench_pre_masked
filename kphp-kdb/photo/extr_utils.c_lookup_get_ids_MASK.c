
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int new_v; int * x; } ;
typedef TYPE_1__ lookup ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,size_t) ;
 int* FUNC_2 (size_t) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int*,int*,int) ;
 int FUNC_5 (int *) ;

int FUNC_6 (lookup *VAR_0, int *VAR_1, int VAR_2) {
  int *VAR_3 = VAR_1;
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0->n; VAR_4++) {
    if (FUNC_3 (&VAR_0->new_v, VAR_0->x[VAR_4]) == ((void*)0)) {
      if (VAR_2 > 0) {
        *VAR_1++ = VAR_0->x[VAR_4];
        VAR_2--;
      }
    }
  }

  int VAR_5 = FUNC_5 (&VAR_0->new_v);
  if (VAR_5 == 0) {
    return VAR_1 - VAR_3;
  }

  size_t VAR_6 = VAR_5 * sizeof (int);
  int *VAR_7 = FUNC_2 (VAR_6);
  int *VAR_8 = FUNC_2 (VAR_6);

  FUNC_0 (FUNC_4 (&VAR_0->new_v, VAR_7, VAR_8, VAR_5) == VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    if (VAR_8[VAR_4] != -1) {
      if (VAR_2 > 0) {
        *VAR_1++ = VAR_7[VAR_4];
        VAR_2--;
      }
    }
  }

  FUNC_1 (VAR_7, VAR_6);
  FUNC_1 (VAR_8, VAR_6);

  return VAR_1 - VAR_3;
}
