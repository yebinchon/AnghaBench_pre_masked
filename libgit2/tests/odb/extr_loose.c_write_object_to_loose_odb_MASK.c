
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_odb ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int **,char*,int,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_1)
{
 git_odb *VAR_2;
 git_odb_backend *VAR_3;
 git_oid VAR_4;

 FUNC_0(FUNC_4(&VAR_2));
 FUNC_0(FUNC_2(&VAR_3, "test-objects", -1, VAR_1, 0777, 0666));
 FUNC_0(FUNC_1(VAR_2, VAR_3, 1));
 FUNC_0(FUNC_5(&VAR_4, VAR_2, "Test data\n", 10, VAR_0));
 FUNC_3(VAR_2);
}
