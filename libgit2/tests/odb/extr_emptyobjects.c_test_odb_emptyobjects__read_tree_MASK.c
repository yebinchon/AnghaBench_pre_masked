
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;

void FUNC_9(void)
{
 git_oid VAR_2;
 git_tree *VAR_3;

 FUNC_2(FUNC_4(&VAR_2, "4b825dc642cb6eb9a060e54bf8d69288fbee4904"));
 FUNC_2(FUNC_8(&VAR_3, VAR_1, &VAR_2));
 FUNC_0(VAR_0, FUNC_3((git_object *) VAR_3));
 FUNC_0(0, FUNC_6(VAR_3));
 FUNC_1(((void*)0), FUNC_5(VAR_3, "foo"));
 FUNC_7(VAR_3);
}
