
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_vector VAR_1 = VAR_0;
 size_t VAR_2;

 void *VAR_3[] = {(void *) 0x0, (void *) 0x1, (void *) 0x2, (void *) 0x3};
 void *VAR_4[] = {(void *) 0x3, (void *) 0x2, (void *) 0x1, (void *) 0x0};

 void *VAR_5[] = {(void *) 0x0, (void *) 0x1, (void *) 0x2, (void *) 0x3, (void *) 0x4};
 void *VAR_6[] = {(void *) 0x4, (void *) 0x3, (void *) 0x2, (void *) 0x1, (void *) 0x0};

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  FUNC_1(FUNC_5(&VAR_1, VAR_3[VAR_2]));

 FUNC_6(&VAR_1);

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  FUNC_0(VAR_4[VAR_2], FUNC_4(&VAR_1, VAR_2));

 FUNC_2(&VAR_1);
 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  FUNC_1(FUNC_5(&VAR_1, VAR_5[VAR_2]));

 FUNC_6(&VAR_1);

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  FUNC_0(VAR_6[VAR_2], FUNC_4(&VAR_1, VAR_2));

 FUNC_3(&VAR_1);
}
