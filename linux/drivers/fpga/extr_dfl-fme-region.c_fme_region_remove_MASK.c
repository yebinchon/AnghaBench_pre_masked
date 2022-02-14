
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fpga_region {struct fpga_manager* mgr; } ;
struct fpga_manager {int dummy; } ;


 int FUNC_0 (struct fpga_manager*) ;
 int FUNC_1 (struct fpga_region*) ;
 struct fpga_region* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct fpga_region *VAR_1 = FUNC_2(VAR_0);
 struct fpga_manager *VAR_2 = VAR_1->mgr;

 FUNC_1(VAR_1);
 FUNC_0(VAR_2);

 return 0;
}
