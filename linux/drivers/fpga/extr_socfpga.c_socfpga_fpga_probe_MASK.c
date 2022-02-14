
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socfpga_fpga_priv {scalar_t__ irq; void* fpga_data_addr; void* fpga_base_addr; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fpga_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*) ;
 struct fpga_manager* FUNC_3 (struct device*,char*,int *,struct socfpga_fpga_priv*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 struct socfpga_fpga_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,struct socfpga_fpga_priv*) ;
 int FUNC_7 (struct fpga_manager*) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct fpga_manager*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct socfpga_fpga_priv *VAR_7;
 struct fpga_manager *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_9(VAR_5, VAR_2, 0);
 VAR_7->fpga_base_addr = FUNC_4(VAR_6, VAR_9);
 if (FUNC_0(VAR_7->fpga_base_addr))
  return FUNC_1(VAR_7->fpga_base_addr);

 VAR_9 = FUNC_9(VAR_5, VAR_2, 1);
 VAR_7->fpga_data_addr = FUNC_4(VAR_6, VAR_9);
 if (FUNC_0(VAR_7->fpga_data_addr))
  return FUNC_1(VAR_7->fpga_data_addr);

 VAR_7->irq = FUNC_8(VAR_5, 0);
 if (VAR_7->irq < 0)
  return VAR_7->irq;

 VAR_10 = FUNC_6(VAR_6, VAR_7->irq, VAR_3, 0,
          FUNC_2(VAR_6), VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_3(VAR_6, "Altera SOCFPGA FPGA Manager",
       &VAR_4, VAR_7);
 if (!VAR_8)
  return -VAR_0;

 FUNC_10(VAR_5, VAR_8);

 return FUNC_7(VAR_8);
}
