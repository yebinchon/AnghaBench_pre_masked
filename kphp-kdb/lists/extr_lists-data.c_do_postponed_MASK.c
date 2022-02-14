
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct postponed_operation {scalar_t__ size; struct postponed_operation* next; scalar_t__ E; scalar_t__ time; } ;
struct lev_generic {int dummy; } ;
struct TYPE_2__ {int tot_lists; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct lev_generic*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct postponed_operation** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct postponed_operation*,scalar_t__) ;

void FUNC_3 (int VAR_6) {
  FUNC_0 (0 <= VAR_6 && VAR_6 < VAR_0.tot_lists);
  struct postponed_operation *VAR_7 = VAR_3[VAR_6];
  if (VAR_7) {
    struct postponed_operation *VAR_8 = VAR_7, *VAR_9;
    VAR_5 = 1;
    do {
      VAR_2 = VAR_7->time;
      FUNC_0 (VAR_7->size == FUNC_1 ((struct lev_generic *)(VAR_7->E), VAR_7->size));
      VAR_2 = 0;
      VAR_9 = VAR_7;
      VAR_7 = VAR_7->next;
      if (!(VAR_1 & 2)) {
        FUNC_2 (VAR_9, VAR_9->size + sizeof (struct postponed_operation));
      }
      VAR_4 ++;
    } while (VAR_8 != VAR_7 && VAR_9 != VAR_7);
    VAR_5 = 0;
  }
  if (!(VAR_1 & 2)) {
    VAR_3[VAR_6] = 0;
  }
}
