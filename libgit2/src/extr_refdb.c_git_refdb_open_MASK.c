
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_refdb_backend ;
struct TYPE_5__ {int * backend; int * repo; } ;
typedef TYPE_1__ git_refdb ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int **,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int *) ;

int FUNC_4(git_refdb **VAR_0, git_repository *VAR_1)
{
 git_refdb *VAR_2;
 git_refdb_backend *VAR_3;

 FUNC_0(VAR_0 && VAR_1);

 *VAR_0 = ((void*)0);

 if (FUNC_3(&VAR_2, VAR_1) < 0)
  return -1;


 if (FUNC_1(&VAR_3, VAR_1) < 0) {
  FUNC_2(VAR_2);
  return -1;
 }

 VAR_2->repo = VAR_1;
 VAR_2->backend = VAR_3;

 *VAR_0 = VAR_2;
 return 0;
}
