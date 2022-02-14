
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dw_hdmi_phy_data {int gen; } ;
struct TYPE_2__ {struct dw_hdmi_phy_data* data; } ;
struct dw_hdmi {int dev; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dw_hdmi*,int) ;
 int FUNC_3 (struct dw_hdmi*,int) ;
 int FUNC_4 (struct dw_hdmi*,int ) ;
 int FUNC_5 (struct dw_hdmi*,int) ;
 int FUNC_6 (struct dw_hdmi*,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct dw_hdmi *VAR_3)
{
 const struct dw_hdmi_phy_data *VAR_4 = VAR_3->phy.data;
 unsigned int VAR_5;
 u8 VAR_6;

 if (VAR_4->gen == 1) {
  FUNC_2(VAR_3, 0);


  FUNC_3(VAR_3, 0);
  FUNC_3(VAR_3, 1);
  return 0;
 }

 FUNC_5(VAR_3, 1);
 FUNC_4(VAR_3, 0);


 for (VAR_5 = 0; VAR_5 < 5; ++VAR_5) {
  VAR_6 = FUNC_6(VAR_3, VAR_1) & VAR_2;
  if (VAR_6)
   break;

  FUNC_7(1000, 2000);
 }

 if (!VAR_6) {
  FUNC_1(VAR_3->dev, "PHY PLL failed to lock\n");
  return -VAR_0;
 }

 FUNC_0(VAR_3->dev, "PHY PLL locked %u iterations\n", VAR_5);
 return 0;
}
