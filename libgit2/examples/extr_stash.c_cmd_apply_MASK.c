
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {scalar_t__ argc; } ;
typedef int git_repository ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(git_repository *VAR_0, struct opts *VAR_1)
{
 if (VAR_1->argc)
  FUNC_2("apply does not accept any parameters");

 FUNC_0(FUNC_1(VAR_0, 0, ((void*)0)),
    "Unable to apply stash", ((void*)0));

 return 0;
}
