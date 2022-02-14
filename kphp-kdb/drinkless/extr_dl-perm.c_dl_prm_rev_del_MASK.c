
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_7__ {int a; struct TYPE_7__* xl; struct TYPE_7__* xr; } ;


 int FUNC_0 (TYPE_1__**,TYPE_1__*,TYPE_1__*) ;

dl_prm_ptr FUNC_1 (dl_prm_ptr *VAR_0, int VAR_1) {


  while (*VAR_0 != ((void*)0)) {

    if ((*VAR_0)->a == VAR_1) {
      dl_prm_ptr VAR_2 = *VAR_0;

      FUNC_0 (VAR_0, VAR_2->xl, VAR_2->xr);

      return VAR_2;
    } else if ((*VAR_0)->a < VAR_1) {
      VAR_0 = &(*VAR_0)->xr;
    } else if ((*VAR_0)->a > VAR_1) {
      VAR_0 = &(*VAR_0)->xl;
    }
  }
  return ((void*)0);
}
