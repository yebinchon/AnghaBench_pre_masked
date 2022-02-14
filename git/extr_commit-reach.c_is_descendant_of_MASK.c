
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit_list*,struct commit_list*,int ) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int FUNC_2 (struct commit_list*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct commit*,struct commit*) ;
 int VAR_0 ;

int FUNC_5(struct commit *VAR_1, struct commit_list *VAR_2)
{
 if (!VAR_2)
  return 1;

 if (FUNC_3(VAR_0)) {
  struct commit_list *VAR_3 = ((void*)0);
  int VAR_4;
  FUNC_1(VAR_1, &VAR_3);
  VAR_4 = FUNC_0(VAR_3, VAR_2, 0);
  FUNC_2(VAR_3);
  return VAR_4;
 } else {
  while (VAR_2) {
   struct commit *VAR_5;

   VAR_5 = VAR_2->item;
   VAR_2 = VAR_2->next;
   if (FUNC_4(VAR_5, VAR_1))
    return 1;
  }
  return 0;
 }
}
