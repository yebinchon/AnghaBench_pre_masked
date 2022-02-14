
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int used; int* cpus; } ;
struct TYPE_5__ {int cpuCount; int settings; } ;
typedef TYPE_1__ ProcessList ;
typedef int Panel ;
typedef int Object ;
typedef TYPE_2__ Affinity ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int,int,int,int,int,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int,char*,int ) ;
 int FUNC_9 (char*) ;

Panel* FUNC_10(ProcessList* VAR_2, Affinity* VAR_3) {
   Panel* VAR_4 = FUNC_5(1, 1, 1, 1, 1, FUNC_1(VAR_1), FUNC_2("Set    ", "Cancel "));
   FUNC_3(VAR_4, FUNC_1(VAR_0));

   FUNC_6(VAR_4, "Use CPUs:");
   int VAR_5 = 0;
   for (int VAR_6 = 0; VAR_6 < VAR_2->cpuCount; VAR_6++) {
      char VAR_7[10];
      FUNC_8(VAR_7, 9, "%d", FUNC_7(VAR_2->settings, VAR_6));
      bool VAR_8;
      if (VAR_5 < VAR_3->used && VAR_3->cpus[VAR_5] == VAR_6) {
         VAR_8 = 1;
         VAR_5++;
      } else {
         VAR_8 = 0;
      }
      FUNC_4(VAR_4, (Object*) FUNC_0(FUNC_9(VAR_7), VAR_8));
   }
   return VAR_4;
}
