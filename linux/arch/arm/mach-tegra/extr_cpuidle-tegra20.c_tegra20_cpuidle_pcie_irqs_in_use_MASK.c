
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* states; } ;
struct TYPE_3__ {int disabled; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ VAR_0 ;

void FUNC_1(void)
{
 FUNC_0(
  "Disabling cpuidle LP2 state, since PCIe IRQs are in use\n");
 VAR_0.states[1].disabled = 1;
}
