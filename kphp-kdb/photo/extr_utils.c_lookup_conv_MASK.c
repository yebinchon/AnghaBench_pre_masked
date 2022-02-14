
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int* y; int x; int new_v; } ;
typedef TYPE_1__ lookup ;


 int FUNC_0 (int ,int,int) ;
 int* FUNC_1 (int *,int) ;

int FUNC_2 (lookup *VAR_0, int VAR_1, int VAR_2) {
  int *VAR_3 = FUNC_1 (&VAR_0->new_v, VAR_1);
  if (VAR_3 != ((void*)0)) {
    return *VAR_3;
  }

  int VAR_4 = FUNC_0 (VAR_0->x, VAR_0->n, VAR_1);
  if (VAR_4 != VAR_0->n) {
    return VAR_0->y[VAR_4];
  }

  return VAR_2;
}
