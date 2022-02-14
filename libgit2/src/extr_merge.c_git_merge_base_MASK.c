
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_6__ {TYPE_1__* item; } ;
typedef TYPE_2__ git_commit_list ;
struct TYPE_5__ {int oid; } ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__**,int **,int *,int const*,int const*) ;

int FUNC_4(git_oid *VAR_0, git_repository *VAR_1, const git_oid *VAR_2, const git_oid *VAR_3)
{
 int VAR_4;
 git_revwalk *VAR_5;
 git_commit_list *VAR_6;

 if ((VAR_4 = FUNC_3(&VAR_6, &VAR_5, VAR_1, VAR_2, VAR_3)) < 0)
  return VAR_4;

 FUNC_1(VAR_0, &VAR_6->item->oid);
 FUNC_0(&VAR_6);
 FUNC_2(VAR_5);

 return 0;
}
