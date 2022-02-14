
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,unsigned int) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int VAR_1 ;

void FUNC_7(void)
{

 git_oid VAR_2;
 git_tree *VAR_3;

 FUNC_2(&VAR_2, VAR_1);

 FUNC_1(FUNC_6(&VAR_3, VAR_0, &VAR_2));

 FUNC_0(FUNC_4(VAR_3, "README") != ((void*)0));
 FUNC_0(FUNC_4(VAR_3, "NOTEXISTS") == ((void*)0));
 FUNC_0(FUNC_4(VAR_3, "") == ((void*)0));
 FUNC_0(FUNC_3(VAR_3, 0) != ((void*)0));
 FUNC_0(FUNC_3(VAR_3, 2) != ((void*)0));
 FUNC_0(FUNC_3(VAR_3, 3) == ((void*)0));
 FUNC_0(FUNC_3(VAR_3, (unsigned int)-1) == ((void*)0));

 FUNC_5(VAR_3);
}
