
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_8__ {int b; int a; int len; struct TYPE_8__* r; struct TYPE_8__* p; struct TYPE_8__* l; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (dl_prm_ptr VAR_0, dl_prm_ptr *VAR_1, dl_prm_ptr *VAR_2, dl_prm_ptr *VAR_3, int VAR_4) {
  FUNC_1 (VAR_0 != ((void*)0));

  dl_prm_ptr VAR_5 = ((void*)0), VAR_6 = ((void*)0);

  while (VAR_0 != ((void*)0)) {

    int VAR_7 = FUNC_0(VAR_0->l);
    if (VAR_4 < VAR_7) {
      VAR_0->p = VAR_6;
      VAR_6 = VAR_0;

      *VAR_2 = VAR_0;
      VAR_2 = &VAR_0->l;
      VAR_0 = VAR_0->l;
    } else {
      VAR_4 -= VAR_7;
      if (VAR_4 < VAR_0->b - VAR_0->a) {

        *VAR_1 = VAR_0->l;
        if (*VAR_1) {
          (*VAR_1)->p = VAR_5;
        }

        *VAR_2 = VAR_0->r;
        if (*VAR_2) {
          (*VAR_2)->p = VAR_6;
        }

        *VAR_3 = VAR_0;
        VAR_0->l = VAR_0->r = VAR_0->p = ((void*)0);
        VAR_0->len = VAR_0->b - VAR_0->a;

        FUNC_2 (VAR_5);
        FUNC_2 (VAR_6);
        return;
      }
      VAR_4 -= VAR_0->b - VAR_0->a;

      VAR_0->p = VAR_5;
      VAR_5 = VAR_0;

      *VAR_1 = VAR_0;
      VAR_1 = &VAR_0->r;
      VAR_0 = VAR_0->r;
    }

  }
  FUNC_1 (0);
}
