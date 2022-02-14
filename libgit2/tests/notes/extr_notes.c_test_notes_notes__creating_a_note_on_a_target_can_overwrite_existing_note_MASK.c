
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (int *,int ,char*,int ,int ,int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char*,int *) ;
 int FUNC_6 (int *,char*) ;

void FUNC_7(void)
{
 git_oid VAR_2, VAR_3;
 git_note *VAR_4, *VAR_5;

 FUNC_1(FUNC_6(&VAR_3, "08b041783f40edfe12bb406c9c9a8a040177c125"));

 FUNC_2(&VAR_2, ((void*)0), "08b041783f40edfe12bb406c9c9a8a040177c125", "hello old world\n");
 FUNC_1(FUNC_3(&VAR_2, VAR_0, ((void*)0), VAR_1, VAR_1, &VAR_3, "hello new world\n", 1));

 FUNC_1(FUNC_5(&VAR_4, VAR_0, ((void*)0), &VAR_3));
 FUNC_0(VAR_4, "hello new world\n", &VAR_2);

 FUNC_2(&VAR_2, "refs/notes/some/namespace", "08b041783f40edfe12bb406c9c9a8a040177c125", "hello old world\n");
 FUNC_1(FUNC_3(&VAR_2, VAR_0, "refs/notes/some/namespace", VAR_1, VAR_1, &VAR_3, "hello new ref world\n", 1));

 FUNC_1(FUNC_5(&VAR_5, VAR_0, "refs/notes/some/namespace", &VAR_3));
 FUNC_0(VAR_5, "hello new ref world\n", &VAR_2);

 FUNC_4(VAR_4);
 FUNC_4(VAR_5);
}
