
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; int deltas; int attrsession; } ;
struct TYPE_6__ {TYPE_1__ base; int pathspec; } ;
typedef TYPE_2__ git_diff_generated ;
typedef int git_diff ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(git_diff *VAR_0)
{
 git_diff_generated *VAR_1 = (git_diff_generated *)VAR_0;

 FUNC_2(&VAR_1->base.attrsession);
 FUNC_5(&VAR_1->base.deltas);

 FUNC_3(&VAR_1->pathspec);
 FUNC_4(&VAR_1->base.pool);

 FUNC_1(VAR_1, sizeof(*VAR_1));
 FUNC_0(VAR_1);
}
