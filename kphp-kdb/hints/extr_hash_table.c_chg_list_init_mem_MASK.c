
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int change_list ;
struct TYPE_3__ {struct TYPE_3__* next; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;

void FUNC_3 (int VAR_2) {
  FUNC_0 (VAR_0 == ((void*)0));
  FUNC_0 (VAR_2 > 0);

  VAR_1 -= FUNC_1();
  VAR_0 = FUNC_2 (sizeof (change_list) * VAR_2);
  FUNC_0 (VAR_0 != ((void*)0));
  VAR_1 += FUNC_1();

  int VAR_3;
  for (VAR_3 = 0; VAR_3 + 1 < VAR_2; VAR_3++) {
    VAR_0[VAR_3].next = &VAR_0[VAR_3 + 1];
  }
  VAR_0[VAR_2 - 1].next = ((void*)0);
}
