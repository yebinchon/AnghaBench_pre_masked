
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ,int*) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int *,int ,char*,char*) ;

void FUNC_6(void)
{
 git_config *VAR_2;
 int VAR_3;

 FUNC_1(FUNC_4(&VAR_2, "config/config11"));

 VAR_3 = 0;
 FUNC_1(FUNC_3(VAR_2, VAR_0, ((void*)0), VAR_1, &VAR_3));
 FUNC_0(VAR_3 == 2);

 FUNC_1(FUNC_5(VAR_2, VAR_0, "github", "git://git.otherplace.org/libgit2"));

 VAR_3 = 0;
 FUNC_1(FUNC_3(VAR_2, VAR_0, ((void*)0), VAR_1, &VAR_3));
 FUNC_0(VAR_3 == 2);

 FUNC_2(VAR_2);

 FUNC_1(FUNC_4(&VAR_2, "config/config11"));

 VAR_3 = 0;
 FUNC_1(FUNC_3(VAR_2, VAR_0, ((void*)0), VAR_1, &VAR_3));
 FUNC_0(VAR_3 == 2);

 FUNC_2(VAR_2);
}
