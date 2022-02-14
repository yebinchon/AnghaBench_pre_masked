
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (int ,char const*,int *,int *,int *) ;

void FUNC_11(void)
{
 git_reference *VAR_3;
 const char *VAR_4 = "refs/heads/new-branch";
 git_oid VAR_5;

 FUNC_1(VAR_0, FUNC_6(&VAR_3, VAR_1, VAR_4));

 FUNC_2(FUNC_9(VAR_2, VAR_4));

 FUNC_4(&VAR_5, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_2(FUNC_10(VAR_2, VAR_4, &VAR_5, ((void*)0), ((void*)0)));
 FUNC_2(FUNC_8(VAR_2));

 FUNC_2(FUNC_6(&VAR_3, VAR_1, VAR_4));
 FUNC_0(!FUNC_3(&VAR_5, FUNC_7(VAR_3)));
 FUNC_5(VAR_3);
}
