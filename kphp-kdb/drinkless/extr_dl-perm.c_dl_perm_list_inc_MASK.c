
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; int len; TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm_list ;
struct TYPE_4__ {int l; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;

void FUNC_2 (dl_perm_list *VAR_0, int VAR_1) {
  if (VAR_1 > 0) {
    int VAR_2 = VAR_0->n,
        VAR_3 = VAR_0->n += VAR_1;
    VAR_0->len += VAR_1;
    FUNC_0 (VAR_0->v->l, FUNC_1 (VAR_2, VAR_3));
  }
}
