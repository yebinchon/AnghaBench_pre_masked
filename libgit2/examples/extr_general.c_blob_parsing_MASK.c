
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_blob ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(git_repository *VAR_0)
{
 git_blob *VAR_1;
 git_oid VAR_2;

 FUNC_5("\n*Blob Parsing*\n");

 FUNC_4(&VAR_2, "1385f264afb75a56a5bec74243be9b367ba4ca08");
 FUNC_1(&VAR_1, VAR_0, &VAR_2);
 FUNC_5("Blob Size: %ld\n", (long)FUNC_3(VAR_1));
 FUNC_2(VAR_1);




 FUNC_0(VAR_1);
}
