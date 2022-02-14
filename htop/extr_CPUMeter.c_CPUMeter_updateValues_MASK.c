
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int param; int values; TYPE_1__* pl; } ;
struct TYPE_5__ {int cpuCount; } ;
typedef TYPE_2__ Meter ;


 int VAR_0 ;
 double FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_3(Meter* VAR_1, char* VAR_2, int VAR_3) {
   int VAR_4 = VAR_1->param;
   if (VAR_4 > VAR_1->pl->cpuCount) {
      FUNC_2(VAR_2, VAR_3, "absent");
      return;
   }
   FUNC_1(VAR_1->values, 0, sizeof(double) * VAR_0);
   double VAR_5 = FUNC_0(VAR_1, VAR_4);
   FUNC_2(VAR_2, VAR_3, "%5.1f%%", VAR_5);
}
