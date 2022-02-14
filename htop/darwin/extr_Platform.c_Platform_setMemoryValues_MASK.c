
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_statistics_t ;
struct TYPE_6__ {int max_mem; } ;
struct TYPE_7__ {scalar_t__ inactive_count; scalar_t__ purgeable_count; scalar_t__ wire_count; scalar_t__ active_count; } ;
struct TYPE_9__ {TYPE_1__ host_info; TYPE_2__ vm_stats; } ;
struct TYPE_8__ {int total; double* values; scalar_t__ pl; } ;
typedef TYPE_3__ Meter ;
typedef TYPE_4__ DarwinProcessList ;


 scalar_t__ VAR_0 ;

void FUNC_0(Meter* VAR_1) {
   DarwinProcessList *VAR_2 = (DarwinProcessList *)VAR_1->pl;
   vm_statistics_t VAR_3 = &VAR_2->vm_stats;
   double VAR_4 = (double)VAR_0 / (double)1024;

   VAR_1->total = VAR_2->host_info.max_mem / 1024;
   VAR_1->values[0] = (double)(VAR_3->active_count + VAR_3->wire_count) * VAR_4;
   VAR_1->values[1] = (double)VAR_3->purgeable_count * VAR_4;
   VAR_1->values[2] = (double)VAR_3->inactive_count * VAR_4;
}
