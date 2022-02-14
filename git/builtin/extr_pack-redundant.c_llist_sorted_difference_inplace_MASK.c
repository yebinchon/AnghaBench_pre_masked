
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_item {struct llist_item* next; int oid; } ;
struct llist {struct llist_item* front; } ;


 struct llist_item* FUNC_0 (struct llist*,int ,struct llist_item*) ;

__attribute__((used)) static void FUNC_1(struct llist *VAR_0,
         struct llist *VAR_1)
{
 struct llist_item *VAR_2, *VAR_3;

 VAR_2 = ((void*)0);
 VAR_3 = VAR_1->front;

 while (VAR_3) {
  VAR_2 = FUNC_0(VAR_0, VAR_3->oid, VAR_2);
  VAR_3 = VAR_3->next;
 }
}
