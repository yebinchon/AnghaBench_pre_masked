
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int * repository; } ;
typedef TYPE_1__ git_remote_create_options ;
typedef int git_remote ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int **,char const*,TYPE_1__*) ;

int FUNC_1(git_remote **VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 git_remote_create_options VAR_4 = VAR_0;

 VAR_4.repository = VAR_2;

 return FUNC_0(VAR_1, VAR_3, &VAR_4);
}
