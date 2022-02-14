
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int command ;
struct TYPE_6__ {int isKernelThread; } ;
struct TYPE_5__ {int basenameOffset; } ;
typedef TYPE_1__ Process ;
typedef TYPE_2__ LinuxProcess ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (char*,int ,char*,char const*,char const*) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static bool FUNC_5(Process* VAR_2, const char* VAR_3, const char* VAR_4) {
   char VAR_5[VAR_0+1];
   FUNC_3(VAR_5, VAR_0, "%s/%s/cmdline", VAR_3, VAR_4);
   int VAR_6 = FUNC_1(VAR_5, VAR_1);
   if (VAR_6 == -1)
      return 0;

   char VAR_7[4096+1];
   int VAR_8 = FUNC_4(VAR_6, VAR_7, sizeof(VAR_7) - 1);
   FUNC_0(VAR_6);
   int VAR_9 = 0;
   int VAR_10 = 0;
   if (VAR_8 == 0) {
      ((LinuxProcess*)VAR_2)->isKernelThread = 1;
      return 1;
   } else if (VAR_8 < 0) {
      return 0;
   }
   for (int VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
      if (VAR_7[VAR_11] == '\0' || VAR_7[VAR_11] == '\n') {
         if (VAR_9 == 0) {
            VAR_9 = VAR_11;
         }
         VAR_7[VAR_11] = ' ';
      } else {
         VAR_10 = VAR_11;
      }
   }
   if (VAR_9 == 0) {
      VAR_9 = VAR_8;
   }
   VAR_7[VAR_10 + 1] = '\0';
   VAR_2->basenameOffset = VAR_9;
   FUNC_2(VAR_2, VAR_7, VAR_10 + 1);

   return 1;
}
