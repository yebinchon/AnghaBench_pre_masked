
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_strarray ;
struct TYPE_5__ {int pool; int pathspec; int prefix; } ;
typedef TYPE_1__ git_pathspec ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

int FUNC_5(git_pathspec *VAR_0, const git_strarray *VAR_1)
{
 int VAR_2 = 0;

 FUNC_4(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->prefix = FUNC_2(VAR_1);
 FUNC_3(&VAR_0->pool, 1);

 if ((VAR_2 = FUNC_1(&VAR_0->pathspec, VAR_1, &VAR_0->pool)) < 0)
  FUNC_0(VAR_0);

 return VAR_2;
}
