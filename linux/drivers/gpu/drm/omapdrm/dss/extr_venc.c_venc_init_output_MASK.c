
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {char* name; int ops_flags; int of_ports; int owner; int * ops; int dispc_channel; int type; int id; int * dev; } ;
struct venc_device {TYPE_1__* pdev; struct omap_dss_device output; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct omap_dss_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct venc_device *VAR_6)
{
 struct omap_dss_device *VAR_7 = &VAR_6->output;
 int VAR_8;

 VAR_7->dev = &VAR_6->pdev->dev;
 VAR_7->id = VAR_3;
 VAR_7->type = VAR_0;
 VAR_7->name = "venc.0";
 VAR_7->dispc_channel = VAR_1;
 VAR_7->ops = &VAR_5;
 VAR_7->owner = VAR_4;
 VAR_7->of_ports = FUNC_0(0);
 VAR_7->ops_flags = VAR_2;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(VAR_7);

 return 0;
}
