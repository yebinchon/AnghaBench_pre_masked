
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pqueue ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_pqueue VAR_1;
 int VAR_2, VAR_3[20];

 FUNC_2(FUNC_4(&VAR_1, 0, 20, VAR_0));

 for (VAR_2 = 0; VAR_2 < 20; ++VAR_2) {
  if (VAR_2 < 10)
   VAR_3[VAR_2] = 10 - VAR_2;
  else
   VAR_3[VAR_2] = VAR_2 + 1;

  FUNC_2(FUNC_5(&VAR_1, &VAR_3[VAR_2]));
 }

 FUNC_1(20, FUNC_7(&VAR_1));

 for (VAR_2 = 1; VAR_2 <= 20; ++VAR_2) {
  void *VAR_4 = FUNC_6(&VAR_1);
  FUNC_0(VAR_4);
  FUNC_1(VAR_2, *(int *)VAR_4);
 }

 FUNC_1(0, FUNC_7(&VAR_1));

 FUNC_3(&VAR_1);
}
