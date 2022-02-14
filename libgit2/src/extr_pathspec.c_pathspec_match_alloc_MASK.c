
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int datatype; int * pathspec; int pool; } ;
typedef TYPE_1__ git_pathspec_match_list ;
typedef int git_pathspec ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static git_pathspec_match_list *FUNC_3(
 git_pathspec *VAR_0, int VAR_1)
{
 git_pathspec_match_list *VAR_2 = FUNC_1(1, sizeof(git_pathspec_match_list));
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(&VAR_2->pool, 1);





 FUNC_0(VAR_0);
 VAR_2->pathspec = VAR_0;
 VAR_2->datatype = VAR_1;

 return VAR_2;
}
