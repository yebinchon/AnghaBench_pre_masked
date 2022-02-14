
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dw_hdmi_phy_data {int gen; } ;
struct TYPE_2__ {struct dw_hdmi_phy_data* data; } ;
struct dw_hdmi {int dev; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dw_hdmi*,int) ;
 int FUNC_3 (struct dw_hdmi*,int ) ;
 int FUNC_4 (struct dw_hdmi*,int) ;
 int FUNC_5 (struct dw_hdmi*,int ) ;
 int FUNC_6 (struct dw_hdmi*,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct dw_hdmi *VAR_2)
{
 const struct dw_hdmi_phy_data *VAR_3 = VAR_2->phy.data;
 unsigned int VAR_4;
 u16 VAR_5;

 if (VAR_3->gen == 1) {
  FUNC_3(VAR_2, 0);
  FUNC_2(VAR_2, 1);
  return;
 }

 FUNC_5(VAR_2, 0);





 for (VAR_4 = 0; VAR_4 < 5; ++VAR_4) {
  VAR_5 = FUNC_6(VAR_2, VAR_0);
  if (!(VAR_5 & VAR_1))
   break;

  FUNC_7(1000, 2000);
 }

 if (VAR_5 & VAR_1)
  FUNC_1(VAR_2->dev, "PHY failed to power down\n");
 else
  FUNC_0(VAR_2->dev, "PHY powered down in %u iterations\n", VAR_4);

 FUNC_4(VAR_2, 1);
}
