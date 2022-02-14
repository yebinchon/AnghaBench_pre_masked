
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_7__ {int highlightMegabytes; int direction; int treeView; int highlightThreads; } ;
struct TYPE_6__ {double percent_cpu; double percent_mem; int indent; int m_resident; int m_size; int priority; scalar_t__ st_uid; int user; int tty_nr; int tpgid; int tgid; int time; int state; int starttime_show; int session; int processor; TYPE_2__* settings; int ppid; int pid; int pgrp; int nlwp; int nice; int minflt; int majflt; int showChildren; } ;
typedef int RichString ;
typedef int ProcessField ;
typedef TYPE_1__ Process ;



 int* VAR_0 ;
 char** VAR_1 ;
 size_t VAR_2 ;






 int VAR_3 ;







 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_13 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,int,int,int *) ;
 int FUNC_5 (int *,int,char*) ;




 int FUNC_6 (TYPE_2__*,int ) ;



 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;


 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char*,...) ;
 int FUNC_10 (char*,int,char*,...) ;

void FUNC_11(Process* VAR_21, RichString* VAR_22, ProcessField VAR_23) {
   char VAR_24[256]; VAR_24[255] = '\0';
   int VAR_25 = VAR_0[VAR_2];
   int VAR_26 = VAR_0[VAR_4];
   int VAR_27 = sizeof(VAR_24) - 1;
   bool VAR_28 = VAR_21->settings->highlightMegabytes;

   switch (VAR_23) {
   case 143: {
      if (VAR_21->percent_cpu > 999.9) {
         FUNC_10(VAR_24, VAR_27, "%4u ", (unsigned int)VAR_21->percent_cpu);
      } else if (VAR_21->percent_cpu > 99.9) {
         FUNC_10(VAR_24, VAR_27, "%3u. ", (unsigned int)VAR_21->percent_cpu);
      } else {
         FUNC_10(VAR_24, VAR_27, "%4.1f ", VAR_21->percent_cpu);
      }
      break;
   }
   case 142: {
      if (VAR_21->percent_mem > 99.9) {
         FUNC_10(VAR_24, VAR_27, "100. ");
      } else {
         FUNC_10(VAR_24, VAR_27, "%4.1f ", VAR_21->percent_mem);
      }
      break;
   }
   case 150: {
      if (VAR_21->settings->highlightThreads && FUNC_2(VAR_21)) {
         VAR_25 = VAR_0[VAR_10];
         VAR_26 = VAR_0[VAR_11];
      }
      if (!VAR_21->settings->treeView || VAR_21->indent == 0) {
         FUNC_4(VAR_21, VAR_25, VAR_26, VAR_22);
         return;
      } else {
         char* VAR_29 = VAR_24;
         int VAR_30 = 0;
         bool VAR_31 = (VAR_21->indent < 0);
         int VAR_32 = (VAR_21->indent < 0 ? -VAR_21->indent : VAR_21->indent);

         for (int VAR_33 = 0; VAR_33 < 32; VAR_33++)
            if (VAR_32 & (1U << VAR_33))
               VAR_30 = VAR_33+1;
          for (int VAR_34 = 0; VAR_34 < VAR_30 - 1; VAR_34++) {
            int VAR_35, VAR_36;
            if (VAR_32 & (1 << VAR_34))
               VAR_36 = FUNC_9(VAR_29, VAR_27, "%s  ", VAR_1[VAR_20]);
            else
               VAR_36 = FUNC_9(VAR_29, VAR_27, "   ");
            if (VAR_36 < 0 || VAR_36 >= VAR_27) {
               VAR_35 = VAR_27;
            } else {
               VAR_35 = VAR_36;
            }
            VAR_29 += VAR_35;
            VAR_27 -= VAR_35;
         }
         const char* VAR_37 = VAR_1[VAR_31 ? (VAR_21->settings->direction == 1 ? VAR_15 : VAR_19) : VAR_17];
         FUNC_10(VAR_29, VAR_27, "%s%s ", VAR_37, VAR_21->showChildren ? VAR_1[VAR_18] : VAR_1[VAR_16] );
         FUNC_5(VAR_22, VAR_0[VAR_12], VAR_24);
         FUNC_4(VAR_21, VAR_25, VAR_26, VAR_22);
         return;
      }
   }
   case 149: FUNC_0(VAR_22, VAR_21->majflt, VAR_28); return;
   case 148: FUNC_0(VAR_22, VAR_21->minflt, VAR_28); return;
   case 147: FUNC_1(VAR_22, VAR_21->m_resident * VAR_3, VAR_28); return;
   case 146: FUNC_1(VAR_22, VAR_21->m_size * VAR_3, VAR_28); return;
   case 145: {
      FUNC_10(VAR_24, VAR_27, "%3ld ", VAR_21->nice);
      VAR_25 = VAR_21->nice < 0 ? VAR_0[VAR_6]
           : VAR_21->nice > 0 ? VAR_0[VAR_7]
           : VAR_25;
      break;
   }
   case 144: FUNC_10(VAR_24, VAR_27, "%4ld ", VAR_21->nlwp); break;
   case 141: FUNC_10(VAR_24, VAR_27, VAR_14, VAR_21->pgrp); break;
   case 140: FUNC_10(VAR_24, VAR_27, VAR_14, VAR_21->pid); break;
   case 139: FUNC_10(VAR_24, VAR_27, VAR_14, VAR_21->ppid); break;
   case 138: {
      if(VAR_21->priority <= -100)
         FUNC_10(VAR_24, VAR_27, " RT ");
      else
         FUNC_10(VAR_24, VAR_27, "%3ld ", VAR_21->priority);
      break;
   }
   case 137: FUNC_10(VAR_24, VAR_27, "%3d ", FUNC_6(VAR_21->settings, VAR_21->processor)); break;
   case 136: FUNC_10(VAR_24, VAR_27, VAR_14, VAR_21->session); break;
   case 135: FUNC_10(VAR_24, VAR_27, "%s", VAR_21->starttime_show); break;
   case 134: {
      FUNC_10(VAR_24, VAR_27, "%c ", VAR_21->state);
      switch(VAR_21->state) {
          case 'R':
              VAR_25 = VAR_0[VAR_8];
              break;
          case 'D':
              VAR_25 = VAR_0[VAR_5];
              break;
      }
      break;
   }
   case 133: FUNC_10(VAR_24, VAR_27, "%4d ", VAR_21->st_uid); break;
   case 131: FUNC_3(VAR_22, VAR_21->time); return;
   case 132: FUNC_10(VAR_24, VAR_27, VAR_14, VAR_21->tgid); break;
   case 130: FUNC_10(VAR_24, VAR_27, VAR_14, VAR_21->tpgid); break;
   case 129: FUNC_10(VAR_24, VAR_27, "%3u:%3u ", FUNC_7(VAR_21->tty_nr), FUNC_8(VAR_21->tty_nr)); break;
   case 128: {
      if (VAR_13 != (int) VAR_21->st_uid)
         VAR_25 = VAR_0[VAR_9];
      if (VAR_21->user) {
         FUNC_10(VAR_24, VAR_27, "%-9s ", VAR_21->user);
      } else {
         FUNC_10(VAR_24, VAR_27, "%-9d ", VAR_21->st_uid);
      }
      if (VAR_24[9] != '\0') {
         VAR_24[9] = ' ';
         VAR_24[10] = '\0';
      }
      break;
   }
   default:
      FUNC_10(VAR_24, VAR_27, "- ");
   }
   FUNC_5(VAR_22, VAR_25, VAR_24);
}
