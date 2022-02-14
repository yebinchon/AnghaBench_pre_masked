
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


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__**,int **,int *,int const*,int const*) ;

int FUNC_7(git_oidarray *VAR_0, git_repository *VAR_1, const git_oid *VAR_2, const git_oid *VAR_3)
{
 int VAR_4;
 git_revwalk *VAR_5;
 git_commit_list *VAR_6, *VAR_7;
 git_array_oid_t VAR_8;

 FUNC_1(VAR_8);

 if ((VAR_4 = FUNC_6(&VAR_6, &VAR_5, VAR_1, VAR_2, VAR_3)) < 0)
  return VAR_4;

 VAR_7 = VAR_6;
 while (VAR_7) {
  git_oid *VAR_9 = FUNC_0(VAR_8);
  if (VAR_9 == ((void*)0))
   goto on_error;

  FUNC_3(VAR_9, &VAR_7->item->oid);
  VAR_7 = VAR_7->next;
 }

 FUNC_4(VAR_0, &VAR_8);
 FUNC_2(&VAR_6);
 FUNC_5(VAR_5);

 return 0;

on_error:
 FUNC_2(&VAR_6);
 FUNC_5(VAR_5);
 return -1;
}
