
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_fpga_priv {struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fpga_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct fpga_manager* FUNC_1 (struct device*,char*,int *,struct zynqmp_fpga_priv*) ;
 struct zynqmp_fpga_priv* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct fpga_manager*) ;
 int FUNC_4 (struct platform_device*,struct fpga_manager*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct zynqmp_fpga_priv *VAR_5;
 struct fpga_manager *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = VAR_4;

 VAR_6 = FUNC_1(VAR_4, "Xilinx ZynqMP FPGA Manager",
       &VAR_2, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_6);

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4, "unable to register FPGA manager");
  return VAR_7;
 }

 return 0;
}
