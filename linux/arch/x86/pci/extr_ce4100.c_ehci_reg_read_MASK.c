
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mask; } ;
struct sim_dev_reg {TYPE_1__ sim_reg; } ;


 int FUNC_0 (struct sim_dev_reg*,int*) ;

__attribute__((used)) static void FUNC_1(struct sim_dev_reg *VAR_0, u32 *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 if (*VAR_1 != VAR_0->sim_reg.mask)
  *VAR_1 |= 0x100;
}
