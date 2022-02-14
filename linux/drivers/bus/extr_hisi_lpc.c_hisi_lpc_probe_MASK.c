
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; int fwnode; } ;
struct platform_device {struct device dev; } ;
struct logic_pio_hwaddr {scalar_t__ io_start; scalar_t__ size; int * ops; struct hisi_lpc_dev* hostdata; int flags; int fwnode; } ;
struct hisi_lpc_dev {struct logic_pio_hwaddr* io_host; int membase; int cycle_lock; } ;
struct acpi_device {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct device*,struct hisi_lpc_dev*) ;
 int FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*) ;
 int VAR_5 ;
 int FUNC_9 (struct logic_pio_hwaddr*) ;
 int FUNC_10 (struct logic_pio_hwaddr*) ;
 int FUNC_11 (int ,int *,int *,struct device*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct acpi_device *VAR_8 = FUNC_0(VAR_7);
 struct logic_pio_hwaddr *VAR_9;
 struct hisi_lpc_dev *VAR_10;
 resource_size_t VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_7(VAR_7, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_13(&VAR_10->cycle_lock);

 VAR_12 = FUNC_12(VAR_6, VAR_2, 0);
 VAR_10->membase = FUNC_6(VAR_7, VAR_12);
 if (FUNC_1(VAR_10->membase))
  return FUNC_2(VAR_10->membase);

 VAR_9 = FUNC_7(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->fwnode = VAR_7->fwnode;
 VAR_9->flags = VAR_3;
 VAR_9->size = VAR_4;
 VAR_9->hostdata = VAR_10;
 VAR_9->ops = &VAR_5;
 VAR_10->io_host = VAR_9;

 VAR_13 = FUNC_9(VAR_9);
 if (VAR_13) {
  FUNC_3(VAR_7, "register IO range failed (%d)!\n", VAR_13);
  return VAR_13;
 }


 if (VAR_8)
  VAR_13 = FUNC_8(VAR_7);
 else
  VAR_13 = FUNC_11(VAR_7->of_node, ((void*)0), ((void*)0), VAR_7);
 if (VAR_13) {
  FUNC_10(VAR_9);
  return VAR_13;
 }

 FUNC_5(VAR_7, VAR_10);

 VAR_11 = VAR_10->io_host->io_start + VAR_10->io_host->size;
 FUNC_4(VAR_7, "registered range [%pa - %pa]\n",
   &VAR_10->io_host->io_start, &VAR_11);

 return VAR_13;
}
