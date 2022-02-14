
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_fpga_priv {int clk; } ;
struct platform_device {int dummy; } ;
struct fpga_manager {struct zynq_fpga_priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fpga_manager*) ;
 struct fpga_manager* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct zynq_fpga_priv *VAR_1;
 struct fpga_manager *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = VAR_2->priv;

 FUNC_1(VAR_2);

 FUNC_0(VAR_1->clk);

 return 0;
}
