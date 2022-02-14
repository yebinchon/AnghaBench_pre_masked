
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (unsigned int*,int ,char*) ;

void FUNC_9(void)
{
 unsigned int VAR_4;
 bool VAR_5;
 git_index *VAR_6;

 VAR_3 = FUNC_4("empty_standard_repo");
 FUNC_3("empty_standard_repo/.gitignore", "a.txt\n");

 FUNC_1("empty_standard_repo/A.txt", "Differs in case");

 FUNC_2(FUNC_7(&VAR_6, VAR_3));
 VAR_5 = (FUNC_5(VAR_6) & VAR_0) != 0;
 FUNC_6(VAR_6);

 FUNC_2(FUNC_8(&VAR_4, VAR_3, "A.txt"));
 FUNC_0(VAR_4 == VAR_5 ? VAR_1 : VAR_2);
}
