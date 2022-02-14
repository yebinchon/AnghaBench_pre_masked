
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ coherent_dma; } ;
struct acpi_device {TYPE_1__ flags; } ;
typedef enum dev_dma_attr { ____Placeholder_dev_dma_attr } dev_dma_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_device*) ;

enum dev_dma_attr FUNC_1(struct acpi_device *VAR_3)
{
 if (!FUNC_0(VAR_3))
  return VAR_2;

 if (VAR_3->flags.coherent_dma)
  return VAR_0;
 else
  return VAR_1;
}
