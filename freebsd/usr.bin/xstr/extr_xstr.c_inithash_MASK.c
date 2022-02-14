
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
 char VAR_4[VAR_0];
 FILE *VAR_5 = FUNC_2(VAR_2, "r");

 if (VAR_5 == ((void*)0))
  return;
 for (;;) {
  VAR_1 = VAR_3;
  if (FUNC_1(VAR_4, sizeof VAR_4, VAR_5) == 0)
   break;
  FUNC_4(FUNC_3(VAR_4, 0));
 }
 FUNC_4(FUNC_0(VAR_5));
}
