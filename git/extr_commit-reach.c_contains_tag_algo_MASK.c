
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct contains_stack_entry {struct commit_list* parents; struct commit* commit; } ;
struct contains_stack {int nr; struct contains_stack_entry* contains_stack; int * member_2; int member_1; int member_0; } ;
struct contains_cache {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {scalar_t__ generation; } ;
typedef enum contains_result { ____Placeholder_contains_result } contains_result ;





 scalar_t__ VAR_0 ;
 int* FUNC_0 (struct contains_cache*,struct commit*) ;
 int FUNC_1 (struct commit*,struct commit_list const*,struct contains_cache*,scalar_t__) ;
 int FUNC_2 (struct contains_stack_entry*) ;
 int FUNC_3 (int ,struct commit*) ;
 int FUNC_4 (struct commit*,struct contains_stack*) ;
 int VAR_1 ;

__attribute__((used)) static enum contains_result FUNC_5(struct commit *VAR_2,
           const struct commit_list *VAR_3,
           struct contains_cache *VAR_4)
{
 struct contains_stack VAR_5 = { 0, 0, ((void*)0) };
 enum contains_result VAR_6;
 uint32_t VAR_7 = VAR_0;
 const struct commit_list *VAR_8;

 for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next) {
  struct commit *VAR_9 = VAR_8->item;
  FUNC_3(VAR_1, VAR_9);
  if (VAR_9->generation < VAR_7)
   VAR_7 = VAR_9->generation;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7);
 if (VAR_6 != 129)
  return VAR_6;

 FUNC_4(VAR_2, &VAR_5);
 while (VAR_5.nr) {
  struct contains_stack_entry *VAR_10 = &VAR_5.contains_stack[VAR_5.nr - 1];
  struct commit *VAR_11 = VAR_10->commit;
  struct commit_list *VAR_12 = VAR_10->parents;

  if (!VAR_12) {
   *FUNC_0(VAR_4, VAR_11) = 130;
   VAR_5.nr--;
  }




  else switch (FUNC_1(VAR_12->item, VAR_3, VAR_4, VAR_7)) {
  case 128:
   *FUNC_0(VAR_4, VAR_11) = 128;
   VAR_5.nr--;
   break;
  case 130:
   VAR_10->parents = VAR_12->next;
   break;
  case 129:
   FUNC_4(VAR_12->item, &VAR_5);
   break;
  }
 }
 FUNC_2(VAR_5.contains_stack);
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7);
}
