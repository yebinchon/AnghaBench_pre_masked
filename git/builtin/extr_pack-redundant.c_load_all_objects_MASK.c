
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_list {struct pack_list* next; TYPE_1__* remaining_objects; } ;
struct llist_item {struct llist_item* next; int oid; } ;
struct TYPE_2__ {struct llist_item* front; } ;


 int VAR_0 ;
 struct pack_list* VAR_1 ;
 int FUNC_0 (int *) ;
 struct llist_item* FUNC_1 (int ,int ,struct llist_item*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 struct pack_list* VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct pack_list *VAR_3 = VAR_2;
 struct llist_item *VAR_4, *VAR_5;

 FUNC_0(&VAR_0);

 while (VAR_3) {
  VAR_4 = ((void*)0);
  VAR_5 = VAR_3->remaining_objects->front;
  while (VAR_5) {
   VAR_4 = FUNC_1(VAR_0,
         VAR_5->oid, VAR_4);
   VAR_5 = VAR_5->next;
  }
  VAR_3 = VAR_3->next;
 }

 VAR_3 = VAR_1;
 while (VAR_3) {
  FUNC_2(VAR_0, VAR_3->remaining_objects);
  VAR_3 = VAR_3->next;
 }
}
