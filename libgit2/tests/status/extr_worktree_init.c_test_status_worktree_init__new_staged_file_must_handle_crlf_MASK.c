
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int VAR_1 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int **,char*,int ) ;
 int FUNC_11 (unsigned int*,int *,char*) ;

void FUNC_12(void)
{
 git_repository *VAR_2;
 git_index *VAR_3;
 unsigned int VAR_4;

 FUNC_4(&VAR_1, "getting_started");
 FUNC_2(FUNC_10(&VAR_2, "getting_started", 0));


 FUNC_3(VAR_2, "core.autocrlf", 1);

 FUNC_1("getting_started/testfile.txt", "content\r\n");

 FUNC_2(FUNC_9(&VAR_3, VAR_2));
 FUNC_2(FUNC_5(VAR_3, "testfile.txt"));
 FUNC_2(FUNC_7(VAR_3));

 FUNC_2(FUNC_11(&VAR_4, VAR_2, "testfile.txt"));
 FUNC_0(VAR_0, VAR_4);

 FUNC_6(VAR_3);
 FUNC_8(VAR_2);
}
