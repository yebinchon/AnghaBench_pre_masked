
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(git_repository *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 int VAR_4;

 if (FUNC_2(&VAR_3, VAR_2->gitdir, VAR_1) < 0)
  return -1;

 VAR_4 = FUNC_3(FUNC_0(&VAR_3));
 FUNC_1(&VAR_3);

 return VAR_4;
}
