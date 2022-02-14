
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pebs_broken; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (FUNC_0() == VAR_0.pebs_broken)
  return;




 if (VAR_0.pebs_broken) {
  FUNC_1("PEBS enabled due to microcode update\n");
  VAR_0.pebs_broken = 0;
 } else {
  FUNC_1("PEBS disabled due to CPU errata, please upgrade microcode\n");
  VAR_0.pebs_broken = 1;
 }
}
