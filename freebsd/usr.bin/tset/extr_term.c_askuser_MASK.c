
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int answer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_6 (char*,char) ;

const char *
FUNC_7(const char *VAR_2)
{
 static char VAR_3[256];
 char *VAR_4;


 if (FUNC_1(VAR_1) || FUNC_2(VAR_1)) {
  (void)FUNC_5(VAR_0, "\n");
  FUNC_0(1);
 }
 for (;;) {
  if (VAR_2)
   (void)FUNC_5(VAR_0, "Terminal type? [%s] ", VAR_2);
  else
   (void)FUNC_5(VAR_0, "Terminal type? ");
  (void)FUNC_3(VAR_0);

  if (FUNC_4(VAR_3, sizeof(VAR_3), VAR_1) == ((void*)0)) {
   if (VAR_2 == ((void*)0)) {
    (void)FUNC_5(VAR_0, "\n");
    FUNC_0(1);
   }
   return (VAR_2);
  }

  if ((VAR_4 = FUNC_6(VAR_3, '\n')))
   *VAR_4 = '\0';
  if (VAR_3[0])
   return (VAR_3);
  if (VAR_2 != ((void*)0))
   return (VAR_2);
 }
}
