
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {struct ref* util; } ;
struct string_list {int dummy; } ;
struct ref {struct ref* next; TYPE_1__* peer_ref; } ;
struct TYPE_2__ {int name; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (struct ref*,struct ref*) ;
 int FUNC_1 (struct string_list*,int ) ;
 struct string_list_item* FUNC_2 (struct string_list*,int ) ;

struct ref *FUNC_3(struct ref *VAR_1)
{
 struct string_list VAR_2 = VAR_0;
 struct ref *VAR_3 = ((void*)0);
 struct ref **VAR_4 = &VAR_3;

 while (VAR_1) {
  struct ref *VAR_5 = VAR_1;

  VAR_1 = VAR_1->next;
  VAR_5->next = ((void*)0);

  if (!VAR_5->peer_ref) {
   *VAR_4 = VAR_5;
   VAR_4 = &VAR_5->next;
  } else {
   struct string_list_item *VAR_6 =
    FUNC_2(&VAR_2, VAR_5->peer_ref->name);

   if (VAR_6->util) {

    FUNC_0((struct ref *)VAR_6->util, VAR_5);
   } else {
    *VAR_4 = VAR_5;
    VAR_4 = &VAR_5->next;
    VAR_6->util = VAR_5;
   }
  }
 }

 FUNC_1(&VAR_2, 0);
 return VAR_3;
}
