
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_graph {TYPE_1__* commit; } ;
struct commit_list {int item; } ;
struct TYPE_2__ {struct commit_list* parents; } ;


 scalar_t__ FUNC_0 (struct git_graph*,int ) ;
 struct commit_list* FUNC_1 (struct git_graph*,struct commit_list*) ;

__attribute__((used)) static struct commit_list *FUNC_2(struct git_graph *VAR_0)
{
 struct commit_list *VAR_1 = VAR_0->commit->parents;




 if (!VAR_1)
  return ((void*)0);




 if (FUNC_0(VAR_0, VAR_1->item))
  return VAR_1;





 return FUNC_1(VAR_0, VAR_1);
}
