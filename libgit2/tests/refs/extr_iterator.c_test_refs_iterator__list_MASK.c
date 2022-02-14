
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_reference_iterator ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_7(void)
{
 git_reference_iterator *VAR_4;
 git_vector VAR_5;
 git_reference *VAR_6;

 FUNC_1(FUNC_5(&VAR_5, 33, &VAR_1));
 FUNC_1(FUNC_3(&VAR_4, VAR_3));

 while (1) {
  int VAR_7 = FUNC_4(&VAR_6, VAR_4);
  if (VAR_7 == VAR_0)
   break;
  FUNC_1(VAR_7);
  FUNC_1(FUNC_6(&VAR_5, VAR_6));
 }

 FUNC_2(VAR_4);

 FUNC_0(VAR_2, &VAR_5);
}
