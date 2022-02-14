
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; scalar_t__ util; } ;
struct string_list {int nr; struct string_list_item* items; } ;
struct stat {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,struct stat*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct string_list *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++) {
  struct stat VAR_2;
  struct string_list_item *VAR_3 = &(VAR_0->items[VAR_1]);


  if (VAR_3->util)
   continue;

  if (!FUNC_3(VAR_3->string, &VAR_2)) {
   if (FUNC_1(VAR_3->string, &VAR_2, 0))
    FUNC_2(FUNC_0("updating files failed"));
  } else
   FUNC_4(VAR_3->string);
 }
}
