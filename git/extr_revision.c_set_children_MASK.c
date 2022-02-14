
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {struct commit_list* commits; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;


 int FUNC_0 (struct rev_info*,struct commit*,struct commit*) ;

__attribute__((used)) static void FUNC_1(struct rev_info *VAR_0)
{
 struct commit_list *VAR_1;
 for (VAR_1 = VAR_0->commits; VAR_1; VAR_1 = VAR_1->next) {
  struct commit *VAR_2 = VAR_1->item;
  struct commit_list *VAR_3;

  for (VAR_3 = VAR_2->parents; VAR_3; VAR_3 = VAR_3->next)
   FUNC_0(VAR_0, VAR_3->item, VAR_2);
 }
}
