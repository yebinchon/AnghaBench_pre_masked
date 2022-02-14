
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trp_node ;
struct TYPE_3__ {int * r; struct TYPE_3__* l; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;

void FUNC_2 (int VAR_3) {
  FUNC_0 (VAR_2 == 0);
  FUNC_0 (VAR_3 > 0);

  VAR_1 = FUNC_1 (sizeof (trp_node) * VAR_3);
  FUNC_0 (VAR_1 != ((void*)0));

  VAR_0 += VAR_3;
  VAR_2 += VAR_3;

  int VAR_4;
  for (VAR_4 = 0; VAR_4 + 1 < VAR_3; VAR_4++) {
    VAR_1[VAR_4].l = &VAR_1[VAR_4 + 1];
    VAR_1[VAR_4].r = ((void*)0);
  }
  VAR_1[VAR_3 - 1].l = VAR_1[VAR_3 - 1].r = ((void*)0);
}
