
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int **,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

int FUNC_8(git_reference **VAR_3, git_repository *VAR_4, const char *VAR_5)
{
 git_buf VAR_6 = VAR_0;
 git_reference *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_0(VAR_3 && VAR_4 && VAR_5);

 *VAR_3 = ((void*)0);

 if ((VAR_8 = FUNC_1(&VAR_6, VAR_4, VAR_5, VAR_1)) < 0 ||
     (VAR_8 = FUNC_3(&VAR_7, VAR_4, VAR_6.ptr)) < 0)
  goto out;

 if (FUNC_7(VAR_7) != VAR_2) {
  git_reference *VAR_9;

  VAR_8 = FUNC_5(&VAR_9, VAR_4, FUNC_6(VAR_7), -1);
  FUNC_4(VAR_7);
  VAR_7 = VAR_9;
 }

 *VAR_3 = VAR_7;

out:
 if (VAR_8)
  FUNC_4(VAR_7);

 FUNC_2(&VAR_6);

 return VAR_8;
}
