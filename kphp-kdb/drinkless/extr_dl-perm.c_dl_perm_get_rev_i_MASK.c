
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_5__ {int n; TYPE_1__* rv; } ;
typedef TYPE_2__ dl_perm ;
struct TYPE_4__ {int a; int b; struct TYPE_4__* xr; int l; struct TYPE_4__* r; struct TYPE_4__* p; struct TYPE_4__* xl; } ;


 int FUNC_0 (int ) ;

int FUNC_1 (dl_perm *VAR_0, int VAR_1) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->n)) {
    return -1;
  }


  dl_prm_ptr VAR_2 = VAR_0->rv, VAR_3;
  while (VAR_2 != ((void*)0)) {
    if (VAR_1 < VAR_2->a) {
      VAR_2 = VAR_2->xl;
    } else if (VAR_1 < VAR_2->b) {

      int VAR_4 = VAR_1 - VAR_2->a + FUNC_0 (VAR_2->l);
      while ((VAR_3 = VAR_2->p) != ((void*)0)) {
        if (VAR_3->r == VAR_2) {
          VAR_4 += FUNC_0(VAR_3->l) + VAR_3->b - VAR_3->a;
        }
        VAR_2 = VAR_3;
      }

      return VAR_4;
    } else {
      VAR_2 = VAR_2->xr;
    }
  }
  return -1;

}
