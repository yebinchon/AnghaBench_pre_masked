
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_itemid_entry {struct list_itemid_entry* next; int item_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (struct list_itemid_entry*,int) ;

int FUNC_5 (struct list_itemid_entry *VAR_0) {
  struct list_itemid_entry *VAR_1;
  int VAR_2 = 0;
  for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_0) {
    if (FUNC_0 (VAR_1->item_id)) {
      VAR_2++;
      FUNC_1 ();
    }
    VAR_0 = VAR_1->next;
    FUNC_4 (VAR_1, sizeof (struct list_itemid_entry));
  }
  FUNC_3 (1, "%d items was deleted.\n", VAR_2);
  FUNC_2 ();
  return VAR_2;
}
