
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char,int *) ;
 char* VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1)
{
 if (!VAR_0 || !*VAR_0)
  return;

 FUNC_0(VAR_1, "-- \n%s", VAR_0);
 if (VAR_0[FUNC_2(VAR_0)-1] != '\n')
  FUNC_1('\n', VAR_1);
 FUNC_1('\n', VAR_1);
}
