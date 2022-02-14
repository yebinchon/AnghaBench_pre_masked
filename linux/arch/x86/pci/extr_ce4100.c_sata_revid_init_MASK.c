
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; scalar_t__ mask; } ;
struct sim_dev_reg {TYPE_1__ sim_reg; } ;



void FUNC_0(struct sim_dev_reg *VAR_0)
{
 VAR_0->sim_reg.value = 0x01060100;
 VAR_0->sim_reg.mask = 0;
}
