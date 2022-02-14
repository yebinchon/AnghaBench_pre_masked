
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {scalar_t__ argc; } ;
typedef int git_repository ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(git_repository *VAR_1, struct opts *VAR_2)
{
 if (VAR_2->argc)
  FUNC_2("list does not accept any parameters");

 FUNC_0(FUNC_1(VAR_1, VAR_0, ((void*)0)),
    "Unable to list stashes", ((void*)0));

 return 0;
}
