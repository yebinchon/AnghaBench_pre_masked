
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fpga_region {int compat_id; struct dfl_fme_region_pdata* priv; } ;
struct fpga_manager {int compat_id; } ;
struct dfl_fme_region_pdata {TYPE_1__* mgr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fpga_manager*) ;
 int FUNC_1 (struct device*,char*) ;
 struct dfl_fme_region_pdata* FUNC_2 (struct device*) ;
 struct fpga_region* FUNC_3 (struct device*,struct fpga_manager*,int ) ;
 int VAR_2 ;
 struct fpga_manager* FUNC_4 (int *) ;
 int FUNC_5 (struct fpga_manager*) ;
 int FUNC_6 (struct fpga_region*) ;
 int FUNC_7 (struct platform_device*,struct fpga_region*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct dfl_fme_region_pdata *VAR_4 = FUNC_2(&VAR_3->dev);
 struct device *VAR_5 = &VAR_3->dev;
 struct fpga_region *VAR_6;
 struct fpga_manager *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(&VAR_4->mgr->dev);
 if (FUNC_0(VAR_7))
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_5, VAR_7, VAR_2);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto eprobe_mgr_put;
 }

 VAR_6->priv = VAR_4;
 VAR_6->compat_id = VAR_7->compat_id;
 FUNC_7(VAR_3, VAR_6);

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  goto eprobe_mgr_put;

 FUNC_1(VAR_5, "DFL FME FPGA Region probed\n");

 return 0;

eprobe_mgr_put:
 FUNC_5(VAR_7);
 return VAR_8;
}
