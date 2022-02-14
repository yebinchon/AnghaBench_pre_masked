
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int st ;
struct TYPE_2__ {scalar_t__ klass; int message; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stat) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct stat*,int ,int) ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (int ,char*) ;

void FUNC_12(void)
{
 char *VAR_3;

 FUNC_4();
 FUNC_2(FUNC_5() == ((void*)0));

 FUNC_7();

 FUNC_2(FUNC_5() != ((void*)0));
 FUNC_2(FUNC_5()->klass == VAR_0);
 VAR_3 = FUNC_11(FUNC_5()->message, "memory");
 FUNC_2(VAR_3 != ((void*)0));

 FUNC_4();

 FUNC_6(VAR_2, "This is a test");

 FUNC_2(FUNC_5() != ((void*)0));
 VAR_3 = FUNC_11(FUNC_5()->message, "This is a test");
 FUNC_2(VAR_3 != ((void*)0));

 FUNC_4();
 FUNC_2(FUNC_5() == ((void*)0));

 do {
  struct stat VAR_4;
  FUNC_8(&VAR_4, 0, sizeof(VAR_4));
  FUNC_2(FUNC_9("this_file_does_not_exist", &VAR_4) < 0);
  FUNC_0(VAR_4);
 } while (0);
 FUNC_6(VAR_1, "stat failed");

 FUNC_2(FUNC_5() != ((void*)0));
 VAR_3 = FUNC_11(FUNC_5()->message, "stat failed");
 FUNC_2(VAR_3 != ((void*)0));
 FUNC_2(FUNC_3(VAR_3, "stat failed: ") == 0);
 FUNC_2(FUNC_10(VAR_3) > FUNC_10("stat failed: "));
 FUNC_4();
}
