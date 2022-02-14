
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int pathspec; int prefix; } ;
typedef TYPE_1__ git_pathspec ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(git_pathspec *VAR_0)
{
 FUNC_0(VAR_0->prefix);
 FUNC_1(&VAR_0->pathspec);
 FUNC_2(&VAR_0->pool);
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
}
