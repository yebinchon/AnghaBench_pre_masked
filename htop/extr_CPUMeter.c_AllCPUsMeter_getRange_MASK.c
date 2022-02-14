
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pl; } ;
struct TYPE_5__ {int cpuCount; } ;
typedef TYPE_2__ Meter ;


 int* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(Meter* VAR_0, int* VAR_1, int* VAR_2) {
   int VAR_3 = VAR_0->pl->cpuCount;
   switch(FUNC_0(VAR_0)[0]) {
      default:
      case 'A':
         *VAR_1 = 0;
         *VAR_2 = VAR_3;
         break;
      case 'L':
         *VAR_1 = 0;
         *VAR_2 = (VAR_3+1) / 2;
         break;
      case 'R':
         *VAR_1 = (VAR_3+1) / 2;
         *VAR_2 = VAR_3 / 2;
         break;
   }
}
