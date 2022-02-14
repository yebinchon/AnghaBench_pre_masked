
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char*) ;
 int FUNC_8 (int **,int *,char*,int ,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(git_repository *VAR_1)
{
 git_reference *VAR_2, *VAR_3;
 git_buf VAR_4 = VAR_0;

 FUNC_4(&VAR_4, FUNC_9(VAR_1), "logs/refs/fakestash");

 FUNC_0(0, FUNC_5(FUNC_2(&VAR_4)));

 FUNC_1(FUNC_7(&VAR_2, VAR_1, "refs/heads/master"));
 FUNC_1(FUNC_8(&VAR_3, VAR_2, "refs/fakestash", 0, ((void*)0)));
 FUNC_6(VAR_2);

 FUNC_0(1, FUNC_5(FUNC_2(&VAR_4)));

 FUNC_3(&VAR_4);
 FUNC_6(VAR_3);
}
