
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int b; int a; struct TYPE_7__* l; struct TYPE_7__* r; } ;
typedef TYPE_1__ perm_list ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;

perm_list *FUNC_2 (perm_list *VAR_0, int VAR_1) {
  while (VAR_1 > 0) {
    int VAR_2 = VAR_0->b - VAR_0->a;
    if (VAR_2 <= VAR_1) {
      VAR_1 -= VAR_2;
      VAR_0 = VAR_0->r;
    } else {
      perm_list *VAR_3 = FUNC_1 (VAR_0->a + VAR_1, VAR_0->b);
      VAR_0->b = VAR_0->a + VAR_1;
      FUNC_0 (VAR_0, VAR_3);
      return VAR_0;
    }
  }
  return VAR_0->l;
}
