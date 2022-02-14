
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_branch_t ;
typedef int git_branch_iterator ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,unsigned int) ;
 int FUNC_4 (int **,int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_2, unsigned int VAR_3)
{
 git_branch_iterator *VAR_4;
 git_reference *VAR_5;
 int VAR_6 = 0, VAR_7;
 git_branch_t VAR_8;

 FUNC_1(FUNC_3(&VAR_4, VAR_1, VAR_2));
 while ((VAR_7 = FUNC_4(&VAR_5, &VAR_8, VAR_4)) == 0) {
  VAR_6++;
  FUNC_5(VAR_5);
 }

 FUNC_2(VAR_4);
 FUNC_0(VAR_7, VAR_0);
 FUNC_0(VAR_3, VAR_6);
}
