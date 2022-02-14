
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_x86 {int dummy; } ;
struct TYPE_2__ {int disabled; } ;


 scalar_t__ FUNC_0 (struct cpuinfo_x86*) ;
 scalar_t__ FUNC_1 (struct cpuinfo_x86*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct cpuinfo_x86*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct cpuinfo_x86*) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_9 (struct cpuinfo_x86*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char*) ;

void FUNC_12(struct cpuinfo_x86 *VAR_3)
{
 if (VAR_2.disabled)
  return;

 if (FUNC_0(VAR_3))
  return;

 if (!FUNC_9(VAR_3))
  return;

 FUNC_2();

 if (FUNC_1(VAR_3) < 0) {
  VAR_2.disabled = 1;
  return;
 }

 if (FUNC_10()) {
  VAR_2.disabled = 1;
  FUNC_11("Couldn't allocate MCE records pool!\n");
  return;
 }

 VAR_1 = VAR_0;

 FUNC_5(VAR_3);
 FUNC_6();
 FUNC_7(VAR_3);
 FUNC_4();
 FUNC_3();
 FUNC_8();
}
