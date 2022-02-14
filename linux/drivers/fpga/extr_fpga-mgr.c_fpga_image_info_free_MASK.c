
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_image_info {struct fpga_image_info* firmware_name; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct fpga_image_info*) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct fpga_image_info *VAR_0)
{
 struct device *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->dev;
 if (VAR_0->firmware_name)
  FUNC_0(VAR_1, VAR_0->firmware_name);

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1);
}
