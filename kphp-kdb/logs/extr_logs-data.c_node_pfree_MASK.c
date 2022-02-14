
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {int vn; TYPE_1__ tok; int * v; scalar_t__ is_const; } ;
typedef TYPE_2__ node ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;

void FUNC_2 (node *VAR_1) {
  if (VAR_1->is_const) {
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->vn; VAR_2++) {
      FUNC_0 (VAR_1->v[VAR_2]);
    }
    FUNC_1 (VAR_1->v, sizeof (node *) * VAR_1->vn);
    VAR_1->vn = 0;
    VAR_1->v = ((void*)0);
    VAR_1->tok.type = VAR_0;
  }
}
