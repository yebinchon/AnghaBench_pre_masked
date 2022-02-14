
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct dsi_data {int te_enabled; } ;


 struct dsi_data* FUNC_0 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_1(struct omap_dss_device *VAR_0, bool VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_0(VAR_0);

 VAR_2->te_enabled = VAR_1;
 return 0;
}
