
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
 int VAR_2 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,char const*) ;
 int FUNC_4 (char const*,int *,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;

int FUNC_8(
 git_repository *VAR_3, const char *VAR_4[], size_t VAR_5)
{
 git_buf VAR_6 = VAR_0;
 size_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0, VAR_7 = 0; !VAR_8 && VAR_7 < VAR_5; ++VAR_7) {
  const char *VAR_9;

  if (FUNC_3(&VAR_6, VAR_3->gitdir, VAR_4[VAR_7]) < 0)
   return -1;

  VAR_9 = FUNC_1(&VAR_6);

  if (FUNC_6(VAR_9)) {
   VAR_8 = FUNC_7(VAR_9);
  } else if (FUNC_5(VAR_9)) {
   VAR_8 = FUNC_4(VAR_9, ((void*)0),
    VAR_2 | VAR_1);
  }

  FUNC_0(&VAR_6);
 }

 FUNC_2(&VAR_6);
 return VAR_8;
}
