
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {void* util; } ;
struct string_list {int dummy; } ;
struct command {int error_string; struct command* next; int ref_name; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (struct command*,struct string_list*) ;
 struct string_list_item* FUNC_1 (struct string_list*,int ) ;
 int FUNC_2 (struct string_list*,int ) ;
 int FUNC_3 (struct string_list*) ;

__attribute__((used)) static void FUNC_4(struct command *VAR_1)
{
 struct command *VAR_2;
 struct string_list VAR_3 = VAR_0;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  struct string_list_item *VAR_4 =
   FUNC_1(&VAR_3, VAR_2->ref_name);
  VAR_4->util = (void *)VAR_2;
 }
 FUNC_3(&VAR_3);

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  if (!VAR_2->error_string)
   FUNC_0(VAR_2, &VAR_3);
 }

 FUNC_2(&VAR_3, 0);
}
