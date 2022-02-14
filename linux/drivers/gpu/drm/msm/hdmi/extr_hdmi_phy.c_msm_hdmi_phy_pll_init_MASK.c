
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
typedef enum hdmi_phy_type { ____Placeholder_hdmi_phy_type } hdmi_phy_type ;






 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0,
        enum hdmi_phy_type VAR_1)
{
 int VAR_2;

 switch (VAR_1) {
 case 131:
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 130:
  VAR_2 = FUNC_1(VAR_0);
  break;



 case 129:
 case 128:
 default:
  VAR_2 = 0;
  break;
 }

 return VAR_2;
}
