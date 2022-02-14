
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
 int VAR_2, VAR_3, VAR_4, VAR_5[200];

 FUNC_2(FUNC_4(&VAR_1, 0, 20, VAR_0));

 for (VAR_3 = 0, VAR_2 = 20; VAR_2 <= 200; VAR_2 += 20) {

  for (; VAR_3 < VAR_2; ++VAR_3) {
   VAR_5[VAR_3] = (VAR_3 & 1) ? 200 - VAR_3 : VAR_3;
   FUNC_2(FUNC_5(&VAR_1, &VAR_5[VAR_3]));
  }


  for (VAR_4 = 0; VAR_4 < 10; ++VAR_4)
   (void)FUNC_6(&VAR_1);
 }

 FUNC_1(100, FUNC_7(&VAR_1));



 for (VAR_3 = 100; VAR_3 < 200; ++VAR_3) {
  void *VAR_6 = FUNC_6(&VAR_1);
  FUNC_0(VAR_6);
  FUNC_1(VAR_3, *(int *)VAR_6);
 }

 FUNC_1(0, FUNC_7(&VAR_1));

 FUNC_3(&VAR_1);
}
