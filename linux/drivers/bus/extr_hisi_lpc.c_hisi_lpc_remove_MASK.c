
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct logic_pio_hwaddr {int dummy; } ;
struct hisi_lpc_dev {struct logic_pio_hwaddr* io_host; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 struct hisi_lpc_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct logic_pio_hwaddr*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct acpi_device *VAR_2 = FUNC_0(VAR_1);
 struct hisi_lpc_dev *VAR_3 = FUNC_1(VAR_1);
 struct logic_pio_hwaddr *VAR_4 = VAR_3->io_host;

 if (VAR_2)
  FUNC_2(VAR_1);
 else
  FUNC_4(VAR_1);

 FUNC_3(VAR_4);

 return 0;
}
