
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*) ;

void FUNC_6(void)
{
 git_config *VAR_1;

 FUNC_3(&VAR_0, ((void*)0));
 FUNC_1("./testconfig", "[foo]\n    has_underscore = git2\n");
 FUNC_0(FUNC_5(&VAR_1, "./testconfig"));

 FUNC_2("./testconfig", "[foo]\n  has/slash = git2\n");
 FUNC_0(FUNC_5(&VAR_1, "./testconfig"));

 FUNC_2("./testconfig", "[foo]\n  has+plus = git2\n");
 FUNC_0(FUNC_5(&VAR_1, "./testconfig"));

 FUNC_2("./testconfig", "[no_key]\n  = git2\n");
 FUNC_0(FUNC_5(&VAR_1, "./testconfig"));

 FUNC_4(VAR_1);
}
