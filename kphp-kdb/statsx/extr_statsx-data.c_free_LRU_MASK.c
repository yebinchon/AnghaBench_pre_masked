
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* prev; int counter_id; struct counter* prev_use; int next_use; } ;


 struct counter** VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct counter*,int) ;
 struct counter* FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4 () {
  if (VAR_4 >= 3) { FUNC_1 (VAR_3, "free_LRU\n"); }
  if (VAR_0[VAR_1] == 0) {
    return 0;
  }
  if (VAR_4 >= 3) { FUNC_1 (VAR_3, "first and last are %p and %d\n", VAR_0[VAR_1]->prev_use, VAR_0[VAR_1]->next_use); }

  if (VAR_0[VAR_1]->prev_use == VAR_0[VAR_1]) {
    if (VAR_4 >= 3) {
      FUNC_1 (VAR_3, "No elements can be deleted by LRU. Failed to free mem.\n");
    }
    return 0;
  } else {
    struct counter *VAR_5 = VAR_0[VAR_1]->prev_use;
    if (VAR_5) {
      struct counter *VAR_6 = FUNC_3 (VAR_5->counter_id, 0);
      while (VAR_6 && VAR_6->prev != VAR_5) {
        VAR_6 = VAR_6->prev;
      }
      if (VAR_6) {
        FUNC_0 (VAR_6->prev == VAR_5);
        VAR_6->prev = 0;
      }
      FUNC_2 (VAR_5, 1);
      VAR_2++;
    }
    return 1;
  }
}
