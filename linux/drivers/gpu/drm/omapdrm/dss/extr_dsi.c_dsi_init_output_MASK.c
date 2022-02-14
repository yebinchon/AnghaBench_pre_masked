
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {char* name; int bus_flags; int of_ports; int owner; int * ops; int dispc_channel; int type; int id; int dev; } ;
struct dsi_data {scalar_t__ module_id; int dev; struct omap_dss_device output; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dsi_data*) ;
 int VAR_7 ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_4(struct dsi_data *VAR_8)
{
 struct omap_dss_device *VAR_9 = &VAR_8->output;
 int VAR_10;

 VAR_9->dev = VAR_8->dev;
 VAR_9->id = VAR_8->module_id == 0 ?
   VAR_4 : VAR_5;

 VAR_9->type = VAR_3;
 VAR_9->name = VAR_8->module_id == 0 ? "dsi.0" : "dsi.1";
 VAR_9->dispc_channel = FUNC_1(VAR_8);
 VAR_9->ops = &VAR_7;
 VAR_9->owner = VAR_6;
 VAR_9->of_ports = FUNC_0(0);
 VAR_9->bus_flags = VAR_1
         | VAR_0
         | VAR_2;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(VAR_9);

 return 0;
}
