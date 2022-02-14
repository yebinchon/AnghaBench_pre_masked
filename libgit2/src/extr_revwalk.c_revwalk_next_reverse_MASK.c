
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iterator_reverse; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_commit_list_node ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(git_commit_list_node **VAR_1, git_revwalk *VAR_2)
{
 *VAR_1 = FUNC_0(&VAR_2->iterator_reverse);
 return *VAR_1 ? 0 : VAR_0;
}
