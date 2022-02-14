
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit_extra_header {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit*,struct commit_extra_header***) ;

void FUNC_1(struct commit_list *VAR_0,
         struct commit_extra_header ***VAR_1)
{
 while (VAR_0) {
  struct commit *VAR_2 = VAR_0->item;
  FUNC_0(VAR_2, VAR_1);
  VAR_0 = VAR_0->next;
 }
}
