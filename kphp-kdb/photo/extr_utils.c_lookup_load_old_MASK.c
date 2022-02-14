
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int real_n; int* x; int* y; } ;
typedef TYPE_1__ lookup ;



size_t FUNC_0 (lookup *VAR_0, char *VAR_1, int VAR_2, int VAR_3) {
  size_t VAR_4 = 0;







  VAR_0->n = VAR_3;

  VAR_4 = sizeof (int) * VAR_0->n * 2;


  VAR_0->x = (int *)VAR_1;
  VAR_0->y = (int *)VAR_1 + VAR_0->n;
  return VAR_4;
}
