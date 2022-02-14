
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int failures; int matches; int * pathspec; } ;
typedef TYPE_1__ git_pathspec_match_list ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(git_pathspec_match_list *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0->pathspec);
 VAR_0->pathspec = ((void*)0);

 FUNC_1(VAR_0->matches);
 FUNC_1(VAR_0->failures);
 FUNC_3(&VAR_0->pool);
 FUNC_0(VAR_0);
}
