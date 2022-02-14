
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; } ;
struct string_list {int nr; struct string_list_item* items; } ;
struct repository {int index; } ;
struct pathspec {int dummy; } ;


 int VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct repository*,struct string_list*) ;
 int FUNC_3 (int ,struct pathspec*,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_4 (struct repository*) ;
 int FUNC_5 (int ,int ,struct string_list*) ;
 int FUNC_6 (struct repository*,struct string_list*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct pathspec*) ;
 int FUNC_9 (struct string_list*,int) ;

int FUNC_10(struct repository *VAR_2, struct pathspec *VAR_3)
{
 int VAR_4, VAR_5;
 struct string_list VAR_6 = VAR_1;
 struct string_list VAR_7 = VAR_1;

 if (FUNC_4(VAR_2) < 0)
  return FUNC_1(FUNC_0("index file corrupt"));

 VAR_5 = FUNC_6(VAR_2, &VAR_7, VAR_0);
 if (VAR_5 < 0)
  return 0;






 FUNC_8(VAR_2->index, VAR_3);
 FUNC_2(VAR_2, &VAR_6);
 for (VAR_4 = 0; VAR_4 < VAR_6.nr; VAR_4++) {
  struct string_list_item *VAR_8 = &VAR_6.items[VAR_4];
  if (!FUNC_3(VAR_2->index, VAR_3, VAR_8->string,
        FUNC_7(VAR_8->string), 0, ((void*)0), 0))
   continue;
  FUNC_5(VAR_2->index, VAR_8->string, &VAR_7);
 }
 return FUNC_9(&VAR_7, VAR_5);
}
