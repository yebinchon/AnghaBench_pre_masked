
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_index ;


 int FUNC_0 (int ,char*,char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(void)
{
 git_index *VAR_1;
 git_tree *VAR_2;

 VAR_0 = FUNC_2("testrepo");


 FUNC_1(FUNC_6(&VAR_2, VAR_0));
 FUNC_1(FUNC_7(&VAR_1, VAR_0));
 FUNC_1(FUNC_4(VAR_1, VAR_2));
 FUNC_1(FUNC_5(VAR_1));
 FUNC_8(VAR_2);
 FUNC_3(VAR_1);


 FUNC_0(VAR_0, "B", "C", 0, 0);
 FUNC_0(VAR_0, "B", "C", 1, 1);
 FUNC_0(VAR_0, "a", "z", 0, 3);
 FUNC_0(VAR_0, "a", "z", 1, 4);
}
