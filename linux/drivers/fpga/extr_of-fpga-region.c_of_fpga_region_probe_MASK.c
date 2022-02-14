
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct fpga_region {int dev; } ;
struct fpga_manager {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fpga_manager*) ;
 int FUNC_1 (struct device*,char*) ;
 struct fpga_region* FUNC_2 (struct device*,struct fpga_manager*,int ) ;
 int FUNC_3 (struct fpga_manager*) ;
 int VAR_2 ;
 int FUNC_4 (struct fpga_region*) ;
 int VAR_3 ;
 struct fpga_manager* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,int ,int *,int *) ;
 int FUNC_7 (struct platform_device*,struct fpga_region*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 struct fpga_region *VAR_7;
 struct fpga_manager *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_8))
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_5, VAR_8, VAR_3);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto eprobe_mgr_put;
 }

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  goto eprobe_mgr_put;

 FUNC_6(VAR_6, VAR_2, ((void*)0), &VAR_7->dev);
 FUNC_7(VAR_4, VAR_7);

 FUNC_1(VAR_5, "FPGA Region probed\n");

 return 0;

eprobe_mgr_put:
 FUNC_3(VAR_8);
 return VAR_9;
}
