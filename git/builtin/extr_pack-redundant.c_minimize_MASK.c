
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_list {struct pack_list* next; struct llist* remaining_objects; TYPE_1__* unique_objects; } ;
struct llist {scalar_t__ size; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (struct llist*) ;
 struct llist* FUNC_1 (int ) ;
 int FUNC_2 (struct llist*,struct llist*) ;
 struct pack_list* VAR_1 ;
 int FUNC_3 (struct pack_list**,struct pack_list*) ;
 int FUNC_4 (struct pack_list**) ;

__attribute__((used)) static void FUNC_5(struct pack_list **VAR_2)
{
 struct pack_list *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 struct llist *VAR_6, *VAR_7;

 VAR_3 = VAR_1;
 while (VAR_3) {
  if (VAR_3->unique_objects->size)
   FUNC_3(&VAR_4, VAR_3);
  else
   FUNC_3(&VAR_5, VAR_3);
  VAR_3 = VAR_3->next;
 }

 VAR_6 = FUNC_1(VAR_0);
 VAR_3 = VAR_4;
 while (VAR_3) {
  FUNC_2(VAR_6, VAR_3->remaining_objects);
  VAR_3 = VAR_3->next;
 }

 *VAR_2 = VAR_4;


 if (VAR_6->size == 0) {
  FUNC_0(VAR_6);
  return;
 }

 VAR_7 = FUNC_1(VAR_0);
 FUNC_2(VAR_7, VAR_6);


 VAR_3 = VAR_5;
 while (VAR_3) {
  FUNC_2(VAR_3->remaining_objects, VAR_7);
  VAR_3 = VAR_3->next;
 }

 while (VAR_5) {

  FUNC_4(&VAR_5);
  if (VAR_5->remaining_objects->size == 0)
   break;

  FUNC_3(VAR_2, VAR_5);

  for (VAR_3 = VAR_5->next; VAR_3 && VAR_3->remaining_objects->size > 0; VAR_3 = VAR_3->next)
   FUNC_2(VAR_3->remaining_objects, VAR_5->remaining_objects);

  VAR_5 = VAR_5->next;
 }
}
