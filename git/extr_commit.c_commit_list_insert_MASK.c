
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {int dummy; } ;


 struct commit_list* FUNC_0 (int) ;

struct commit_list *FUNC_1(struct commit *VAR_0, struct commit_list **VAR_1)
{
 struct commit_list *VAR_2 = FUNC_0(sizeof(struct commit_list));
 VAR_2->item = VAR_0;
 VAR_2->next = *VAR_1;
 *VAR_1 = VAR_2;
 return VAR_2;
}
