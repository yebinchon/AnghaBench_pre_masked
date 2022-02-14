
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_hdmi_plat_data {struct dw_hdmi_phy_config* phy_config; struct dw_hdmi_curr_ctrl* cur_ctr; struct dw_hdmi_mpll_config* mpll_cfg; } ;
struct dw_hdmi_phy_config {unsigned long mpixelclock; int vlev_ctr; int sym_ctr; int term; } ;
struct dw_hdmi_mpll_config {unsigned long mpixelclock; TYPE_1__* res; } ;
struct dw_hdmi_curr_ctrl {unsigned long mpixelclock; int * curr; } ;
struct dw_hdmi {int dummy; } ;
struct TYPE_2__ {int gmp; int cpce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct dw_hdmi*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dw_hdmi *VAR_12,
  const struct dw_hdmi_plat_data *VAR_13,
  unsigned long VAR_14)
{
 const struct dw_hdmi_mpll_config *VAR_15 = VAR_13->mpll_cfg;
 const struct dw_hdmi_curr_ctrl *VAR_16 = VAR_13->cur_ctr;
 const struct dw_hdmi_phy_config *VAR_17 = VAR_13->phy_config;




 for (; VAR_15->mpixelclock != ~0UL; VAR_15++)
  if (VAR_14 <= VAR_15->mpixelclock)
   break;

 for (; VAR_16->mpixelclock != ~0UL; VAR_16++)
  if (VAR_14 <= VAR_16->mpixelclock)
   break;

 for (; VAR_17->mpixelclock != ~0UL; VAR_17++)
  if (VAR_14 <= VAR_17->mpixelclock)
   break;

 if (VAR_15->mpixelclock == ~0UL ||
     VAR_16->mpixelclock == ~0UL ||
     VAR_17->mpixelclock == ~0UL)
  return -VAR_0;

 FUNC_0(VAR_12, VAR_15->res[0].cpce,
         VAR_4);
 FUNC_0(VAR_12, VAR_15->res[0].gmp,
         VAR_6);
 FUNC_0(VAR_12, VAR_16->curr[0],
         VAR_5);

 FUNC_0(VAR_12, 0, VAR_9);
 FUNC_0(VAR_12, VAR_8,
         VAR_7);

 FUNC_0(VAR_12, VAR_17->term, VAR_10);
 FUNC_0(VAR_12, VAR_17->sym_ctr,
         VAR_3);
 FUNC_0(VAR_12, VAR_17->vlev_ctr,
         VAR_11);


 FUNC_0(VAR_12, VAR_2,
         VAR_1);

 return 0;
}
