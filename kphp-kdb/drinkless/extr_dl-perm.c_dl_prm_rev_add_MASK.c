
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ a; struct TYPE_7__* xr; struct TYPE_7__* xl; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__,TYPE_1__**,TYPE_1__**) ;

void FUNC_1 (dl_prm_ptr *VAR_0, dl_prm_ptr VAR_1) {
  while (*VAR_0 != ((void*)0) && (*VAR_0)->y >= VAR_1->y) {
    if ((*VAR_0)->a < VAR_1->a) {
      VAR_0 = &(*VAR_0)->xr;
    } else {
      VAR_0 = &(*VAR_0)->xl;
    }
  }
  FUNC_0 (*VAR_0, VAR_1->a, &VAR_1->xl, &VAR_1->xr);
  *VAR_0 = VAR_1;
}
