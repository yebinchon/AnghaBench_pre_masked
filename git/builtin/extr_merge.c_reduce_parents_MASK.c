
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {struct commit_list* next; } ;


 TYPE_1__* FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit_list*) ;
 struct commit* FUNC_2 (struct commit_list**) ;
 struct commit_list* FUNC_3 (struct commit_list*) ;

__attribute__((used)) static struct commit_list *FUNC_4(struct commit *VAR_0,
       int *VAR_1,
       struct commit_list *VAR_2)
{
 struct commit_list *VAR_3, **VAR_4;
 *VAR_1 = 1;


 VAR_3 = FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 VAR_2 = ((void*)0);
 VAR_4 = &VAR_2;
 while (VAR_3) {
  struct commit *VAR_5 = FUNC_2(&VAR_3);
  if (VAR_5 == VAR_0)
   *VAR_1 = 0;
  else
   VAR_4 = &FUNC_0(VAR_5, VAR_4)->next;
 }
 return VAR_2;
}
