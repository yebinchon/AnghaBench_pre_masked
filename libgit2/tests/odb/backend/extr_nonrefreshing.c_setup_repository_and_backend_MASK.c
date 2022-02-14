
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_odb_backend ;
typedef int git_odb ;
typedef int fake_backend ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int **,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 git_odb *VAR_3 = ((void*)0);
 git_odb_backend *VAR_4 = ((void*)0);

 VAR_2 = FUNC_2("testrepo.git");

 FUNC_1(FUNC_0(&VAR_4, VAR_1));

 FUNC_1(FUNC_4(&VAR_3, VAR_2));
 FUNC_1(FUNC_3(VAR_3, VAR_4, 10));

 VAR_0 = (fake_backend *)VAR_4;
}
