
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_wp_data {int base; } ;
typedef enum hdmi_phy_pwr { ____Placeholder_hdmi_phy_pwr } hdmi_phy_pwr ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int,int,int) ;

int FUNC_4(struct hdmi_wp_data *VAR_2, enum hdmi_phy_pwr VAR_3)
{

 if (FUNC_2(VAR_2->base, VAR_1, 5, 4) == VAR_3)
  return 0;


 FUNC_1(VAR_2->base, VAR_1, VAR_3, 7, 6);


 if (FUNC_3(VAR_2->base, VAR_1, 5, 4, VAR_3)
   != VAR_3) {
  FUNC_0("Failed to set PHY power mode to %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
