
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; int item; } ;


 int FUNC_0 (int ,struct commit_list**) ;
 struct commit_list* FUNC_1 (int ,int ) ;

struct commit_list *FUNC_2(struct commit_list *VAR_0)
{
 struct commit_list *VAR_1, *VAR_2, *VAR_3, *VAR_4 = ((void*)0);

 if (!VAR_0)
  return VAR_4;

 FUNC_0(VAR_0->item, &VAR_4);

 for (VAR_1 = VAR_0->next; VAR_1; VAR_1 = VAR_1->next) {
  struct commit_list *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

  for (VAR_2 = VAR_4; VAR_2; VAR_2 = VAR_2->next) {
   struct commit_list *VAR_7;
   VAR_7 = FUNC_1(VAR_1->item, VAR_2->item);
   if (!VAR_5)
    VAR_5 = VAR_7;
   else
    VAR_6->next = VAR_7;
   for (VAR_3 = VAR_7; VAR_3; VAR_3 = VAR_3->next)
    VAR_6 = VAR_3;
  }
  VAR_4 = VAR_5;
 }
 return VAR_4;
}
