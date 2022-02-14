
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pqueue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int*) ;
 int* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_pqueue VAR_1;
 int VAR_2, VAR_3, *VAR_4;
 static int VAR_5[] =
  { 6, 9, 8, 0, 5, 0, 7, 0, 4, 3, 0, 0, 0, 4, 0, 2, 0, 1, 0, 0, -1 };
 static int VAR_6[] =
  { 9, 8, 7, 6, 5, 4, 4, 3, 2, 1, -1 };

 FUNC_2(FUNC_4(&VAR_1, 0, 10, VAR_0));

 for (VAR_2 = 0, VAR_3 = 0; VAR_5[VAR_2] >= 0; ++VAR_2) {
  if (!VAR_5[VAR_2]) {
   FUNC_0((VAR_4 = FUNC_6(&VAR_1)) != ((void*)0));
   FUNC_1(VAR_6[VAR_3], *VAR_4);
   ++VAR_3;
  } else {
   FUNC_2(FUNC_5(&VAR_1, &VAR_5[VAR_2]));
  }
 }

 FUNC_1(0, FUNC_7(&VAR_1));
 FUNC_3(&VAR_1);
}
