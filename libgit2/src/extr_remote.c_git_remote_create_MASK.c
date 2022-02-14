
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {char const* name; int * repository; } ;
typedef TYPE_1__ git_remote_create_options ;
typedef int git_remote ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,TYPE_1__*) ;

int FUNC_5(git_remote **VAR_3, git_repository *VAR_4, const char *VAR_5, const char *VAR_6)
{
 git_buf VAR_7 = VAR_0;
 int VAR_8;
 git_remote_create_options VAR_9 = VAR_2;


 if ((VAR_8 = FUNC_1(VAR_5)) < 0)
  return VAR_8;

 if (FUNC_0(&VAR_7, VAR_6) < 0)
  return VAR_1;

 FUNC_2(&VAR_7);

 VAR_9.repository = VAR_4;
 VAR_9.name = VAR_5;

 VAR_8 = FUNC_4(VAR_3, VAR_6, &VAR_9);

 FUNC_3(&VAR_7);

 return VAR_8;
}
