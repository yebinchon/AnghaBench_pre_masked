
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct llist_item {int dummy; } ;
struct llist {int back; } ;


 struct llist_item* FUNC_0 (struct llist*,int ,struct object_id const*) ;

__attribute__((used)) static inline struct llist_item *FUNC_1(struct llist *VAR_0,
         const struct object_id *VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->back, VAR_1);
}
