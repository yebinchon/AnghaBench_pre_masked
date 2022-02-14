
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int **,int ,char*,char*,int,int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_2 ;

void FUNC_8(void)
{
 git_reference *VAR_3, *VAR_4, *VAR_5;

 FUNC_2(FUNC_6(&VAR_3, VAR_2, "refs/heads/linked", "refs/heads/master", 0, ((void*)0)));
 FUNC_2(FUNC_6(&VAR_4, VAR_2, "refs/heads/super", "refs/heads/linked", 0, ((void*)0)));
 FUNC_2(FUNC_6(&VAR_5, VAR_2, VAR_0, "refs/heads/super", 1, ((void*)0)));

 FUNC_0(0, FUNC_3(VAR_3));
 FUNC_0(0, FUNC_3(VAR_4));

 FUNC_2(FUNC_7(&VAR_1, VAR_2));
 FUNC_1("refs/heads/master", FUNC_5(VAR_1));

 FUNC_4(VAR_3);
 FUNC_4(VAR_4);
 FUNC_4(VAR_5);
}
