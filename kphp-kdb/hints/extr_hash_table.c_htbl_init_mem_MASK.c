
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hash_entry ;
struct TYPE_3__ {struct TYPE_3__* next_entry; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_3 (int VAR_3) {
  FUNC_0 (VAR_1 == ((void*)0));
  FUNC_0 (VAR_3 > 0);

  VAR_2 -= FUNC_1();
  VAR_1 = FUNC_2 (sizeof (hash_entry) * VAR_3);
  FUNC_0 (VAR_1 != ((void*)0));
  VAR_2 += FUNC_1();

  VAR_0 += VAR_3;

  int VAR_4;
  for (VAR_4 = 0; VAR_4 + 1 < VAR_3; VAR_4++) {
    VAR_1[VAR_4].next_entry = &VAR_1[VAR_4 + 1];
  }
  VAR_1[VAR_3 - 1].next_entry = ((void*)0);
}
