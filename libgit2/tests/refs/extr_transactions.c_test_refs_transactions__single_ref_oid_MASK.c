
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,int *,int *,int *) ;

void FUNC_10(void)
{
 git_reference *VAR_2;
 git_oid VAR_3;

 FUNC_3(&VAR_3, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");

 FUNC_1(FUNC_8(VAR_1, "refs/heads/master"));
 FUNC_1(FUNC_9(VAR_1, "refs/heads/master", &VAR_3, ((void*)0), ((void*)0)));
 FUNC_1(FUNC_7(VAR_1));

 FUNC_1(FUNC_5(&VAR_2, VAR_0, "refs/heads/master"));

 FUNC_0(!FUNC_2(&VAR_3, FUNC_6(VAR_2)));
 FUNC_4(VAR_2);
}
