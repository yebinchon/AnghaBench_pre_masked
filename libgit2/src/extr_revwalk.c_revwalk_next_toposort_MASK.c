
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int iterator_topo; } ;
typedef TYPE_1__ git_revwalk ;
struct TYPE_8__ {int uninteresting; } ;
typedef TYPE_2__ git_commit_list_node ;


 int FUNC_0 (TYPE_2__**,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_1(git_commit_list_node **VAR_0, git_revwalk *VAR_1)
{
 int VAR_2;
 git_commit_list_node *VAR_3;

 while (!(VAR_2 = FUNC_0(&VAR_3, VAR_1, &VAR_1->iterator_topo))) {

  if (!VAR_3->uninteresting) {
   *VAR_0 = VAR_3;
   return 0;
  }
 }

 return VAR_2;
}
