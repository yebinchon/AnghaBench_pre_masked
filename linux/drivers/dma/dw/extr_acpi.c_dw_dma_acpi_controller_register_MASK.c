
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct dw_dma {TYPE_1__ dma; } ;
struct device {int dummy; } ;
struct acpi_dma_filter_info {int filter_fn; int dma_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,struct acpi_dma_filter_info*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct acpi_dma_filter_info* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct device*) ;

void FUNC_6(struct dw_dma *VAR_4)
{
 struct device *VAR_5 = VAR_4->dma.dev;
 struct acpi_dma_filter_info *VAR_6;
 int VAR_7;

 if (!FUNC_5(VAR_5))
  return;

 VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return;

 FUNC_4(VAR_6->dma_cap);
 FUNC_3(VAR_0, VAR_6->dma_cap);
 VAR_6->filter_fn = VAR_3;

 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_6);
 if (VAR_7)
  FUNC_1(VAR_5, "could not register acpi_dma_controller\n");
}
