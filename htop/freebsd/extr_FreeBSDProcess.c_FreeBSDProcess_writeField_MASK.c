
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_2__ {int jname; int jid; } ;
typedef int RichString ;
typedef scalar_t__ ProcessField ;
typedef int Process ;
typedef TYPE_1__ FreeBSDProcess ;


 int* VAR_0 ;
 size_t VAR_1 ;


 char* VAR_2 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (char*,int,char*,int ) ;

void FUNC_3(Process* VAR_3, RichString* VAR_4, ProcessField VAR_5) {
   FreeBSDProcess* VAR_6 = (FreeBSDProcess*) VAR_3;
   char VAR_7[256]; VAR_7[255] = '\0';
   int VAR_8 = VAR_0[VAR_1];
   int VAR_9 = sizeof(VAR_7) - 1;
   switch ((int) VAR_5) {

   case 128: FUNC_2(VAR_7, VAR_9, VAR_2, VAR_6->jid); break;
   case 129:{
      FUNC_2(VAR_7, VAR_9, "%-11s ", VAR_6->jname); break;
      if (VAR_7[11] != '\0') {
         VAR_7[11] = ' ';
         VAR_7[12] = '\0';
      }
      break;
   }
   default:
      FUNC_0(VAR_3, VAR_4, VAR_5);
      return;
   }
   FUNC_1(VAR_4, VAR_8, VAR_7);
}
