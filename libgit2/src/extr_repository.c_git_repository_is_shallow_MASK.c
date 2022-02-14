
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_7__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct stat*) ;

int FUNC_4(git_repository *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 struct stat VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_3, VAR_2->gitdir, "shallow")) < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3.ptr, &VAR_4);
 FUNC_0(&VAR_3);

 if (VAR_5 == VAR_1) {
  FUNC_2();
  return 0;
 }

 if (VAR_5 < 0)
  return VAR_5;
 return VAR_4.st_size == 0 ? 0 : 1;
}
