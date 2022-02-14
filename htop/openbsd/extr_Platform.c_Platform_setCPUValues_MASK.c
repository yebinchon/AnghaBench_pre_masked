
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int totalPeriod; } ;
struct TYPE_7__ {double* values; scalar_t__ pl; } ;
struct TYPE_6__ {TYPE_3__* cpus; } ;
typedef TYPE_1__ OpenBSDProcessList ;
typedef TYPE_2__ Meter ;
typedef TYPE_3__ CPUData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int** VAR_3 ;
 int FUNC_1 (int,int*,int*,int*,int*) ;
 int FUNC_2 (int*,int,int*,size_t*,int *,int ) ;

double FUNC_3(Meter* VAR_4, int VAR_5) {
   int VAR_6;
   double VAR_7;

   OpenBSDProcessList* VAR_8 = (OpenBSDProcessList*) VAR_4->pl;
   CPUData* VAR_9 = &(VAR_8->cpus[VAR_5]);
   int64_t VAR_10[VAR_0], VAR_11[VAR_0], VAR_12[VAR_0];
   double *VAR_13 = VAR_4->values;
   size_t VAR_14 = sizeof(double) * VAR_0;
   int VAR_15[] = { VAR_1, VAR_2, VAR_5-1 };
   if (FUNC_2(VAR_15, 3, VAR_10, &VAR_14, ((void*)0), 0) == -1) {
      return 0.;
   }


   VAR_9->totalPeriod = 1;

   FUNC_1(VAR_0, VAR_11, VAR_10,
         (int64_t *)VAR_3[VAR_5-1], VAR_12);

   for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
      VAR_3[VAR_5-1][VAR_6] = VAR_10[VAR_6];
      VAR_13[VAR_6] = VAR_11[VAR_6] / 10.;
   }

   FUNC_0(VAR_4, 4);

   VAR_7 = VAR_13[0] + VAR_13[1] + VAR_13[2] + VAR_13[3];

   if (VAR_7 <= 100. && VAR_7 >= 0.) {
      return VAR_7;
   } else {
      return 0.;
   }
}
