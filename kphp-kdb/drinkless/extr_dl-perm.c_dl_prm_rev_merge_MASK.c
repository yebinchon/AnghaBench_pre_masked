
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_5__ {scalar_t__ y; struct TYPE_5__* xr; struct TYPE_5__* xl; } ;



void FUNC_0 (dl_prm_ptr *VAR_0, dl_prm_ptr VAR_1, dl_prm_ptr VAR_2) {
  while (VAR_1 != ((void*)0) || VAR_2 != ((void*)0)) {
     if (VAR_1 == ((void*)0) || (VAR_2 != ((void*)0) && VAR_2->y > VAR_1->y)) {
       *VAR_0 = VAR_2;
       VAR_0 = &VAR_2->xl;
       VAR_2 = VAR_2->xl;
     } else {
       *VAR_0 = VAR_1;
       VAR_0 = &VAR_1->xr;
       VAR_1 = VAR_1->xr;
     }
  }
  *VAR_0 = ((void*)0);
}
