
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {int cpu_present; int cpu_bsp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*,size_t,char*) ;

void
FUNC_3(u_int VAR_4, char VAR_5)
{

 if (VAR_4 > VAR_3) {
  FUNC_1("SMP: APIC ID %d too high", VAR_4);
  return;
 }
 FUNC_0(VAR_2[VAR_4].cpu_present == 0, ("CPU %u added twice",
     VAR_4));
 VAR_2[VAR_4].cpu_present = 1;
 if (VAR_5) {
  FUNC_0(VAR_0 == -1,
      ("CPU %u claims to be BSP, but CPU %u already is", VAR_4,
      VAR_0));
  VAR_0 = VAR_4;
  VAR_2[VAR_4].cpu_bsp = 1;
 }
 if (VAR_1)
  FUNC_2("SMP: Added CPU %u (%s)\n", VAR_4, VAR_5 ? "BSP" :
      "AP");
}
