
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_manager {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct fpga_manager* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 struct fpga_manager* FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct device_node*,char*,int ) ;

__attribute__((used)) static struct fpga_manager *FUNC_7(struct device_node *VAR_1)
{
 struct device_node *VAR_2;
 struct fpga_manager *VAR_3;

 FUNC_4(VAR_1);
 while (VAR_1) {
  if (FUNC_1(VAR_1, "fpga-region")) {
   VAR_2 = FUNC_6(VAR_1, "fpga-mgr", 0);
   if (VAR_2) {
    VAR_3 = FUNC_2(VAR_2);
    FUNC_5(VAR_2);
    FUNC_5(VAR_1);
    return VAR_3;
   }
  }
  VAR_1 = FUNC_3(VAR_1);
 }
 FUNC_5(VAR_1);

 return FUNC_0(-VAR_0);
}
