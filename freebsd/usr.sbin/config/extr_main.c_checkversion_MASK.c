
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(void)
{
 FILE *VAR_3;
 char VAR_4[VAR_0];

 VAR_3 = FUNC_5();
 while (FUNC_4(VAR_4, VAR_0, VAR_3) != 0) {
  if (*VAR_4 != '%')
   continue;
  if (FUNC_6(VAR_4, "%VERSREQ=", 9) != 0)
   continue;
  VAR_2 = FUNC_1(VAR_4 + 9);
  if (FUNC_0(VAR_2) == FUNC_0(VAR_1) &&
      VAR_2 <= VAR_1)
   continue;
  FUNC_2();
 }
 FUNC_3(VAR_3);
}
