
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {scalar_t__ enable_gpio; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->enable_gpio)
  FUNC_0(VAR_1->enable_gpio, 0);
}
