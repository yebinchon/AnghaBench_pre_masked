
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct dsi_data {struct omap_dss_device output; } ;


 int FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(struct dsi_data *VAR_0)
{
 struct omap_dss_device *VAR_1 = &VAR_0->output;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
