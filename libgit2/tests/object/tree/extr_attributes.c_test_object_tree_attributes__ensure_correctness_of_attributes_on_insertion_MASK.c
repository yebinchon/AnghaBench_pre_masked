
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_treebuilder ;
typedef int git_oid ;
typedef int git_filemode_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*,int *,int ) ;
 int FUNC_5 (int **,int ,int *) ;
 int VAR_1 ;

void FUNC_6(void)
{
 git_treebuilder *VAR_2;
 git_oid VAR_3;

 FUNC_1(FUNC_2(&VAR_3, VAR_0));

 FUNC_1(FUNC_5(&VAR_2, VAR_1, ((void*)0)));

 FUNC_0(FUNC_4(((void*)0), VAR_2, "one.txt", &VAR_3, (git_filemode_t)0777777));
 FUNC_0(FUNC_4(((void*)0), VAR_2, "one.txt", &VAR_3, (git_filemode_t)0100666));
 FUNC_0(FUNC_4(((void*)0), VAR_2, "one.txt", &VAR_3, (git_filemode_t)0000001));

 FUNC_3(VAR_2);
}
