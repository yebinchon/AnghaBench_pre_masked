
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (int*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,char*,int) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int,char*,int) ;

int
FUNC_12(void)
{

 char VAR_5[VAR_0];
 int VAR_6, VAR_7, VAR_8[2];

 if (FUNC_7(VAR_8) < 0)
  FUNC_2(1, "pipe failed");

 VAR_7 = FUNC_4(VAR_8[1], VAR_1);
 if (VAR_7 == -1 || FUNC_4(VAR_8[1], VAR_2, VAR_7|VAR_3) == -1) {
  FUNC_8("fcntl failed: %s\n", FUNC_10(VAR_4));
  FUNC_3(1);
 }

 switch (FUNC_5()) {
 case -1:
  FUNC_1(1, "fork failed: %s\n", FUNC_10(VAR_4));
  break;
 case 0:
  FUNC_0(VAR_8[1]);
  for (;;) {

   VAR_6 = FUNC_9(VAR_8[0], VAR_5, 256);
   if (VAR_6 == 0)
    break;
   if (VAR_6 < 0)
    FUNC_1(1, "read");
  }
  FUNC_3(0);
 default:
  break;
 }

 FUNC_0(VAR_8[0]);
 FUNC_6(VAR_5, 0, sizeof VAR_5);
 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++)
  FUNC_11(VAR_8[1], VAR_5, sizeof VAR_5);

 FUNC_8("ok\n");
 FUNC_3(0);
}
