
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_pool ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;

void FUNC_5(void)
{
 int VAR_0;
 git_pool VAR_1;
 void *VAR_2;

 FUNC_3(&VAR_1, 1);

 for (VAR_0 = 1; VAR_0 < 10000; VAR_0 *= 2) {
  VAR_2 = FUNC_4(&VAR_1, VAR_0);
  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(FUNC_1(&VAR_1, VAR_2));
  FUNC_0(!FUNC_1(&VAR_1, &VAR_0));
 }

 FUNC_2(&VAR_1);
}
