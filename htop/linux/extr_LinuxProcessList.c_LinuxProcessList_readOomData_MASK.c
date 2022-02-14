
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int oom; } ;
typedef TYPE_1__ LinuxProcess ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int ,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,unsigned int*) ;
 int FUNC_4 (char*,int ,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_5(LinuxProcess* VAR_2, const char* VAR_3, const char* VAR_4) {
   char VAR_5[VAR_0+1];
   FUNC_4(VAR_5, VAR_0, "%s/%s/oom_score", VAR_3, VAR_4);
   FILE* VAR_6 = FUNC_2(VAR_5, "r");
   if (!VAR_6) {
      return;
   }
   char VAR_7[VAR_1 + 1];
   if (FUNC_1(VAR_7, VAR_1, VAR_6)) {
      unsigned int VAR_8;
      int VAR_9 = FUNC_3(VAR_7, "%32u", &VAR_8);
      if (VAR_9 >= 1) {
         VAR_2->oom = VAR_8;
      }
   }
   FUNC_0(VAR_6);
}
