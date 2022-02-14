
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct llist_item {struct llist_item* next; struct object_id const* oid; } ;
struct llist {scalar_t__ size; struct llist_item* front; struct llist_item* back; } ;


 struct llist_item* FUNC_0 () ;

__attribute__((used)) static inline struct llist_item *FUNC_1(struct llist *VAR_0,
           struct llist_item *VAR_1,
           const struct object_id *VAR_2)
{
 struct llist_item *VAR_3 = FUNC_0();
 VAR_3->oid = VAR_2;
 VAR_3->next = ((void*)0);

 if (VAR_1 != ((void*)0)) {
  VAR_3->next = VAR_1->next;
  VAR_1->next = VAR_3;
  if (VAR_1 == VAR_0->back)
   VAR_0->back = VAR_3;
 } else {
  if (VAR_0->size == 0)
   VAR_0->back = VAR_3;
  else
   VAR_3->next = VAR_0->front;
  VAR_0->front = VAR_3;
 }
 VAR_0->size++;
 return VAR_3;
}
