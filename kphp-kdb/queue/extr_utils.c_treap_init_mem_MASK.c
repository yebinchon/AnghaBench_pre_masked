
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int treap_node ;
struct TYPE_3__ {int * r; struct TYPE_3__* l; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_3 (int VAR_4) {
  FUNC_0 (VAR_2 == 0);
  FUNC_0 (VAR_4 > 0);

  VAR_3 -= FUNC_1();
  VAR_1 = FUNC_2 (sizeof (treap_node) * VAR_4);
  FUNC_0 (VAR_1 != ((void*)0));
  VAR_3 += FUNC_1();

  VAR_0 += VAR_4;
  VAR_2 += VAR_4;

  int VAR_5;
  for (VAR_5 = 0; VAR_5 + 1 < VAR_4; VAR_5++) {
    VAR_1[VAR_5].l = &VAR_1[VAR_5 + 1];
    VAR_1[VAR_5].r = ((void*)0);
  }
  VAR_1[VAR_4 - 1].l = VAR_1[VAR_4 - 1].r = ((void*)0);
}
