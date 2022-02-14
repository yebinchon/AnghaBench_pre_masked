
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_odb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *,char*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*,int) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int **,char*) ;
 scalar_t__ VAR_1 ;

void FUNC_8(void)
{
 git_repository *VAR_2;
 git_odb *VAR_3;
 git_oid VAR_4;

 FUNC_1(FUNC_5(&VAR_2, "test-objects", 1));
 FUNC_1(FUNC_6(&VAR_3, VAR_2));
 FUNC_1(FUNC_3(&VAR_4, VAR_3, "No fsync here\n", 14, VAR_0));
 FUNC_0(VAR_1 == 0);
 FUNC_4(VAR_2);

 FUNC_1(FUNC_7(&VAR_2, "test-objects"));
 FUNC_2(VAR_2, "core.fsyncObjectFiles", 1);
 FUNC_1(FUNC_6(&VAR_3, VAR_2));
 FUNC_1(FUNC_3(&VAR_4, VAR_3, "Now fsync\n", 10, VAR_0));
 FUNC_0(VAR_1 > 0);
 FUNC_4(VAR_2);
}
