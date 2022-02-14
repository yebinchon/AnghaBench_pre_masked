
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_manager {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct fpga_manager* FUNC_0 (int ) ;
 struct fpga_manager* FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int ,struct device_node*) ;
 int VAR_1 ;

struct fpga_manager *FUNC_3(struct device_node *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_3);
}
