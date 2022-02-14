
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_dss_device {char* name; int owner; int * ops; int of_ports; int dispc_channel; int type; int id; int * dev; } ;
struct dpi_data {int id; TYPE_1__* pdev; struct omap_dss_device output; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dpi_data*) ;
 int VAR_3 ;
 int FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_5(struct dpi_data *VAR_4, struct device_node *VAR_5)
{
 struct omap_dss_device *VAR_6 = &VAR_4->output;
 u32 VAR_7 = 0;
 int VAR_8;

 FUNC_2(VAR_5, "reg", &VAR_7);
 VAR_4->id = VAR_7 <= 2 ? VAR_7 : 0;

 switch (VAR_7) {
 case 2:
  VAR_6->name = "dpi.2";
  break;
 case 1:
  VAR_6->name = "dpi.1";
  break;
 case 0:
 default:
  VAR_6->name = "dpi.0";
  break;
 }

 VAR_6->dev = &VAR_4->pdev->dev;
 VAR_6->id = VAR_1;
 VAR_6->type = VAR_0;
 VAR_6->dispc_channel = FUNC_1(VAR_4);
 VAR_6->of_ports = FUNC_0(VAR_7);
 VAR_6->ops = &VAR_3;
 VAR_6->owner = VAR_2;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(VAR_6);

 return 0;
}
