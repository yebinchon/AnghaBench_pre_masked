
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (int **,int ,char*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_9 (int *,int) ;

void FUNC_10(void)
{
 git_index *VAR_3;
 int VAR_4;



 for (VAR_4 = 1; VAR_4 < 8; VAR_4++) {
  FUNC_1(FUNC_6(&VAR_3, VAR_1));

  FUNC_9(VAR_3, VAR_4);
  FUNC_1(FUNC_3(VAR_3));

  FUNC_1(FUNC_8(&VAR_2, VAR_1, "26a125e"));
  FUNC_1(FUNC_7(VAR_1, VAR_2, VAR_0, ((void*)0)));

  FUNC_0(FUNC_5("status/conflicting_file") == 0);

  FUNC_4(VAR_2);
  VAR_2 = ((void*)0);

  FUNC_2(VAR_3);
 }
}
