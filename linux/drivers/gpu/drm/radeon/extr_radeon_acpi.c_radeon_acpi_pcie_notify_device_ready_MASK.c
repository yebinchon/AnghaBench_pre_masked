
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_object {int dummy; } acpi_object ;
struct TYPE_4__ {int pcie_dev_rdy; } ;
struct radeon_atcs {TYPE_2__ functions; } ;
struct radeon_device {TYPE_1__* pdev; struct radeon_atcs atcs; } ;
typedef int acpi_handle ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (union acpi_object*) ;
 union acpi_object* FUNC_2 (int ,int ,int *) ;

int FUNC_3(struct radeon_device *VAR_3)
{
 acpi_handle VAR_4;
 union acpi_object *VAR_5;
 struct radeon_atcs *VAR_6 = &VAR_3->atcs;


 VAR_4 = FUNC_0(&VAR_3->pdev->dev);
 if (!VAR_4)
  return -VAR_1;

 if (!VAR_6->functions.pcie_dev_rdy)
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_4, VAR_0, ((void*)0));
 if (!VAR_5)
  return -VAR_2;

 FUNC_1(VAR_5);

 return 0;
}
