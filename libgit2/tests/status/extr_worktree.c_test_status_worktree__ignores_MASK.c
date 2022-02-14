
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (int*,int *,char*) ;

void FUNC_4(void)
{
 int VAR_4, VAR_5;
 git_repository *VAR_6 = FUNC_2("status");

 for (VAR_4 = 0; VAR_4 < (int)VAR_1; VAR_4++) {
  FUNC_1(
   FUNC_3(&VAR_5, VAR_6, VAR_2[VAR_4])
  );
  FUNC_0(VAR_5 == (VAR_3[VAR_4] == VAR_0));
 }

 FUNC_1(
  FUNC_3(&VAR_5, VAR_6, "nonexistent_file")
 );
 FUNC_0(!VAR_5);

 FUNC_1(
  FUNC_3(&VAR_5, VAR_6, "ignored_nonexistent_file")
 );
 FUNC_0(VAR_5);
}
