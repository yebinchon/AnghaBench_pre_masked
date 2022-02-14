
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_overlay_notify_data {int overlay; } ;
struct device {int dummy; } ;
struct fpga_region {struct fpga_image_info* info; struct device dev; } ;
struct fpga_image_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fpga_image_info*) ;
 int FUNC_1 (struct fpga_image_info*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct fpga_image_info*) ;
 int FUNC_4 (struct fpga_region*) ;
 struct fpga_image_info* FUNC_5 (struct fpga_region*,int ) ;

__attribute__((used)) static int FUNC_6(struct fpga_region *VAR_1,
        struct of_overlay_notify_data *VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 struct fpga_image_info *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_1, VAR_2->overlay);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);


 if (!VAR_4)
  return 0;

 if (VAR_1->info) {
  FUNC_2(VAR_3, "Region already has overlay applied.\n");
  return -VAR_0;
 }

 VAR_1->info = VAR_4;
 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5) {

  FUNC_3(VAR_4);
  VAR_1->info = ((void*)0);
 }

 return VAR_5;
}
