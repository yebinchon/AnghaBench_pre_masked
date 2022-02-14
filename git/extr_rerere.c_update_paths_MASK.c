
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; } ;
struct string_list {int nr; struct string_list_item* items; } ;
struct repository {int index; } ;
struct lock_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct repository*,struct lock_file*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,struct lock_file*,int) ;

__attribute__((used)) static void FUNC_7(struct repository *VAR_5, struct string_list *VAR_6)
{
 struct lock_file VAR_7 = VAR_2;
 int VAR_8;

 FUNC_5(VAR_5, &VAR_7, VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_6->nr; VAR_8++) {
  struct string_list_item *VAR_9 = &VAR_6->items[VAR_8];
  if (FUNC_1(VAR_5->index, VAR_9->string, 0))
   FUNC_3(128);
  FUNC_4(VAR_4, FUNC_0("Staged '%s' using previous resolution."),
   VAR_9->string);
 }

 if (FUNC_6(VAR_5->index, &VAR_7,
          VAR_0 | VAR_3))
  FUNC_2(FUNC_0("unable to write new index file"));
}
