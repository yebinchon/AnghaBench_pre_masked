
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_blob ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,size_t) ;

void FUNC_8(void)
{
 int VAR_5;
 git_blob *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  size_t VAR_7 = (size_t)VAR_3[VAR_5];

  FUNC_2(FUNC_4(&VAR_6, VAR_4, &VAR_1[VAR_5]));

  FUNC_1(VAR_7, (size_t)FUNC_6(VAR_6));
  FUNC_0(
   0, FUNC_7(VAR_2[VAR_5], FUNC_5(VAR_6), VAR_7));

  FUNC_3(VAR_6);
 }
}
