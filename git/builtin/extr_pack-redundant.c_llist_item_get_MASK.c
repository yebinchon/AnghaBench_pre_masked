
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist_item {struct llist_item* next; } ;


 int FUNC_0 (struct llist_item*,int) ;
 int VAR_0 ;
 struct llist_item* VAR_1 ;
 int FUNC_1 (struct llist_item*) ;

__attribute__((used)) static inline struct llist_item *FUNC_2(void)
{
 struct llist_item *VAR_2;
 if ( VAR_1 ) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
 } else {
  int VAR_3 = 1;
  FUNC_0(VAR_2, VAR_0);
  for (; VAR_3 < VAR_0; VAR_3++)
   FUNC_1(&VAR_2[VAR_3]);
 }
 return VAR_2;
}
