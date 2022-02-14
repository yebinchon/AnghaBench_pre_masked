
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,char*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ) ;

void FUNC_13(void)
{
 git_buf VAR_3 = VAR_0;
 git_buf VAR_4 = VAR_0;

 FUNC_1(FUNC_8(&VAR_4, ".", ((void*)0)));

 FUNC_1(FUNC_6(&VAR_3, FUNC_4(&VAR_4), "a/b/c"));
 FUNC_1(FUNC_7(FUNC_4(&VAR_3), VAR_1));


 FUNC_1(FUNC_0(FUNC_4(&VAR_3)));


 FUNC_1(FUNC_10(&VAR_2, "../d/e.git", 1));
 FUNC_1(FUNC_3(FUNC_12(VAR_2), "/a/b/d/e.git/"));

 FUNC_9(VAR_2);


 FUNC_1(FUNC_11(&VAR_2, "../d/e.git"));

 FUNC_1(FUNC_0(FUNC_4(&VAR_4)));

 FUNC_5(&VAR_4);
 FUNC_5(&VAR_3);

 FUNC_2("a");
}
