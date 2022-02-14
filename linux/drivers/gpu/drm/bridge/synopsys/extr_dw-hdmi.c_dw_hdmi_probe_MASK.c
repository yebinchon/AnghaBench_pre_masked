
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dw_hdmi_plat_data {int dummy; } ;
struct dw_hdmi {int bridge; } ;


 scalar_t__ FUNC_0 (struct dw_hdmi*) ;
 struct dw_hdmi* FUNC_1 (struct platform_device*,struct dw_hdmi_plat_data const*) ;
 int FUNC_2 (int *) ;

struct dw_hdmi *FUNC_3(struct platform_device *VAR_0,
         const struct dw_hdmi_plat_data *VAR_1)
{
 struct dw_hdmi *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return VAR_2;

 FUNC_2(&VAR_2->bridge);

 return VAR_2;
}
