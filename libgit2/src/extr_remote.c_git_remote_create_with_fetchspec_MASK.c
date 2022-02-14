
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {char const* name; char const* fetchspec; int flags; int * repository; } ;
typedef TYPE_1__ git_remote_create_options ;
typedef int git_remote ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int **,char const*,TYPE_1__*) ;

int FUNC_2(git_remote **VAR_2, git_repository *VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 int VAR_7;
 git_remote_create_options VAR_8 = VAR_0;

 if ((VAR_7 = FUNC_0(VAR_4)) < 0)
  return VAR_7;

 VAR_8.repository = VAR_3;
 VAR_8.name = VAR_4;
 VAR_8.fetchspec = VAR_6;
 VAR_8.flags = VAR_1;

 return FUNC_1(VAR_2, VAR_5, &VAR_8);
}
