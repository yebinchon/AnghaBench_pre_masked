
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int *,int ,int *,int ,int ,int *,char*,int) ;
 int FUNC_6 (int **,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;

void FUNC_10(void)
{
 git_oid VAR_2, VAR_3;
 git_commit *VAR_4;
 git_note *VAR_5;

 FUNC_2(FUNC_9(&VAR_2, "4a202b346bb0fb0db7eff3cffeb3c70babbd2045"));

 FUNC_2(FUNC_5(&VAR_3, ((void*)0), VAR_0, ((void*)0), VAR_1, VAR_1, &VAR_2, "I decorate 4a20\n", 1));

 FUNC_4(&VAR_4, VAR_0, &VAR_3);

 FUNC_0(VAR_4);

 FUNC_2(FUNC_6(&VAR_5, VAR_0, VAR_4, &VAR_2));

 FUNC_1(FUNC_8(VAR_5), "I decorate 4a20\n");

 FUNC_3(VAR_4);
 FUNC_7(VAR_5);
}
