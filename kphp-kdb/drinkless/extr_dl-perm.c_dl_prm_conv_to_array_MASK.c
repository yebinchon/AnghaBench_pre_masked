
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_3__ {int a; int b; struct TYPE_3__* r; struct TYPE_3__* l; } ;



int FUNC_0 (dl_prm_ptr VAR_0, int *VAR_1, int VAR_2) {
  if (VAR_0 == ((void*)0)) {
    return 0;
  }
  int VAR_3 = FUNC_0 (VAR_0->l, VAR_1, VAR_2);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;

  int VAR_4;
  for (VAR_4 = VAR_0->a; VAR_4 < VAR_0->b; VAR_4++) {
    if (VAR_2) {
      *VAR_1++ = VAR_4;
      VAR_2--;
      VAR_3++;
    }
  }
  VAR_3 += FUNC_0 (VAR_0->r, VAR_1, VAR_2);
  return VAR_3;
}
