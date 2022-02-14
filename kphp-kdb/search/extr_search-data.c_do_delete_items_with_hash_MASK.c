
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_itemid_entry {struct list_itemid_entry* next; int item_id; } ;
struct TYPE_6__ {TYPE_4__* cur; } ;
typedef TYPE_1__ iheap_en_t ;
struct TYPE_7__ {int item_id; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct list_itemid_entry*) ;
 long long FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ) ;
 int VAR_2 ;
 struct list_itemid_entry* FUNC_5 (int) ;

int FUNC_6 (long long VAR_3) {
  struct list_itemid_entry *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6;
  if (VAR_3 == 0) {
    return 0;
  }
  VAR_1 = 0;
  FUNC_0 ();

  if (!FUNC_4 (VAR_0, VAR_2, 1, 0)) {
    return 0;
  }

  iheap_en_t *VAR_7 = VAR_0;
  while (VAR_7->cur) {
    if (FUNC_2 (VAR_7->cur) == VAR_3) {
      VAR_6 = FUNC_5 (sizeof (struct list_itemid_entry));
      VAR_6->item_id = VAR_7->cur->item_id;
      VAR_6->next = ((void*)0);
      if (VAR_4) {
        VAR_5->next = VAR_6;
        VAR_5 = VAR_6;
      } else {
        VAR_4 = VAR_5 = VAR_6;
      }
    }
    FUNC_3 (VAR_7);
  }
  return FUNC_1 (VAR_4);
}
