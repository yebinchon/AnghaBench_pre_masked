
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int repo; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_oid ;
typedef int git_commit ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,int ,int const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int const*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

int FUNC_5(git_packbuilder *VAR_0, const git_oid *VAR_1)
{
 git_commit *VAR_2;

 if (FUNC_1(&VAR_2, VAR_0->repo, VAR_1) < 0 ||
  FUNC_3(VAR_0, VAR_1, ((void*)0)) < 0)
  return -1;

 if (FUNC_4(VAR_0, FUNC_2(VAR_2)) < 0)
  return -1;

 FUNC_0(VAR_2);
 return 0;
}
