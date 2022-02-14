
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlnx_pr_decoupler_data {int clk; int io_base; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct fpga_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 struct fpga_bridge* FUNC_7 (int *,char*,int *,struct xlnx_pr_decoupler_data*) ;
 int FUNC_8 (int *,struct resource*) ;
 struct xlnx_pr_decoupler_data* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (struct fpga_bridge*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct fpga_bridge*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct xlnx_pr_decoupler_data *VAR_5;
 struct fpga_bridge *VAR_6;
 int VAR_7;
 struct resource *VAR_8;

 VAR_5 = FUNC_9(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_11(VAR_4, VAR_2, 0);
 VAR_5->io_base = FUNC_8(&VAR_4->dev, VAR_8);
 if (FUNC_0(VAR_5->io_base))
  return FUNC_1(VAR_5->io_base);

 VAR_5->clk = FUNC_6(&VAR_4->dev, "aclk");
 if (FUNC_0(VAR_5->clk)) {
  FUNC_5(&VAR_4->dev, "input clock not found\n");
  return FUNC_1(VAR_5->clk);
 }

 VAR_7 = FUNC_3(VAR_5->clk);
 if (VAR_7) {
  FUNC_5(&VAR_4->dev, "unable to enable clock\n");
  return VAR_7;
 }

 FUNC_2(VAR_5->clk);

 VAR_6 = FUNC_7(&VAR_4->dev, "Xilinx PR Decoupler",
         &VAR_3, VAR_5);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err_clk;
 }

 FUNC_12(VAR_4, VAR_6);

 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7) {
  FUNC_5(&VAR_4->dev, "unable to register Xilinx PR Decoupler");
  goto err_clk;
 }

 return 0;

err_clk:
 FUNC_4(VAR_5->clk);

 return VAR_7;
}
