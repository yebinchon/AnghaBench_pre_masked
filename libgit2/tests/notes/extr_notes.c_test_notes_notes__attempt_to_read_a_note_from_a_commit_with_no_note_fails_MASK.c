
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int *,int ,int *,int ,int ,int *,char*,int) ;
 int FUNC_6 (int **,int ,int *,int *) ;
 int FUNC_7 (int *,int ,int *,int ,int ,int *) ;
 int FUNC_8 (int *,char*) ;

void FUNC_9(void)
{
 git_oid VAR_3, VAR_4;
 git_commit *VAR_5;
 git_note *VAR_6;

 FUNC_2(FUNC_8(&VAR_3, "4a202b346bb0fb0db7eff3cffeb3c70babbd2045"));

 FUNC_2(FUNC_5(&VAR_4, ((void*)0), VAR_1, ((void*)0), VAR_2, VAR_2, &VAR_3, "I decorate 4a20\n", 1));

 FUNC_4(&VAR_5, VAR_1, &VAR_4);

 FUNC_2(FUNC_7(&VAR_4, VAR_1, VAR_5, VAR_2, VAR_2, &VAR_3));
 FUNC_3(VAR_5);

 FUNC_4(&VAR_5, VAR_1, &VAR_4);

 FUNC_0(VAR_5);

 FUNC_1(VAR_0, FUNC_6(&VAR_6, VAR_1, VAR_5, &VAR_3));

 FUNC_3(VAR_5);
}
