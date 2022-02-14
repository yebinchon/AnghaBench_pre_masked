
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {int argc; char** argv; } ;
typedef int git_repository ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static int FUNC_3(git_repository *VAR_0, struct opts *VAR_1)
{
 char *VAR_2;

 if (VAR_1->argc != 1)
  FUNC_2("you need to specify a name", ((void*)0));

 VAR_2 = VAR_1->argv[0];

 FUNC_0(FUNC_1(VAR_0, VAR_2),
   "could not delete remote", VAR_2);

 return 0;
}
