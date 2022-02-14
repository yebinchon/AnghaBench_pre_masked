
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dtype; int * v_cstring; int v_string; } ;
struct TYPE_5__ {int vn; struct TYPE_5__** v; TYPE_1__ tok; } ;
typedef TYPE_2__ node ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1 (node *VAR_2) {
  if (VAR_2 == ((void*)0)) {
    return 1;
  }
  if (VAR_2->tok.dtype == VAR_0 && VAR_2->tok.v_cstring != ((void*)0)) {
    VAR_2->tok.v_string = FUNC_0 (VAR_2->tok.v_cstring);
    VAR_2->tok.dtype = VAR_1;
  }
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2->vn; VAR_3++) {
    if (!FUNC_1 (VAR_2->v[VAR_3])) {
      return 0;
    }
  }
  return 1;
}
