
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int direach_flags; int gitpath; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(refdb_fs_backend *VAR_3)
{
 int VAR_4;
 git_buf VAR_5 = VAR_0;

 if (FUNC_1(&VAR_5, VAR_3->gitpath, VAR_1) < 0)
  return -1;






 VAR_4 = FUNC_2(
  &VAR_5, VAR_3->direach_flags, VAR_2, VAR_3);

 FUNC_0(&VAR_5);

 return VAR_4;
}
