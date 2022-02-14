
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_id; int prev; } ;
typedef TYPE_1__ entry_t ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (entry_t *VAR_5) {
  int VAR_6 = VAR_5->user_id;
  int VAR_7 = FUNC_0 (VAR_6);
  VAR_3++;
  if (VAR_6 % VAR_1 == VAR_4) {
    VAR_5->prev = VAR_0 [VAR_7];
    VAR_0[VAR_7] = FUNC_1 (VAR_5);
    VAR_2++;
  }

}
