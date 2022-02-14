
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_10__ {scalar_t__ y; struct TYPE_10__* l; struct TYPE_10__* p; int len; struct TYPE_10__* r; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,TYPE_1__**) ;

void FUNC_2 (dl_prm_ptr *VAR_0, dl_prm_ptr VAR_1, dl_prm_ptr VAR_2, dl_prm_ptr *VAR_3) {
  dl_prm_ptr VAR_4 = ((void*)0);

  FUNC_1 (&VAR_1, &VAR_2, VAR_3);

  while (VAR_1 || VAR_2) {
    if (VAR_2 == ((void*)0) || (VAR_1 != ((void*)0) && VAR_1->y > VAR_2->y)) {
      VAR_1->len += FUNC_0(VAR_2);

      VAR_1->p = VAR_4;
      VAR_4 = VAR_1;

      *VAR_0 = VAR_1;
      VAR_0 = &VAR_1->r;
      VAR_1 = VAR_1->r;
    } else {
      VAR_2->len += FUNC_0(VAR_1);

      VAR_2->p = VAR_4;
      VAR_4 = VAR_2;

      *VAR_0 = VAR_2;
      VAR_0 = &VAR_2->l;
      VAR_2 = VAR_2->l;
    }
  }
  *VAR_0 = ((void*)0);
}
