
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int totalPeriod; double nicePeriod; double userPeriod; double systemPeriod; double irqPeriod; double softIrqPeriod; double stealPeriod; double guestPeriod; double ioWaitPeriod; double systemAllPeriod; } ;
struct TYPE_11__ {TYPE_5__* cpus; } ;
struct TYPE_10__ {double* values; TYPE_2__* pl; } ;
struct TYPE_9__ {TYPE_1__* settings; } ;
struct TYPE_8__ {scalar_t__ accountGuestInCPUMeter; scalar_t__ detailedCPUTime; } ;
typedef TYPE_3__ Meter ;
typedef TYPE_4__ LinuxProcessList ;
typedef TYPE_5__ CPUData ;


 double FUNC_0 (double,double,double) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (double) ;

double FUNC_3(Meter* VAR_8, int VAR_9) {
   LinuxProcessList* VAR_10 = (LinuxProcessList*) VAR_8->pl;
   CPUData* VAR_11 = &(VAR_10->cpus[VAR_9]);
   double VAR_12 = (double) ( VAR_11->totalPeriod == 0 ? 1 : VAR_11->totalPeriod);
   double VAR_13;
   double* VAR_14 = VAR_8->values;
   VAR_14[VAR_4] = VAR_11->nicePeriod / VAR_12 * 100.0;
   VAR_14[VAR_5] = VAR_11->userPeriod / VAR_12 * 100.0;
   if (VAR_8->pl->settings->detailedCPUTime) {
      VAR_14[VAR_3] = VAR_11->systemPeriod / VAR_12 * 100.0;
      VAR_14[VAR_2] = VAR_11->irqPeriod / VAR_12 * 100.0;
      VAR_14[VAR_6] = VAR_11->softIrqPeriod / VAR_12 * 100.0;
      VAR_14[VAR_7] = VAR_11->stealPeriod / VAR_12 * 100.0;
      VAR_14[VAR_0] = VAR_11->guestPeriod / VAR_12 * 100.0;
      VAR_14[VAR_1] = VAR_11->ioWaitPeriod / VAR_12 * 100.0;
      FUNC_1(VAR_8, 8);
      if (VAR_8->pl->settings->accountGuestInCPUMeter) {
         VAR_13 = VAR_14[0]+VAR_14[1]+VAR_14[2]+VAR_14[3]+VAR_14[4]+VAR_14[5]+VAR_14[6];
      } else {
         VAR_13 = VAR_14[0]+VAR_14[1]+VAR_14[2]+VAR_14[3]+VAR_14[4];
      }
   } else {
      VAR_14[2] = VAR_11->systemAllPeriod / VAR_12 * 100.0;
      VAR_14[3] = (VAR_11->stealPeriod + VAR_11->guestPeriod) / VAR_12 * 100.0;
      FUNC_1(VAR_8, 4);
      VAR_13 = VAR_14[0]+VAR_14[1]+VAR_14[2]+VAR_14[3];
   }
   VAR_13 = FUNC_0(VAR_13, 0.0, 100.0);
   if (FUNC_2(VAR_13)) VAR_13 = 0.0;
   return VAR_13;
}
