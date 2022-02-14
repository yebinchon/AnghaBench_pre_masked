
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fpga_bridge {struct altera_hps2fpga_data* priv; } ;
struct altera_hps2fpga_data {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fpga_bridge*) ;
 struct fpga_bridge* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct fpga_bridge *VAR_1 = FUNC_2(VAR_0);
 struct altera_hps2fpga_data *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_1);

 FUNC_0(VAR_2->clk);

 return 0;
}
