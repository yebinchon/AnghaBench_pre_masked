
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_item {struct llist_item* next; } ;


 struct llist_item* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct llist_item *VAR_1)
{
 VAR_1->next = VAR_0;
 VAR_0 = VAR_1;
}
