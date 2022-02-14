
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_4__ {int b; int a; struct TYPE_4__* r; struct TYPE_4__* l; } ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1 (dl_prm_ptr VAR_0, int *VAR_1, int VAR_2, int VAR_3) {
  if (VAR_2 == 0 || VAR_0 == ((void*)0)) {
    return 0;
  }
  int VAR_4 = FUNC_0 (VAR_0->l), VAR_5 = 0;
  if (VAR_3 < VAR_4) {
    VAR_5 = FUNC_1 (VAR_0->l, VAR_1, VAR_2, VAR_3);
    VAR_1 += VAR_5;
    VAR_2 -= VAR_5;
    VAR_3 = 0;
  } else {
    VAR_3 -= VAR_4;
  }

  int VAR_6 = VAR_0->b - VAR_0->a;
  if (VAR_3 < VAR_0->b - VAR_0->a) {
    int VAR_7;
    for (VAR_7 = VAR_0->a + VAR_3; VAR_7 < VAR_0->b && VAR_2 > 0; VAR_7++) {
      *VAR_1++ = VAR_7;
      VAR_2--;
      VAR_5++;
    }
    VAR_3 = 0;
  } else {
    VAR_3 -= VAR_6;
  }

  VAR_5 += FUNC_1 (VAR_0->r, VAR_1, VAR_2, VAR_3);

  return VAR_5;
}
