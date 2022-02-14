
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int rstcfg; int ipb_clk_sel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_2 (struct device_node*) ;

unsigned int FUNC_3(struct device_node *VAR_1)
{
 u32 VAR_2;
 unsigned int VAR_3;

 if (!VAR_0)
  return 0;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return 0;

 if (FUNC_0(&VAR_0->ipb_clk_sel) & 0x1)
  VAR_3 *= 2;

 VAR_2 = FUNC_1(&VAR_0->rstcfg);
 if (VAR_2 & (1 << 5))
  VAR_3 *= 8;
 else
  VAR_3 *= 4;
 if (VAR_2 & (1 << 6))
  VAR_3 /= 12;
 else
  VAR_3 /= 16;

 return VAR_3;
}
