
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_thread ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int * VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *,int* (*) (int*),int*) ;
 int FUNC_8 (int *,void**) ;

void FUNC_9(void)
{
 int VAR_3, VAR_4, VAR_5[VAR_1*2];




 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_4(FUNC_6(&VAR_2, FUNC_3("testrepo.git")));

  for (VAR_4 = 0; VAR_4 < VAR_1*2; ++VAR_4) {
   VAR_5[VAR_4] = VAR_4;




   FUNC_1(FUNC_0(&VAR_5[VAR_4]) == &VAR_5[VAR_4]);

  }
  FUNC_5(VAR_2);
  VAR_2 = ((void*)0);
 }
}
