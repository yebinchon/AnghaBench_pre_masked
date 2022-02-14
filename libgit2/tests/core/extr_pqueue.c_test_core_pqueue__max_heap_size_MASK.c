
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pqueue ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_pqueue VAR_2;
 int VAR_3, VAR_4[100];

 FUNC_2(FUNC_4(&VAR_2, VAR_0, 50, VAR_1));

 for (VAR_3 = 0; VAR_3 < 100; ++VAR_3) {
  VAR_4[VAR_3] = (VAR_3 & 1) ? 100 - VAR_3 : VAR_3;
  FUNC_2(FUNC_5(&VAR_2, &VAR_4[VAR_3]));
 }

 FUNC_1(50, FUNC_7(&VAR_2));

 for (VAR_3 = 50; VAR_3 < 100; ++VAR_3) {
  void *VAR_5 = FUNC_6(&VAR_2);
  FUNC_0(VAR_5);
  FUNC_1(VAR_3, *(int *)VAR_5);
 }

 FUNC_1(0, FUNC_7(&VAR_2));

 FUNC_3(&VAR_2);
}
