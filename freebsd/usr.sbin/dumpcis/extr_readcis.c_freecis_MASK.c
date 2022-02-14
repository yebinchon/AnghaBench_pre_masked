
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuple_list {struct tuple_list* data; struct tuple_list* next; struct tuple_list* tuples; } ;
struct tuple {struct tuple* data; struct tuple* next; struct tuple* tuples; } ;


 int FUNC_0 (struct tuple_list*) ;

void
FUNC_1(struct tuple_list *VAR_0)
{
 struct tuple_list *VAR_1;
 struct tuple *VAR_2;

 while ((VAR_1 = VAR_0) != 0) {
  VAR_0 = VAR_1->next;
  while ((VAR_2 = VAR_1->tuples) != 0) {
   VAR_1->tuples = VAR_2->next;
   FUNC_0(VAR_2->data);
   FUNC_0(VAR_2);
  }
  FUNC_0(VAR_1);
 }
}
