
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_itemid_entry {struct list_itemid_entry* next; int item_id; } ;
struct hashset_int {int dummy; } ;
struct TYPE_6__ {TYPE_4__* cur; } ;
typedef TYPE_1__ iheap_en_t ;
struct TYPE_7__ {int item_id; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct list_itemid_entry*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (struct hashset_int*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 int VAR_2 ;
 struct list_itemid_entry* FUNC_6 (int) ;

int FUNC_7 (struct hashset_int *VAR_3, int VAR_4) {
  struct list_itemid_entry *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7;
  VAR_1 = 0;
  FUNC_0 ();

  if (!FUNC_5 (VAR_0, VAR_2, 1, 0)) {
    return 0;
  }

  iheap_en_t *VAR_8 = VAR_0;
  while (VAR_8->cur) {
    int VAR_9 = FUNC_2 (VAR_8->cur, VAR_4);
    if (VAR_9 && FUNC_3 (VAR_3, VAR_9)) {
      VAR_7 = FUNC_6 (sizeof (struct list_itemid_entry));
      VAR_7->item_id = VAR_8->cur->item_id;
      VAR_7->next = ((void*)0);
      if (VAR_5) {
        VAR_6->next = VAR_7;
        VAR_6 = VAR_7;
      } else {
        VAR_5 = VAR_6 = VAR_7;
      }
    }
    FUNC_4 (VAR_8);
  }
  return FUNC_1 (VAR_5);
}
