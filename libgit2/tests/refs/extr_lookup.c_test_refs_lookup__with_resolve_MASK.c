
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int **,int ,char*,int) ;
 int FUNC_6 (int **,int *) ;

void FUNC_7(void)
{
 git_reference *VAR_1, *VAR_2, *VAR_3;

 FUNC_1(FUNC_4(&VAR_3, VAR_0, "HEAD"));
 FUNC_1(FUNC_6(&VAR_1, VAR_3));
 FUNC_3(VAR_3);

 FUNC_1(FUNC_5(&VAR_2, VAR_0, "HEAD", 5));
 FUNC_0(FUNC_2(VAR_1, VAR_2) == 0);
 FUNC_3(VAR_2);

 FUNC_1(FUNC_5(&VAR_2, VAR_0, "HEAD_TRACKER", 5));
 FUNC_0(FUNC_2(VAR_1, VAR_2) == 0);
 FUNC_3(VAR_2);

 FUNC_3(VAR_1);
}
