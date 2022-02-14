
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int **,int **,int ,char*) ;

void FUNC_7(void)
{
 git_object *VAR_3;
 git_reference *VAR_4;

 VAR_2 = FUNC_1("testrepo");
 FUNC_0(FUNC_6(&VAR_3, &VAR_4, VAR_2, "HEAD"));
 FUNC_0(FUNC_5(VAR_2, VAR_3, VAR_0, ((void*)0)));
 FUNC_0(FUNC_4(&VAR_1, VAR_2));

 FUNC_3(VAR_4);
 FUNC_2(VAR_3);
}
