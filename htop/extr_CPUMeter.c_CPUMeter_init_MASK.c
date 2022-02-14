
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int caption ;
struct TYPE_6__ {int param; TYPE_1__* pl; } ;
struct TYPE_5__ {int cpuCount; int settings; } ;
typedef TYPE_2__ Meter ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_3(Meter* VAR_0) {
   int VAR_1 = VAR_0->param;
   if (VAR_0->pl->cpuCount > 1) {
      char VAR_2[10];
      FUNC_2(VAR_2, sizeof(VAR_2), "%-3d", FUNC_1(VAR_0->pl->settings, VAR_1 - 1));
      FUNC_0(VAR_0, VAR_2);
   }
   if (VAR_0->param == 0)
      FUNC_0(VAR_0, "Avg");
}
