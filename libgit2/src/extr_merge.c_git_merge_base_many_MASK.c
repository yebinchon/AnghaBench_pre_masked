
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


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__**,int **,int *,size_t,int const*) ;

int FUNC_5(git_oid *VAR_0, git_repository *VAR_1, size_t VAR_2, const git_oid VAR_3[])
{
 git_revwalk *VAR_4;
 git_commit_list *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 FUNC_0(VAR_0 && VAR_1 && VAR_3);

 if ((VAR_6 = FUNC_4(&VAR_5, &VAR_4, VAR_1, VAR_2, VAR_3)) < 0)
  return VAR_6;

 FUNC_2(VAR_0, &VAR_5->item->oid);

 FUNC_1(&VAR_5);
 FUNC_3(VAR_4);

 return 0;
}
