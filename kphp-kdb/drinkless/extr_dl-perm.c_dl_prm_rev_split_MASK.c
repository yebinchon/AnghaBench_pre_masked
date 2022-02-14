
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_5__ {int a; struct TYPE_5__* xl; struct TYPE_5__* xr; } ;



void FUNC_0 (dl_prm_ptr VAR_0, int VAR_1, dl_prm_ptr *VAR_2, dl_prm_ptr *VAR_3) {
  while (VAR_0 != ((void*)0)) {
    if (VAR_0->a < VAR_1) {
      *VAR_2 = VAR_0;
      VAR_2 = &VAR_0->xr;
      VAR_0 = VAR_0->xr;
    } else {
      *VAR_3 = VAR_0;
      VAR_3 = &VAR_0->xl;
      VAR_0 = VAR_0->xl;
    }
  }
  *VAR_2 = *VAR_3 = ((void*)0);
}
