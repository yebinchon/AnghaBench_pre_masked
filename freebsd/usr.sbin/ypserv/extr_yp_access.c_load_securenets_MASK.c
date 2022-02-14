
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* s_addr; } ;
struct TYPE_3__ {void* s_addr; } ;
struct securenet {struct securenet* next; TYPE_2__ mask; TYPE_1__ net; } ;
struct in_addr {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int ,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (struct securenet*) ;
 int FUNC_5 (char*,struct in_addr*) ;
 struct securenet* FUNC_6 (int) ;
 struct securenet* VAR_5 ;
 int FUNC_7 (char*,int ,char*,char*) ;
 int FUNC_8 (char*,char*,char*,char*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 char* VAR_6 ;
 int FUNC_12 (char*,char*,...) ;

void
FUNC_13(void)
{
 FILE *VAR_7;
 char VAR_8[VAR_3 + 2];
 char VAR_9[1024 + 2];
 struct securenet *VAR_10;






 while (VAR_5) {
  VAR_10 = VAR_5->next;
  FUNC_4(VAR_5);
  VAR_5 = VAR_10;
 }

 FUNC_7(VAR_8, VAR_3, "%s/securenets", VAR_6);

 if ((VAR_7 = FUNC_3(VAR_8, "r")) == ((void*)0)) {
  if (VAR_4 == VAR_0) {
   VAR_5 = FUNC_6(sizeof(struct securenet));
   VAR_5->net.s_addr = VAR_1;
   VAR_5->mask.s_addr = VAR_1;
   VAR_5->next = ((void*)0);
   return;
  } else {
   FUNC_12("fopen(%s) failed: %s", VAR_8, FUNC_9(VAR_4));
   FUNC_0(1);
  }
 }

 VAR_5 = ((void*)0);

 while (FUNC_2(VAR_9, VAR_2, VAR_7)) {
  char VAR_11[20], VAR_12[20];

  if ((VAR_9[0] == '#')
      || (FUNC_11(VAR_9, " \t\r\n") == FUNC_10(VAR_9)))
   continue;
  if (FUNC_8(VAR_9, "%s %s", VAR_11, VAR_12) < 2) {
   FUNC_12("badly formatted securenets entry: %s",
       VAR_9);
   continue;
  }

  VAR_10 = FUNC_6(sizeof(struct securenet));

  if (!FUNC_5((char *)&VAR_11, (struct in_addr *)&VAR_10->net)) {
   FUNC_12("badly formatted securenets entry: %s", VAR_11);
   FUNC_4(VAR_10);
   continue;
  }

  if (!FUNC_5((char *)&VAR_12, (struct in_addr *)&VAR_10->mask)) {
   FUNC_12("badly formatted securenets entry: %s", VAR_12);
   FUNC_4(VAR_10);
   continue;
  }

  VAR_10->next = VAR_5;
  VAR_5 = VAR_10;
 }

 FUNC_1(VAR_7);

}
