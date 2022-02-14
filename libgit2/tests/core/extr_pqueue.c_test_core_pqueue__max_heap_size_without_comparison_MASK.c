
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pqueue ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_pqueue VAR_1;
 int VAR_2, VAR_3[100] = { 0 };

 FUNC_2(FUNC_4(&VAR_1, VAR_0, 50, ((void*)0)));

 for (VAR_2 = 0; VAR_2 < 100; ++VAR_2)
  FUNC_2(FUNC_5(&VAR_1, &VAR_3[VAR_2]));

 FUNC_1(50, FUNC_7(&VAR_1));




 for (VAR_2 = 0; VAR_2 < 50; ++VAR_2)
  FUNC_0(FUNC_6(&VAR_1));

 FUNC_1(0, FUNC_7(&VAR_1));

 FUNC_3(&VAR_1);
}
