
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char*,char*) ;
 int FUNC_4 (int *,int ,char*,int ,int ,int *,char*,int ) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(void)
{
 int VAR_3;
 git_oid VAR_4, VAR_5;

 FUNC_2(FUNC_5(&VAR_5, "08b041783f40edfe12bb406c9c9a8a040177c125"));

 FUNC_3(&VAR_4, ((void*)0), "08b041783f40edfe12bb406c9c9a8a040177c125", "hello world\n");
 VAR_3 = FUNC_4(&VAR_4, VAR_1, ((void*)0), VAR_2, VAR_2, &VAR_5, "hello world\n", 0);
 FUNC_1(VAR_3);
 FUNC_0(VAR_0, VAR_3);

 FUNC_3(&VAR_4, "refs/notes/some/namespace", "08b041783f40edfe12bb406c9c9a8a040177c125", "hello world\n");
 VAR_3 = FUNC_4(&VAR_4, VAR_1, "refs/notes/some/namespace", VAR_2, VAR_2, &VAR_5, "hello world\n", 0);
 FUNC_1(VAR_3);
 FUNC_0(VAR_0, VAR_3);
}
