
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {char* name; int bus_flags; int owner; int * ops; int of_ports; int dispc_channel; int type; int id; int * dev; } ;
struct sdi_device {TYPE_1__* pdev; struct omap_dss_device output; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct sdi_device *VAR_7)
{
 struct omap_dss_device *VAR_8 = &VAR_7->output;
 int VAR_9;

 VAR_8->dev = &VAR_7->pdev->dev;
 VAR_8->id = VAR_4;
 VAR_8->type = VAR_2;
 VAR_8->name = "sdi.0";
 VAR_8->dispc_channel = VAR_3;

 VAR_8->of_ports = FUNC_0(1);
 VAR_8->ops = &VAR_6;
 VAR_8->owner = VAR_5;
 VAR_8->bus_flags = VAR_0
         | VAR_1;

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_8);

 return 0;
}
