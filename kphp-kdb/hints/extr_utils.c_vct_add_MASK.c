
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mx; int n; int* mem; } ;
typedef TYPE_1__ vector ;


 int* FUNC_0 (int*,int,int) ;

void FUNC_1 (vector *VAR_0, int VAR_1) {
  if (VAR_0->mx == VAR_0->n) {
    VAR_0->mem = FUNC_0 (VAR_0->mem, sizeof (int) * VAR_0->mx * 2, sizeof (int) * VAR_0->mx);
    VAR_0->mx *= 2;
  }
  VAR_0->mem[VAR_0->n++] = VAR_1;
}
