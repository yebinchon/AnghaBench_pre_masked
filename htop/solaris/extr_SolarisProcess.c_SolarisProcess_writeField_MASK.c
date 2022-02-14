
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_2__ {int lwpid; int realppid; int realpid; int zname; int contid; int poolid; int taskid; int projid; int zoneid; } ;
typedef TYPE_1__ SolarisProcess ;
typedef int RichString ;
typedef scalar_t__ ProcessField ;
typedef int Process ;



 int* VAR_0 ;
 size_t VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int,char*) ;



 int VAR_3 ;
 int FUNC_2 (char*,int,char*,int,...) ;

void FUNC_3(Process* VAR_4, RichString* VAR_5, ProcessField VAR_6) {
   SolarisProcess* VAR_7 = (SolarisProcess*) VAR_4;
   char VAR_8[256]; VAR_8[255] = '\0';
   int VAR_9 = VAR_0[VAR_1];
   int VAR_10 = sizeof(VAR_8) - 1;
   switch ((int) VAR_6) {

   case 128: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->zoneid); break;
   case 131: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->projid); break;
   case 130: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->taskid); break;
   case 133: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->poolid); break;
   case 136: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->contid); break;
   case 129:{
      FUNC_2(VAR_8, VAR_10, "%-*s ", VAR_3/4, VAR_7->zname); break;
      if (VAR_8[VAR_3/4] != '\0') {
         VAR_8[VAR_3/4] = ' ';
         VAR_8[(VAR_3/4)+1] = '\0';
      }
      break;
   }
   case 134: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->realpid); break;
   case 132: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->realppid); break;
   case 135: FUNC_2(VAR_8, VAR_10, VAR_2, VAR_7->lwpid); break;
   default:
      FUNC_0(VAR_4, VAR_5, VAR_6);
      return;
   }
   FUNC_1(VAR_5, VAR_9, VAR_8);
}
