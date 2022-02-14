
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double uint64_t ;
typedef int kstat_t ;
struct TYPE_8__ {double ui64; } ;
struct TYPE_9__ {TYPE_1__ value; } ;
typedef TYPE_2__ kstat_named_t ;
struct TYPE_12__ {double lidle; double lintr; double lkrnl; double luser; double userPercent; double nicePercent; double systemPercent; double irqPercent; double systemAllPercent; double idlePercent; } ;
struct TYPE_11__ {int cpuCount; } ;
struct TYPE_10__ {TYPE_5__* cpus; int * kd; } ;
typedef TYPE_3__ SolarisProcessList ;
typedef TYPE_4__ ProcessList ;
typedef TYPE_5__ CPUData ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*,int,char*) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static inline void FUNC_4(ProcessList* VAR_0) {
   const SolarisProcessList* VAR_1 = (SolarisProcessList*) VAR_0;
   int VAR_2 = VAR_0->cpuCount;
   kstat_t *VAR_3 = ((void*)0);
   int VAR_4 = 0;
   kstat_named_t *VAR_5 = ((void*)0);
   kstat_named_t *VAR_6 = ((void*)0);
   kstat_named_t *VAR_7 = ((void*)0);
   kstat_named_t *VAR_8 = ((void*)0);
   double VAR_9 = 0;
   double VAR_10 = 0;
   double VAR_11 = 0;
   double VAR_12 = 0;
   uint64_t VAR_13 = 0;
   int VAR_14 = 0;

   FUNC_0(VAR_2 > 0);

   if (VAR_2 > 1) {


       VAR_14++;
   }


   for (int VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
      if (VAR_1->kd != ((void*)0)) { VAR_3 = FUNC_2(VAR_1->kd,"cpu",VAR_15,"sys"); }
      if (VAR_3 != ((void*)0)) { VAR_4 = FUNC_3(VAR_1->kd,VAR_3,((void*)0)); }
      if (VAR_4 != -1 ) {
         VAR_5 = FUNC_1(VAR_3,"cpu_nsec_idle");
         VAR_6 = FUNC_1(VAR_3,"cpu_nsec_intr");
         VAR_7 = FUNC_1(VAR_3,"cpu_nsec_kernel");
         VAR_8 = FUNC_1(VAR_3,"cpu_nsec_user");
      }

      FUNC_0( (VAR_5 != ((void*)0)) && (VAR_6 != ((void*)0))
           && (VAR_7 != ((void*)0)) && (VAR_8 != ((void*)0)) );

      CPUData* VAR_16 = &(VAR_1->cpus[VAR_15+VAR_14]);
      VAR_13 = (VAR_5->value.ui64 - VAR_16->lidle)
                + (VAR_6->value.ui64 - VAR_16->lintr)
                + (VAR_7->value.ui64 - VAR_16->lkrnl)
                + (VAR_8->value.ui64 - VAR_16->luser);

      VAR_16->userPercent = ((VAR_8->value.ui64 - VAR_16->luser) / (double)VAR_13) * 100.0;
      VAR_16->nicePercent = (double)0.0;
      VAR_16->systemPercent = ((VAR_7->value.ui64 - VAR_16->lkrnl) / (double)VAR_13) * 100.0;
      VAR_16->irqPercent = ((VAR_6->value.ui64 - VAR_16->lintr) / (double)VAR_13) * 100.0;
      VAR_16->systemAllPercent = VAR_16->systemPercent + VAR_16->irqPercent;
      VAR_16->idlePercent = ((VAR_5->value.ui64 - VAR_16->lidle) / (double)VAR_13) * 100.0;

      VAR_16->luser = VAR_8->value.ui64;
      VAR_16->lkrnl = VAR_7->value.ui64;
      VAR_16->lintr = VAR_6->value.ui64;
      VAR_16->lidle = VAR_5->value.ui64;

      if (VAR_2 > 1) {
         VAR_12 += VAR_16->userPercent;
         VAR_11 += VAR_16->systemPercent;
         VAR_10 += VAR_16->irqPercent;
         VAR_9 += VAR_16->idlePercent;
      }
   }

   if (VAR_2 > 1) {
      CPUData* VAR_17 = &(VAR_1->cpus[0]);
      VAR_17->userPercent = VAR_12 / VAR_2;
      VAR_17->nicePercent = (double)0.0;
      VAR_17->systemPercent = VAR_11 / VAR_2;
      VAR_17->irqPercent = VAR_10 / VAR_2;
      VAR_17->systemAllPercent = VAR_17->systemPercent + VAR_17->irqPercent;
      VAR_17->idlePercent = VAR_9 / VAR_2;
   }
}
