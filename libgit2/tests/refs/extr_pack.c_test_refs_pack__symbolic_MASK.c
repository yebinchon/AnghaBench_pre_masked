
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,int ,char*,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int **,int ,char*,char*,int ,int *) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 () ;

void FUNC_7(void)
{

 int VAR_1;
 git_oid VAR_2;
 git_reference *VAR_3;
 char VAR_4[128];

 FUNC_0(FUNC_3(&VAR_2, VAR_0, "HEAD"));



 for (VAR_1 = 0; VAR_1 < 100; ++VAR_1) {
  FUNC_5(VAR_4, sizeof(VAR_4), "refs/heads/symbolic-%03d", VAR_1);
  FUNC_0(FUNC_4(
   &VAR_3, VAR_0, VAR_4, "refs/heads/master", 0, ((void*)0)));
  FUNC_2(VAR_3);

  FUNC_5(VAR_4, sizeof(VAR_4), "refs/heads/direct-%03d", VAR_1);
  FUNC_0(FUNC_1(&VAR_3, VAR_0, VAR_4, &VAR_2, 0, ((void*)0)));
  FUNC_2(VAR_3);
 }

 FUNC_6();
}
