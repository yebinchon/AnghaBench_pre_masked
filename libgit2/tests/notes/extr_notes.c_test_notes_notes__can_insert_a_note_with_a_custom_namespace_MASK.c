
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*,int *) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(void)
{
 git_oid VAR_1, VAR_2;
 git_note *VAR_3;

 FUNC_1(FUNC_5(&VAR_2, "08b041783f40edfe12bb406c9c9a8a040177c125"));

 FUNC_2(&VAR_1, "refs/notes/some/namespace", "08b041783f40edfe12bb406c9c9a8a040177c125", "hello world on a custom namespace\n");

 FUNC_1(FUNC_4(&VAR_3, VAR_0, "refs/notes/some/namespace", &VAR_2));

 FUNC_0(VAR_3, "hello world on a custom namespace\n", &VAR_1);

 FUNC_3(VAR_3);
}
