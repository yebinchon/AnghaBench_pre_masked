
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* prev_time; struct TYPE_3__* next_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__** VAR_7 ;

void FUNC_4 (void) {
  FUNC_3 (&VAR_2);
  FUNC_3 (&VAR_3);

  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    VAR_7[VAR_8] = FUNC_1();
    VAR_7[VAR_8]->next_time = VAR_7[VAR_8]->prev_time = VAR_7[VAR_8];
  }
  VAR_4 = 0;
  VAR_5 = 0;

  VAR_6 = FUNC_0 (FUNC_2 (VAR_0));
}
