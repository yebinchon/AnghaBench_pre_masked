
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_9__ {scalar_t__ b; scalar_t__ a; struct TYPE_9__* p; struct TYPE_9__* r; struct TYPE_9__* l; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__**,scalar_t__) ;

void FUNC_4 (dl_prm_ptr *VAR_0, dl_prm_ptr *VAR_1, dl_prm_ptr *VAR_2) {
  if (*VAR_0 && *VAR_1) {
    while ((*VAR_0)->r) {
      VAR_0 = &(*VAR_0)->r;
    }
    while ((*VAR_1)->l) {
      VAR_1 = &(*VAR_1)->l;
    }
    if ((*VAR_0)->b == (*VAR_1)->a) {
      dl_prm_ptr VAR_3 = *VAR_1;
      *VAR_1 = VAR_3->r;

      (*VAR_0)->b = VAR_3->b;

      FUNC_2 (VAR_3->p);
      FUNC_0 (FUNC_3 (VAR_2, VAR_3->a) == VAR_3);
      FUNC_1 (VAR_3);

      FUNC_2 (*VAR_0);
    }
  }
}
