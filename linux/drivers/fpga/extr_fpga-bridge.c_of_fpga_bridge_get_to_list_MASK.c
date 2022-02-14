
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct fpga_image_info {int dummy; } ;
struct fpga_bridge {int node; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct fpga_bridge*) ;
 int FUNC_1 (struct fpga_bridge*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct list_head*) ;
 struct fpga_bridge* FUNC_3 (struct device_node*,struct fpga_image_info*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct device_node *VAR_1,
          struct fpga_image_info *VAR_2,
          struct list_head *VAR_3)
{
 struct fpga_bridge *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(&VAR_0, VAR_5);
 FUNC_2(&VAR_4->node, VAR_3);
 FUNC_5(&VAR_0, VAR_5);

 return 0;
}
