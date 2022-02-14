
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts73xx_fpga_priv {int io_base; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fpga_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct fpga_manager* FUNC_3 (struct device*,char*,int *,struct ts73xx_fpga_priv*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct ts73xx_fpga_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct fpga_manager*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct fpga_manager*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct ts73xx_fpga_priv *VAR_6;
 struct fpga_manager *VAR_7;
 struct resource *VAR_8;

 VAR_6 = FUNC_5(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = VAR_5;

 VAR_8 = FUNC_7(VAR_4, VAR_2, 0);
 VAR_6->io_base = FUNC_4(VAR_5, VAR_8);
 if (FUNC_0(VAR_6->io_base)) {
  FUNC_2(VAR_5, "unable to remap registers\n");
  return FUNC_1(VAR_6->io_base);
 }

 VAR_7 = FUNC_3(VAR_5, "TS-73xx FPGA Manager",
       &VAR_3, VAR_6);
 if (!VAR_7)
  return -VAR_0;

 FUNC_8(VAR_4, VAR_7);

 return FUNC_6(VAR_7);
}
