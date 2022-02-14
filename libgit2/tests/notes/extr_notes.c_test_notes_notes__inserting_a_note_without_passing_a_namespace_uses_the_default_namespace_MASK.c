
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_note ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,char*,char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int *) ;
 int FUNC_8 (int *,char*) ;

void FUNC_9(void)
{
 git_oid VAR_2, VAR_3;
 git_note *VAR_4, *VAR_5;
 git_buf VAR_6 = VAR_0;

 FUNC_1(FUNC_8(&VAR_3, "08b041783f40edfe12bb406c9c9a8a040177c125"));
 FUNC_1(FUNC_5(&VAR_6, VAR_1));

 FUNC_2(&VAR_2, ((void*)0), "08b041783f40edfe12bb406c9c9a8a040177c125", "hello world\n");

 FUNC_1(FUNC_7(&VAR_4, VAR_1, ((void*)0), &VAR_3));
 FUNC_1(FUNC_7(&VAR_5, VAR_1, FUNC_3(&VAR_6), &VAR_3));

 FUNC_0(VAR_4, "hello world\n", &VAR_2);
 FUNC_0(VAR_5, "hello world\n", &VAR_2);

 FUNC_4(&VAR_6);
 FUNC_6(VAR_4);
 FUNC_6(VAR_5);
}
