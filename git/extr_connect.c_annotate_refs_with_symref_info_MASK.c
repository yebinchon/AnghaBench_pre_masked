
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {scalar_t__ util; } ;
struct string_list {int dummy; } ;
struct ref {int symref; int name; struct ref* next; } ;


 struct string_list VAR_0 ;
 char* FUNC_0 (char const*,char*,int*) ;
 int FUNC_1 (struct string_list*,char const*,int) ;
 char* VAR_1 ;
 int FUNC_2 (struct string_list*,int ) ;
 struct string_list_item* FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (struct string_list*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct ref *VAR_2)
{
 struct string_list VAR_3 = VAR_0;
 const char *VAR_4 = VAR_1;

 while (VAR_4) {
  int VAR_5;
  const char *VAR_6;

  VAR_6 = FUNC_0(VAR_4, "symref", &VAR_5);
  if (!VAR_6)
   break;
  FUNC_1(&VAR_3, VAR_6, VAR_5);
  VAR_4 = VAR_6 + 1;
 }
 FUNC_4(&VAR_3);

 for (; VAR_2; VAR_2 = VAR_2->next) {
  struct string_list_item *VAR_7;
  VAR_7 = FUNC_3(&VAR_3, VAR_2->name);
  if (!VAR_7)
   continue;
  VAR_2->symref = FUNC_5((char *)VAR_7->util);
 }
 FUNC_2(&VAR_3, 0);
}
