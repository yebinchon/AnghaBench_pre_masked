
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int,char*) ;
 int * VAR_2 ;
 int FUNC_7 () ;
 char* VAR_3 ;
 int FUNC_8 (int*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_4, const char *VAR_5)
{
 int VAR_6[2];

 VAR_3 = (VAR_4 == ((void*)0)) ? "<stdin>" : VAR_4;
 (void) FUNC_8(VAR_6);
 switch (VAR_1 = FUNC_7()) {
 case 0:
  FUNC_9();
  FUNC_0(VAR_5);
  if (VAR_4)
   FUNC_0(VAR_4);
  FUNC_0((char *)((void*)0));
  (void) FUNC_1(1);
  (void) FUNC_3(VAR_6[1], 1);
  (void) FUNC_1(VAR_6[0]);
  FUNC_5(VAR_0[0], VAR_0);
  FUNC_4(1, "execvp %s", VAR_0[0]);
 case -1:
  FUNC_4(1, "fork");
 }
 (void) FUNC_1(VAR_6[1]);
 VAR_2 = FUNC_6(VAR_6[0], "r");
 if (VAR_2 == ((void*)0)) {
  FUNC_10("%s", VAR_3);
  FUNC_2();
 }
}
