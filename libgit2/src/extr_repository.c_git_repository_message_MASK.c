
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_3__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,struct stat*) ;

int FUNC_7(git_buf *VAR_6, git_repository *VAR_7)
{
 git_buf VAR_8 = VAR_1;
 struct stat VAR_9;
 int VAR_10;

 FUNC_3(VAR_6);

 if (FUNC_2(&VAR_8, VAR_7->gitdir, VAR_4) < 0)
  return -1;

 if ((VAR_10 = FUNC_6(FUNC_0(&VAR_8), &VAR_9)) < 0) {
  if (VAR_5 == VAR_0)
   VAR_10 = VAR_2;
  FUNC_4(VAR_3, "could not access message file");
 } else {
  VAR_10 = FUNC_5(VAR_6, FUNC_0(&VAR_8));
 }

 FUNC_1(&VAR_8);

 return VAR_10;
}
