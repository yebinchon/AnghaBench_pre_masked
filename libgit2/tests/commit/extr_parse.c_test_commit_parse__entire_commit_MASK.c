
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_commit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int * VAR_1 ;

void FUNC_9(void)
{
 const int VAR_2 = FUNC_0(VAR_0);
 const int VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 git_commit *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  FUNC_3(FUNC_8(&VAR_5, VAR_0[VAR_4]));
  FUNC_6(VAR_5);
 }

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  FUNC_4(FUNC_8(&VAR_5, VAR_1[VAR_4]));

  if (!VAR_4)
   FUNC_2("", FUNC_7(VAR_5));
  else
   FUNC_1(FUNC_5(
    FUNC_7(VAR_5), "a simple commit which works") == 0);

  FUNC_6(VAR_5);
 }
}
