
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {double userPercent; double nicePercent; double systemPercent; double irqPercent; double systemAllPercent; double idlePercent; } ;
struct TYPE_6__ {unsigned long* cp_time_n; unsigned long* cp_times_n; unsigned long* cp_time_o; unsigned long* cp_times_o; TYPE_3__* cpus; } ;
struct TYPE_5__ {int cpuCount; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ DragonFlyBSDProcessList ;
typedef TYPE_3__ CPUData ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,unsigned long*,size_t*,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(ProcessList* VAR_8) {
   const DragonFlyBSDProcessList* VAR_9 = (DragonFlyBSDProcessList*) VAR_8;

   int VAR_10 = VAR_8->cpuCount;
   int VAR_11 = VAR_10;
   int VAR_12;

   FUNC_0(VAR_10 > 0);

   size_t VAR_13;

   unsigned long *VAR_14;
   unsigned long *VAR_15;

   unsigned long VAR_16[VAR_0];
   double VAR_17[VAR_0];


   VAR_13 = sizeof(unsigned long) * VAR_0;
   FUNC_1(VAR_6, 2, VAR_9->cp_time_n, &VAR_13, ((void*)0), 0);


   if (VAR_10 > 1) {



       VAR_11 = VAR_10 + 1;
       VAR_13 = VAR_10 * sizeof(unsigned long) * VAR_0;
       FUNC_1(VAR_7, 2, VAR_9->cp_times_n, &VAR_13, ((void*)0), 0);
   }

   for (int VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
      if (VAR_10 == 1) {

         VAR_14 = VAR_9->cp_time_n;
         VAR_15 = VAR_9->cp_time_o;
      } else {
         if (VAR_18 == 0 ) {

           VAR_14 = VAR_9->cp_time_n;
           VAR_15 = VAR_9->cp_time_o;
         } else {

           VAR_12 = VAR_18 - 1;
           VAR_14 = VAR_9->cp_times_n + (VAR_12 * VAR_0);
           VAR_15 = VAR_9->cp_times_o + (VAR_12 * VAR_0);
         }
      }


      unsigned long long VAR_19 = 0;
      unsigned long long VAR_20 = 0;
      unsigned long long VAR_21 = 0;
      for (int VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
        VAR_16[VAR_22] = VAR_14[VAR_22] - VAR_15[VAR_22];
        VAR_19 += VAR_15[VAR_22];
        VAR_20 += VAR_14[VAR_22];
      }


      VAR_21 = VAR_20 - VAR_19;
      if (VAR_21 < 1 ) VAR_21 = 1;


      for (int VAR_23 = 0; VAR_23 < VAR_0; ++VAR_23) {
        VAR_15[VAR_23] = VAR_14[VAR_23];
        VAR_17[VAR_23] = ((double)VAR_16[VAR_23]) / ((double)VAR_21) * 100;
      }

      CPUData* VAR_24 = &(VAR_9->cpus[VAR_18]);
      VAR_24->userPercent = VAR_17[VAR_5];
      VAR_24->nicePercent = VAR_17[VAR_3];
      VAR_24->systemPercent = VAR_17[VAR_4];
      VAR_24->irqPercent = VAR_17[VAR_2];
      VAR_24->systemAllPercent = VAR_17[VAR_4] + VAR_17[VAR_2];

      VAR_24->idlePercent = VAR_17[VAR_1];
   }
}
