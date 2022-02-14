
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oidarray ;
typedef int git_oid ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__* item; } ;
typedef TYPE_2__ git_commit_list ;
typedef int git_array_oid_t ;
struct TYPE_5__ {int oid; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__**,int **,int *,size_t,int const*) ;

int FUNC_8(git_oidarray *VAR_0, git_repository *VAR_1, size_t VAR_2, const git_oid VAR_3[])
{
 git_revwalk *VAR_4;
 git_commit_list *VAR_5, *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 git_array_oid_t VAR_8;

 FUNC_0(VAR_0 && VAR_1 && VAR_3);

 if ((VAR_7 = FUNC_7(&VAR_6, &VAR_4, VAR_1, VAR_2, VAR_3)) < 0)
  return VAR_7;

 FUNC_2(VAR_8);

 VAR_5 = VAR_6;
 while (VAR_5) {
  git_oid *VAR_9 = FUNC_1(VAR_8);
  if (VAR_9 == ((void*)0)) {
   VAR_7 = -1;
   goto cleanup;
  }

  FUNC_4(VAR_9, &VAR_5->item->oid);
  VAR_5 = VAR_5->next;
 }

 FUNC_5(VAR_0, &VAR_8);

cleanup:
 FUNC_3(&VAR_6);
 FUNC_6(VAR_4);

 return VAR_7;
}
