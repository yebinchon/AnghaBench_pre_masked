
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {double nicePercent; double userPercent; double systemPercent; double irqPercent; double systemAllPercent; } ;
struct TYPE_11__ {TYPE_5__* cpus; } ;
struct TYPE_10__ {double* values; TYPE_2__* pl; } ;
struct TYPE_9__ {int cpuCount; TYPE_1__* settings; } ;
struct TYPE_8__ {scalar_t__ detailedCPUTime; } ;
typedef TYPE_3__ Meter ;
typedef TYPE_4__ FreeBSDProcessList ;
typedef TYPE_5__ CPUData ;


 double FUNC_0 (double,double,double) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (double) ;

double FUNC_3(Meter* VAR_4, int VAR_5) {
   FreeBSDProcessList* VAR_6 = (FreeBSDProcessList*) VAR_4->pl;
   int VAR_7 = VAR_4->pl->cpuCount;
   CPUData* VAR_8;

   if (VAR_7 == 1) {

     VAR_8 = &(VAR_6->cpus[0]);
   } else {
     VAR_8 = &(VAR_6->cpus[VAR_5]);
   }

   double VAR_9;
   double* VAR_10 = VAR_4->values;

   VAR_10[VAR_2] = VAR_8->nicePercent;
   VAR_10[VAR_3] = VAR_8->userPercent;
   if (VAR_4->pl->settings->detailedCPUTime) {
      VAR_10[VAR_1] = VAR_8->systemPercent;
      VAR_10[VAR_0] = VAR_8->irqPercent;
      FUNC_1(VAR_4, 4);
      VAR_9 = VAR_10[0]+VAR_10[1]+VAR_10[2]+VAR_10[3];
   } else {
      VAR_10[2] = VAR_8->systemAllPercent;
      FUNC_1(VAR_4, 3);
      VAR_9 = VAR_10[0]+VAR_10[1]+VAR_10[2];
   }

   VAR_9 = FUNC_0(VAR_9, 0.0, 100.0);
   if (FUNC_2(VAR_9)) VAR_9 = 0.0;
   return VAR_9;
}
