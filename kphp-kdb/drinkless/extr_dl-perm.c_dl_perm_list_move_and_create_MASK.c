
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int perm_list ;
struct TYPE_6__ {int n; int len; TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm_list ;
struct TYPE_5__ {int r; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int,int) ;
 int * FUNC_4 (int ,int) ;

int FUNC_5 (dl_perm_list *VAR_0, int VAR_1, int VAR_2) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->n)) {
    return -1;
  }
  if (!(0 <= VAR_2 && VAR_2 <= VAR_0->len)) {
    return -1;
  }

  FUNC_0 (FUNC_1 (VAR_0, VAR_1) == -1);

  perm_list *VAR_3 = FUNC_4 (VAR_0->v->r, VAR_2), *VAR_4;
  VAR_4 = FUNC_3 (VAR_1, VAR_1 + 1);
  FUNC_2 (VAR_3, VAR_4);

  VAR_0->len++;

  return 0;
}
