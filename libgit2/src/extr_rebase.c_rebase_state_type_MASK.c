
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef scalar_t__ git_rebase_type_t ;
typedef int git_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(
 git_rebase_type_t *VAR_6,
 char **VAR_7,
 git_repository *VAR_8)
{
 git_buf VAR_9 = VAR_0;
 git_rebase_type_t VAR_10 = VAR_3;

 if (FUNC_4(&VAR_9, VAR_8->gitdir, VAR_4) < 0)
  return -1;

 if (FUNC_5(FUNC_1(&VAR_9))) {
  VAR_10 = VAR_1;
  goto done;
 }

 FUNC_0(&VAR_9);
 if (FUNC_4(&VAR_9, VAR_8->gitdir, VAR_5) < 0)
  return -1;

 if (FUNC_5(FUNC_1(&VAR_9))) {
  VAR_10 = VAR_2;
  goto done;
 }

done:
 *VAR_6 = VAR_10;

 if (VAR_10 != VAR_3 && VAR_7)
  *VAR_7 = FUNC_2(&VAR_9);

 FUNC_3(&VAR_9);

 return 0;
}
