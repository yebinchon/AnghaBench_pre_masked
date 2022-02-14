
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*,int *,int ,int *) ;
 int VAR_1 ;

void FUNC_4(void)
{
 git_oid VAR_2;

 VAR_1 = FUNC_1("testrepo.git");

 FUNC_0(FUNC_2(&VAR_2, "be3563ae3f795b2b4353bcce3a527ad0a4f7f644"));
 FUNC_0(FUNC_3(&VAR_0, VAR_1, "refs/remotes/nulltoken/master", &VAR_2, 0, ((void*)0)));
}
