
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct llist_item {struct llist_item* next; int oid; } ;
struct llist {struct llist_item* front; } ;


 struct llist_item* FUNC_0 (struct llist*,struct llist_item*,struct object_id const*) ;
 struct llist_item* FUNC_1 (struct llist*,struct object_id const*) ;
 int FUNC_2 (int ,struct object_id const*) ;

__attribute__((used)) static inline struct llist_item *FUNC_3(struct llist *VAR_0,
   const struct object_id *VAR_1, struct llist_item *VAR_2)
{
 struct llist_item *VAR_3 = ((void*)0), *VAR_4;

 VAR_4 = (VAR_2 == ((void*)0)) ? VAR_0->front : VAR_2;
 while (VAR_4) {
  int VAR_5 = FUNC_2(VAR_4->oid, VAR_1);
  if (VAR_5 > 0) {
   return FUNC_0(VAR_0, VAR_3, VAR_1);
  }
  if (!VAR_5) {
   return VAR_4;
  }
  VAR_3 = VAR_4;
  VAR_4 = VAR_4->next;
 }

 return FUNC_1(VAR_0, VAR_1);
}
