
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int buf ;
struct TYPE_2__ {char* pw_name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,char*,char*,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,char*,int) ;

void
FUNC_16(FILE *VAR_6)
{
 struct stat VAR_7;
 int VAR_8, VAR_9[2], VAR_10;
 char VAR_11[1024];

 if (!VAR_3)
  return;

 FUNC_10(VAR_6);
 if (FUNC_7(FUNC_5(VAR_6), &VAR_7) || !VAR_7.st_size)
  goto done;
 if (FUNC_8(VAR_9) < 0)
  goto done;
 switch (FUNC_6()) {
 case -1:
  (void)FUNC_1(VAR_9[0]);
  (void)FUNC_1(VAR_9[1]);
  goto done;
 case 0:

  if (VAR_9[0] != VAR_0) {
   (void)FUNC_2(VAR_9[0], VAR_0);
   (void)FUNC_1(VAR_9[0]);
  }
  (void)FUNC_1(VAR_9[1]);
  FUNC_3(VAR_1, "sendmail", "-i", "-t", "-F",
      "\"Reminder Service\"", (char *)((void*)0));
  FUNC_14(VAR_1);
  FUNC_0(1);
 }

 (void)FUNC_1(VAR_9[0]);

 FUNC_15(VAR_9[1], "From: \"Reminder Service\" <", 26);
 FUNC_15(VAR_9[1], VAR_5->pw_name, FUNC_11(VAR_5->pw_name));
 FUNC_15(VAR_9[1], ">\nTo: <", 7);
 FUNC_15(VAR_9[1], VAR_5->pw_name, FUNC_11(VAR_5->pw_name));
 FUNC_15(VAR_9[1], ">\nSubject: ", 11);
 FUNC_15(VAR_9[1], VAR_2, FUNC_11(VAR_2));
 FUNC_15(VAR_9[1], "'s Calendar\nPrecedence: bulk\n\n", 30);

 while ((VAR_8 = FUNC_9(FUNC_5(VAR_6), VAR_11, sizeof(VAR_11))) > 0)
  (void)FUNC_15(VAR_9[1], VAR_11, VAR_8);
 (void)FUNC_1(VAR_9[1]);
done: (void)FUNC_4(VAR_6);
 (void)FUNC_12(VAR_4);
 while (FUNC_13(&VAR_10) >= 0);
}
