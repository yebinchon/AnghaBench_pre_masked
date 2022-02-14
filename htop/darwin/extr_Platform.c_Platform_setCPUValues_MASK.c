
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* processor_cpu_load_info_t ;
struct TYPE_9__ {TYPE_1__* curr_load; TYPE_1__* prev_load; } ;
struct TYPE_8__ {double* values; scalar_t__ pl; } ;
struct TYPE_7__ {scalar_t__* cpu_ticks; } ;
typedef TYPE_2__ Meter ;
typedef TYPE_3__ DarwinProcessList ;


 double FUNC_0 (double,double,double) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (TYPE_2__*,int) ;
 double FUNC_2 (TYPE_2__*) ;

double FUNC_3(Meter* VAR_7, int VAR_8) {

   if (VAR_8 == 0) {
      return FUNC_2(VAR_7);
   }

   DarwinProcessList *VAR_9 = (DarwinProcessList *)VAR_7->pl;
   processor_cpu_load_info_t VAR_10 = &VAR_9->prev_load[VAR_8-1];
   processor_cpu_load_info_t VAR_11 = &VAR_9->curr_load[VAR_8-1];
   double VAR_12 = 0;


   for(size_t VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
      VAR_12 += (double)VAR_11->cpu_ticks[VAR_13] - (double)VAR_10->cpu_ticks[VAR_13];
   }

   VAR_7->values[VAR_1]
           = ((double)VAR_11->cpu_ticks[VAR_4] - (double)VAR_10->cpu_ticks[VAR_4])* 100.0 / VAR_12;
   VAR_7->values[VAR_2]
           = ((double)VAR_11->cpu_ticks[VAR_6] - (double)VAR_10->cpu_ticks[VAR_6])* 100.0 / VAR_12;
   VAR_7->values[VAR_0]
           = ((double)VAR_11->cpu_ticks[VAR_5] - (double)VAR_10->cpu_ticks[VAR_5])* 100.0 / VAR_12;

   FUNC_1(VAR_7, 3);


   VAR_12 = VAR_7->values[VAR_1] + VAR_7->values[VAR_2] + VAR_7->values[VAR_0];

   return FUNC_0(VAR_12, 0.0, 100.0);
}
