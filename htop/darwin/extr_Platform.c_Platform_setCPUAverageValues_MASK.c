
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cpuCount; } ;
struct TYPE_8__ {TYPE_1__ super; } ;
struct TYPE_7__ {double* values; scalar_t__ pl; } ;
typedef TYPE_2__ Meter ;
typedef TYPE_3__ DarwinProcessList ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static double FUNC_1(Meter* VAR_3) {
   DarwinProcessList *VAR_4 = (DarwinProcessList *)VAR_3->pl;
   int VAR_5 = VAR_4->super.cpuCount;
   double VAR_6 = 0.0;
   double VAR_7 = 0.0;
   double VAR_8 = 0.0;
   double VAR_9 = 0.0;
   for (int VAR_10 = 1; VAR_10 <= VAR_5; VAR_10++) {
      VAR_9 += FUNC_0(VAR_3, VAR_10);
      VAR_6 += VAR_3->values[VAR_1];
      VAR_7 += VAR_3->values[VAR_2];
      VAR_8 += VAR_3->values[VAR_0];
   }
   VAR_3->values[VAR_1] = VAR_6 / VAR_5;
   VAR_3->values[VAR_2] = VAR_7 / VAR_5;
   VAR_3->values[VAR_0] = VAR_8 / VAR_5;
   return VAR_9 / VAR_5;
}
