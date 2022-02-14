
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* h; int filled; } ;
struct TYPE_5__ {int* b; int k; TYPE_3__ HII; } ;
typedef TYPE_2__ ctx_change_many_rates_t ;
struct TYPE_4__ {int key; int value; } ;


 int FUNC_0 (TYPE_3__*,int,int*) ;

__attribute__((used)) static void FUNC_1 (void *VAR_0, int VAR_1) {
  ctx_change_many_rates_t *VAR_2 = (ctx_change_many_rates_t *) VAR_0;
  VAR_2->b[VAR_2->k++] = VAR_1;
  if (VAR_2->k == 2) {
    int VAR_3;
    if (VAR_2->b[0]) {
      if (!FUNC_0 (&VAR_2->HII, VAR_2->b[0], &VAR_3)) {
        VAR_2->HII.h[VAR_3].key = VAR_2->b[0];
        VAR_2->HII.filled++;
      }
      VAR_2->HII.h[VAR_3].value = VAR_2->b[1];
    }
    VAR_2->k = 0;
  }
}
