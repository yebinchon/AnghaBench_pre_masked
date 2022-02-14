
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {char* tag; int message; scalar_t__ failed; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct shared_info* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct shared_info*,char*,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct shared_info*,char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct shared_info* FUNC_11 (int *,int ,int,int,int,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int *) ;

int
FUNC_15(void)
{
 struct shared_info *VAR_7;
 pid_t VAR_8;
 int VAR_9, VAR_10, VAR_11;

 FUNC_13("1..15\n");


 VAR_11 = FUNC_4();
 if (VAR_11 == -1)
  FUNC_6("open", "bad descriptor %d", VAR_11);
 FUNC_12("open");


 VAR_9 = FUNC_10();
 if (VAR_11 != VAR_9)
  FUNC_6("highest_fd", "bad descriptor %d != %d", VAR_11, VAR_9);
 FUNC_12("highest_fd");


 FUNC_2(VAR_11 + 1);
 VAR_9 = FUNC_10();
 if (VAR_9 != VAR_11)
  FUNC_6("closefrom", "highest fd %d", VAR_9);
 FUNC_12("closefrom");


 for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
  (void)FUNC_4();
 VAR_9 = FUNC_10();
 if (VAR_9 != VAR_11 + 16)
  FUNC_6("open 16", "highest fd %d", VAR_9);
 FUNC_12("open 16");


 FUNC_2(11);
 VAR_9 = FUNC_10();
 if (VAR_9 != 10)
  FUNC_6("closefrom", "highest fd %d", VAR_9);
 FUNC_12("closefrom");


 if (FUNC_1(6) < 0 || FUNC_1(8) < 0)
  FUNC_7("close2 ");
 FUNC_12("close 2");


 if (FUNC_1(6) == 0)
  FUNC_6("close(6)", "did not fail");
 if (VAR_6 != VAR_0)
  FUNC_7("close(6)");
 FUNC_12("close(6)");
 if (FUNC_1(8) == 0)
  FUNC_6("close(8)", "did not fail");
 if (VAR_6 != VAR_0)
  FUNC_7("close(8)");
 FUNC_12("close(8)");


 FUNC_2(4);
 VAR_9 = FUNC_10();
 if (VAR_9 != 3)
  FUNC_6("closefrom", "highest fd %d", VAR_9);
 FUNC_12("closefrom");


 VAR_7 = FUNC_11(((void*)0), FUNC_9(), VAR_4 | VAR_5, VAR_1 |
     VAR_3, -1, 0);
 if (VAR_7 == VAR_2)
  FUNC_7("mmap");
 FUNC_12("mmap");


 VAR_8 = FUNC_8();
 if (VAR_8 < 0)
  FUNC_7("fork");
 if (VAR_8 == 0) {

  FUNC_2(0);
  VAR_9 = FUNC_10();
  if (VAR_9 >= 0)
   FUNC_0(VAR_7, "closefrom(0)", "highest fd %d", VAR_9);
  FUNC_3(VAR_7, "closefrom(0)");
 }
 if (FUNC_14(((void*)0)) < 0)
  FUNC_7("wait");
 if (VAR_7->failed)
  FUNC_6(VAR_7->tag, "%s", VAR_7->message);
 FUNC_12(VAR_7->tag);


 VAR_8 = FUNC_8();
 if (VAR_8 < 0)
  FUNC_7("fork");
 if (VAR_8 == 0) {

  FUNC_2(-1);
  VAR_9 = FUNC_10();
  if (VAR_9 >= 0)
   FUNC_0(VAR_7, "closefrom(-1)", "highest fd %d", VAR_9);
  FUNC_3(VAR_7, "closefrom(-1)");
 }
 if (FUNC_14(((void*)0)) < 0)
  FUNC_7("wait");
 if (VAR_7->failed)
  FUNC_6(VAR_7->tag, "%s", VAR_7->message);
 FUNC_12(VAR_7->tag);


 if (FUNC_5(1, 6) < 0)
  FUNC_7("dup2");
 VAR_9 = FUNC_10();
 if (VAR_9 != 6)
  FUNC_6("dup2", "highest fd %d", VAR_9);
 FUNC_12("dup2");


 FUNC_2(4);
 VAR_9 = FUNC_10();
 if (VAR_9 != 3)
  FUNC_6("closefrom", "highest fd %d", VAR_9);
 FUNC_12("closefrom");


 FUNC_2(32);
 VAR_9 = FUNC_10();
 if (VAR_9 != 3)
  FUNC_6("closefrom", "highest fd %d", VAR_9);
 FUNC_12("closefrom");

 return (0);
}
