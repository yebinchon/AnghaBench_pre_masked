
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void FUNC_5(git_repository *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 const char *VAR_6 = ((void*)0);
 git_reference *VAR_7 = ((void*)0);

 VAR_5 = FUNC_3(&VAR_7, VAR_3);

 if (VAR_5 == VAR_2 || VAR_5 == VAR_1)
  VAR_6 = ((void*)0);
 else if (!VAR_5) {
  VAR_6 = FUNC_2(VAR_7);
 } else
  FUNC_0(VAR_5, "failed to get current branch", ((void*)0));

 if (VAR_4 == VAR_0)
  FUNC_4("# On branch %s\n",
   VAR_6 ? VAR_6 : "Not currently on any branch.");
 else
  FUNC_4("## %s\n", VAR_6 ? VAR_6 : "HEAD (no branch)");

 FUNC_1(VAR_7);
}
