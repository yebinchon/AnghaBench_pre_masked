
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct llist_item {struct llist_item* next; int oid; } ;
struct llist {int size; struct llist_item* back; struct llist_item* front; } ;


 int FUNC_0 (struct llist_item*) ;
 int FUNC_1 (int ,struct object_id const*) ;

__attribute__((used)) static inline struct llist_item * FUNC_2(struct llist *VAR_0, const struct object_id *VAR_1, struct llist_item *VAR_2)
{
 struct llist_item *VAR_3, *VAR_4;

redo_from_start:
 VAR_4 = (VAR_2 == ((void*)0)) ? VAR_0->front : VAR_2;
 VAR_3 = ((void*)0);
 while (VAR_4) {
  const int VAR_5 = FUNC_1(VAR_4->oid, VAR_1);
  if (VAR_5 > 0)
   return VAR_3;
  if (!VAR_5) {
   if (VAR_3 == ((void*)0)) {
    if (VAR_2 != ((void*)0) && VAR_2 != VAR_0->front) {

     VAR_2 = ((void*)0);
     goto redo_from_start;
    }
    VAR_0->front = VAR_4->next;
   } else
    VAR_3->next = VAR_4->next;
   if (VAR_4 == VAR_0->back)
    VAR_0->back = VAR_3;
   FUNC_0(VAR_4);
   VAR_0->size--;
   return VAR_3;
  }
  VAR_3 = VAR_4;
  VAR_4 = VAR_4->next;
 }
 return VAR_3;
}
