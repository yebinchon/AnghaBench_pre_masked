
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct postponed_operation {int size; struct postponed_operation* next; struct postponed_operation* prev; int E; int time; } ;
struct lev_generic {int type; } ;
struct TYPE_2__ {int tot_lists; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct lev_generic*,int) ;
 int VAR_1 ;
 struct postponed_operation** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*,int,int ,int) ;
 struct postponed_operation* FUNC_3 (int) ;

void FUNC_4 (int VAR_6, struct lev_generic *VAR_7, int VAR_8) {
  FUNC_0 (0 <= VAR_6 && VAR_6 < VAR_0.tot_lists);
  if (VAR_5) {
    return;
  }
  FUNC_2 (4, "Insert postponed: metafile_number = %d, lev_type = %d, size = %d\n", VAR_6, VAR_7->type, VAR_8);
  VAR_4 ++;
  struct postponed_operation *VAR_9 = FUNC_3 (VAR_8 + sizeof (struct postponed_operation));
  VAR_3 += VAR_8 + sizeof (struct postponed_operation);
  VAR_9->size = VAR_8;
  VAR_9->next = 0;
  VAR_9->prev = 0;
  VAR_9->time = VAR_1;
  FUNC_1 (VAR_9->E, VAR_7, VAR_8);
  if (!VAR_2[VAR_6]) {
    VAR_2[VAR_6] = VAR_9;
    VAR_9->next = VAR_9;
    VAR_9->prev = VAR_9;
  } else {
    struct postponed_operation *VAR_10 = VAR_2[VAR_6];
    VAR_9->prev = VAR_10->prev;
    VAR_9->next = VAR_10;
    VAR_10->prev = VAR_9;
    VAR_9->prev->next = VAR_9;
  }
}
