
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * repo; int pool; int type; int db; int locks; } ;
typedef TYPE_1__ git_transaction ;
typedef int git_repository ;
typedef int git_pool ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;

int FUNC_7(git_transaction **VAR_1, git_repository *VAR_2)
{
 int VAR_3;
 git_pool VAR_4;
 git_transaction *VAR_5 = ((void*)0);

 FUNC_0(VAR_1 && VAR_2);

 FUNC_2(&VAR_4, 1);

 VAR_5 = FUNC_3(&VAR_4, sizeof(git_transaction));
 if (!VAR_5) {
  VAR_3 = -1;
  goto on_error;
 }

 if ((VAR_3 = FUNC_5(&VAR_5->locks)) < 0) {
  VAR_3 = -1;
  goto on_error;
 }

 if ((VAR_3 = FUNC_4(&VAR_5->db, VAR_2)) < 0)
  goto on_error;

 VAR_5->type = VAR_0;
 FUNC_6(&VAR_5->pool, &VAR_4, sizeof(git_pool));
 VAR_5->repo = VAR_2;
 *VAR_1 = VAR_5;
 return 0;

on_error:
 FUNC_1(&VAR_4);
 return VAR_3;
}
