
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_6(void)
{
 git_oid VAR_4;
 char VAR_5[VAR_0 + 1];

 FUNC_0(FUNC_3(&VAR_4, VAR_2, "HEAD"));
 FUNC_1(VAR_5, &VAR_4);
 VAR_5[VAR_0] = '\0';

 FUNC_0(FUNC_5(&VAR_3, VAR_2, VAR_5));

 FUNC_0(FUNC_4(VAR_2, VAR_3, VAR_1, ((void*)0)));

 FUNC_0(FUNC_3(&VAR_4, VAR_2, "HEAD"));
 FUNC_0(FUNC_2(&VAR_4, VAR_5));
}
