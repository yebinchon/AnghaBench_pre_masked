
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct postponed_operation {scalar_t__ size; struct postponed_operation* next; } ;
struct TYPE_2__ {int tot_lists; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 struct postponed_operation** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct postponed_operation*,scalar_t__) ;

void FUNC_2 (int VAR_3) {
  FUNC_0 (0 <= VAR_3 && VAR_3 < VAR_0.tot_lists);
  if (VAR_2) {
    return;
  }
  struct postponed_operation *VAR_4 = VAR_1[VAR_3];
  if (VAR_4) {
    struct postponed_operation *VAR_5 = VAR_4, *VAR_6;
    do {
      VAR_6 = VAR_4;
      VAR_4 = VAR_4->next;
      FUNC_1 (VAR_6, VAR_6->size + sizeof (struct postponed_operation));
    } while (VAR_5 != VAR_4 && VAR_6 != VAR_4);
  }
  VAR_1[VAR_3] = 0;
}
