
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vptr ;
struct TYPE_2__ {int val; struct TYPE_2__* next; } ;
typedef TYPE_1__ restore_list ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;

void FUNC_2 (int *VAR_3, vptr *VAR_4) {
  restore_list *VAR_5 = *(restore_list **)VAR_4;

  FUNC_1 (VAR_2 < VAR_1);
  VAR_0[VAR_2++] = FUNC_0 (VAR_5->val);

  restore_list *VAR_6 = VAR_5;
  while (VAR_5->next != VAR_6) {
    VAR_5 = VAR_5->next;

    FUNC_1 (VAR_2 < VAR_1);
    VAR_0[VAR_2++] = VAR_5->val;
  }
}
