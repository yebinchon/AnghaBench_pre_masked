
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_hdmi_phy_params {unsigned long mpixelclock; int div; int curr_gmp; int opmode_div; } ;
struct dw_hdmi_plat_data {int dummy; } ;
struct dw_hdmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dw_hdmi*,int ,int ) ;
 struct rcar_hdmi_phy_params* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct dw_hdmi *VAR_5,
       const struct dw_hdmi_plat_data *VAR_6,
       unsigned long VAR_7)
{
 const struct rcar_hdmi_phy_params *VAR_8 = VAR_4;

 for (; VAR_8->mpixelclock != ~0UL; ++VAR_8) {
  if (VAR_7 <= VAR_8->mpixelclock)
   break;
 }

 if (VAR_8->mpixelclock == ~0UL)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_8->opmode_div,
         VAR_1);
 FUNC_0(VAR_5, VAR_8->curr_gmp,
         VAR_2);
 FUNC_0(VAR_5, VAR_8->div, VAR_3);

 return 0;
}
