
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int* mem; } ;
typedef TYPE_1__ vector ;



int FUNC_0 (vector *VAR_0) {
  if (VAR_0->n) {
    return VAR_0->mem[VAR_0->n - 1];
  }
  return 0;
}
