
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_pll {int id; TYPE_1__* dss; } ;
struct TYPE_2__ {int syscon_pll_ctrl_offset; int syscon_pll_ctrl; } ;


 int FUNC_0 (char*,int) ;



 int FUNC_1 (int ,int ,int,unsigned int) ;

void FUNC_2(struct dss_pll *VAR_0, bool VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 if (!VAR_0->dss->syscon_pll_ctrl)
  return;

 VAR_3 = !VAR_1;

 switch (VAR_0->id) {
 case 129:
  VAR_2 = 0;
  break;
 case 128:
  VAR_2 = 1;
  break;
 case 130:
  VAR_2 = 2;
  break;
 default:
  FUNC_0("illegal DSS PLL ID %d\n", VAR_0->id);
  return;
 }

 FUNC_1(VAR_0->dss->syscon_pll_ctrl,
      VAR_0->dss->syscon_pll_ctrl_offset,
      1 << VAR_2, VAR_3 << VAR_2);
}
