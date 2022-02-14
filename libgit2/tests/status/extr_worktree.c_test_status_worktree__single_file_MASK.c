
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 unsigned int* VAR_2 ;
 int FUNC_3 (unsigned int*,int *,int ) ;

void FUNC_4(void)
{
 int VAR_3;
 unsigned int VAR_4;
 git_repository *VAR_5 = FUNC_2("status");

 for (VAR_3 = 0; VAR_3 < (int)VAR_0; VAR_3++) {
  FUNC_1(
   FUNC_3(&VAR_4, VAR_5, VAR_1[VAR_3])
  );
  FUNC_0(VAR_2[VAR_3] == VAR_4);
 }
}
