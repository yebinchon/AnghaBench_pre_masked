
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int real_n; int* x; int* y; } ;
typedef TYPE_1__ lookup ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;

void FUNC_2 (lookup *VAR_0, char *VAR_1, int VAR_2) {
  if (VAR_1 != ((void*)0)) {
    FUNC_1 (VAR_2 >= (int)sizeof (int));

    int VAR_3;
    FUNC_0 (VAR_1, VAR_3);







    VAR_0->n = VAR_3;

    FUNC_1 (VAR_2 == (int)sizeof (int) + (int)sizeof (int) * VAR_0->n * 2);
  } else {
    VAR_0->n = 0;
  }
  VAR_0->x = (int *)VAR_1;
  VAR_0->y = (int *)VAR_1 + VAR_0->n;
}
