
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int iterator_time; } ;
typedef TYPE_1__ git_revwalk ;
struct TYPE_7__ {int uninteresting; } ;
typedef TYPE_2__ git_commit_list_node ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(git_commit_list_node **VAR_1, git_revwalk *VAR_2)
{
 git_commit_list_node *VAR_3;

 while ((VAR_3 = FUNC_1(&VAR_2->iterator_time)) != ((void*)0)) {

  if (!VAR_3->uninteresting) {
   *VAR_1 = VAR_3;
   return 0;
  }
 }

 FUNC_0();
 return VAR_0;
}
