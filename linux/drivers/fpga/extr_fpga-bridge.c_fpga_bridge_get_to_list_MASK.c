
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct fpga_image_info {int dummy; } ;
struct fpga_bridge {int node; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct fpga_bridge*) ;
 int FUNC_1 (struct fpga_bridge*) ;
 int VAR_0 ;
 struct fpga_bridge* FUNC_2 (struct device*,struct fpga_image_info*) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct device *VAR_1,
       struct fpga_image_info *VAR_2,
       struct list_head *VAR_3)
{
 struct fpga_bridge *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(&VAR_0, VAR_5);
 FUNC_3(&VAR_4->node, VAR_3);
 FUNC_5(&VAR_0, VAR_5);

 return 0;
}
