
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int tim ;
struct tm {int dummy; } ;
struct TYPE_2__ {int tv_sec; } ;
struct node_info {int chan; int max; struct node_info* next; int wep; int mac; TYPE_1__ seen; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char*,char*,char*,int,char*,int) ;
 struct tm* FUNC_4 (int *) ;
 char* FUNC_5 (int ) ;
 struct node_info* VAR_0 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (struct node_info*) ;
 int FUNC_8 (char*,int,char*,struct tm*) ;
 char* FUNC_9 (int ) ;

void FUNC_10() {
 FILE* VAR_1;
 struct node_info* VAR_2 = VAR_0;

 VAR_1 = FUNC_2("stumbler.log", "w");
 if (!VAR_1) {
  FUNC_6("fopen()");
  FUNC_0(1);
 }

 while (VAR_2) {
  struct tm* VAR_3;
  char VAR_4[16];

  VAR_3 = FUNC_4( (time_t*) &VAR_2->seen.tv_sec);
  if (!VAR_3) {
   FUNC_6("localtime()");
   FUNC_0(1);
  }
  VAR_4[0] = 0;
  FUNC_8(VAR_4, sizeof(VAR_4), "%H:%M:%S", VAR_3);

  FUNC_3(VAR_1, "%s %s %s %2d %s 0x%.2x\n", VAR_4,
   FUNC_5(VAR_2->mac), FUNC_9(VAR_2->wep),
   VAR_2->chan, FUNC_7(VAR_2), VAR_2->max);

  VAR_2 = VAR_2->next;
 }

 FUNC_1(VAR_1);
}
