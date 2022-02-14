
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct dpi_data {struct omap_dss_device output; } ;
struct device_node {struct dpi_data* data; } ;


 int FUNC_0 (struct omap_dss_device*) ;
 int FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(struct device_node *VAR_0)
{
 struct dpi_data *VAR_1 = VAR_0->data;
 struct omap_dss_device *VAR_2 = &VAR_1->output;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
}
