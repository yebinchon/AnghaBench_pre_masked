
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_item {struct llist_item* next; int oid; } ;
struct llist {struct llist_item* back; struct llist_item* front; int size; } ;


 int FUNC_0 (struct llist**) ;
 void* FUNC_1 () ;

__attribute__((used)) static struct llist * FUNC_2(struct llist *VAR_0)
{
 struct llist *VAR_1;
 struct llist_item *VAR_2, *VAR_3, *VAR_4;

 FUNC_0(&VAR_1);

 if ((VAR_1->size = VAR_0->size) == 0)
  return VAR_1;

 VAR_2 = VAR_1->front = FUNC_1();
 VAR_2->oid = VAR_0->front->oid;

 VAR_3 = VAR_0->front->next;
 while (VAR_3) {
  VAR_4 = VAR_2;
  VAR_2 = FUNC_1();
  VAR_4->next = VAR_2;
  VAR_2->oid = VAR_3->oid;
  VAR_3 = VAR_3->next;
 }
 VAR_2->next = ((void*)0);
 VAR_1->back = VAR_2;

 return VAR_1;
}
