
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_dma {struct dma_chan* (* acpi_dma_xlate ) (struct acpi_dma_spec*,struct acpi_dma*) ;int dma_controllers; void* data; struct device* dev; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct acpi_device*,struct acpi_dma*) ;
 struct acpi_dma* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct device *VAR_5,
  struct dma_chan *(*VAR_6)
  (struct acpi_dma_spec *, struct acpi_dma *),
  void *VAR_7)
{
 struct acpi_device *VAR_8;
 struct acpi_dma *VAR_9;

 if (!VAR_5 || !VAR_6)
  return -VAR_0;


 VAR_8 = FUNC_0(VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_5;
 VAR_9->acpi_dma_xlate = VAR_6;
 VAR_9->data = VAR_7;

 FUNC_1(VAR_8, VAR_9);


 FUNC_4(&VAR_4);
 FUNC_3(&VAR_9->dma_controllers, &VAR_3);
 FUNC_5(&VAR_4);

 return 0;
}
