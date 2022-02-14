
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opts {int argc; char** argv; } ;
typedef int git_repository ;
typedef int git_remote ;
struct TYPE_2__ {int member_0; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int **,int *,char*,char*) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static int FUNC_3(git_repository *VAR_0, struct opts *VAR_1)
{
 char *VAR_2, *VAR_3;
 git_remote *VAR_4 = {0};

 if (VAR_1->argc != 2)
  FUNC_2("you need to specify a name and URL", ((void*)0));

 VAR_2 = VAR_1->argv[0];
 VAR_3 = VAR_1->argv[1];

 FUNC_0(FUNC_1(&VAR_4, VAR_0, VAR_2, VAR_3),
   "could not create remote", ((void*)0));

 return 0;
}
