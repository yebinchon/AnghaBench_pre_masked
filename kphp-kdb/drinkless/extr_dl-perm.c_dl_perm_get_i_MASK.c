
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_6__ {int len; TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm ;
struct TYPE_5__ {int b; int a; struct TYPE_5__* r; struct TYPE_5__* l; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

int FUNC_2 (dl_perm *VAR_0, int VAR_1) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->len)) {
    return -1;
  }
  dl_prm_ptr VAR_2 = VAR_0->v;
  while (VAR_2 != ((void*)0)) {
    int VAR_3 = FUNC_0(VAR_2->l);
    if (VAR_1 < VAR_3) {
      VAR_2 = VAR_2->l;
    } else {
      VAR_1 -= VAR_3;
      if (VAR_1 < VAR_2->b - VAR_2->a) {
        return VAR_2->a + VAR_1;
      }
      VAR_1 -= VAR_2->b - VAR_2->a;
      VAR_2 = VAR_2->r;
    }
  }
  FUNC_1 (0);
}
