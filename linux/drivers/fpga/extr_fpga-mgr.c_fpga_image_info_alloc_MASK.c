
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_image_info {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct fpga_image_info* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

struct fpga_image_info *FUNC_3(struct device *VAR_1)
{
 struct fpga_image_info *VAR_2;

 FUNC_1(VAR_1);

 VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 VAR_2->dev = VAR_1;

 return VAR_2;
}
