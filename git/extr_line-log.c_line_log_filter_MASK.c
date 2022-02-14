
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {struct commit_list* commits; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit_list*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct rev_info*,struct commit*) ;
 int FUNC_2 (struct rev_info*,struct commit*,int ) ;

int FUNC_3(struct rev_info *VAR_1)
{
 struct commit *VAR_2;
 struct commit_list *VAR_3 = VAR_1->commits;
 struct commit_list *VAR_4 = ((void*)0), **VAR_5 = &VAR_4;

 while (VAR_3) {
  struct commit_list *VAR_6 = ((void*)0);
  VAR_2 = VAR_3->item;
  if (FUNC_1(VAR_1, VAR_2)) {
   *VAR_5 = VAR_3;
   VAR_5 = &VAR_3->next;
  } else
   VAR_6 = VAR_3;
  VAR_3 = VAR_3->next;
  FUNC_0(VAR_6);
 }
 *VAR_5 = ((void*)0);

 for (VAR_3 = VAR_4; VAR_3; VAR_3 = VAR_3->next)
  FUNC_2(VAR_1, VAR_3->item, VAR_0);

 VAR_1->commits = VAR_4;

 return 0;
}
