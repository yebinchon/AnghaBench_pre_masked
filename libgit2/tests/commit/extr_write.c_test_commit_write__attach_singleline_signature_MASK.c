
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,char const*,char const*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (int **,int ) ;

void FUNC_8(void)
{
 const char *VAR_1 = "magic word: pretty please";

 const char *VAR_2 = "tree 4b825dc642cb6eb9a060e54bf8d69288fbee4904\nparent 8496071c1b46c854b31185ea97743be6a8774479\nauthor Ben Burkert <ben@benburkert.com> 1358451456 -0800\ncommitter Ben Burkert <ben@benburkert.com> 1358451456 -0800\n\na simple commit which works\n";






 const char *VAR_3 = "tree 4b825dc642cb6eb9a060e54bf8d69288fbee4904\nparent 8496071c1b46c854b31185ea97743be6a8774479\nauthor Ben Burkert <ben@benburkert.com> 1358451456 -0800\ncommitter Ben Burkert <ben@benburkert.com> 1358451456 -0800\nmagicsig magic word: pretty please\n\na simple commit which works\n";







 git_oid VAR_4;
 git_odb *VAR_5;
 git_odb_object *VAR_6;

 FUNC_1(FUNC_2(&VAR_4, VAR_0, VAR_2, VAR_1, "magicsig"));

 FUNC_1(FUNC_7(&VAR_5, VAR_0));
 FUNC_1(FUNC_6(&VAR_6, VAR_5, &VAR_4));
 FUNC_0(VAR_3, FUNC_4(VAR_6));

 FUNC_5(VAR_6);
 FUNC_3(VAR_5);
}
