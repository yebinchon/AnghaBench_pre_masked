
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_table_header {int dummy; } ;
struct TYPE_2__ {int length; } ;
struct acpi_table_csrt {TYPE_1__ header; } ;
struct acpi_dma {int dummy; } ;
struct acpi_device {int dev; } ;
struct acpi_csrt_group {int length; } ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct acpi_csrt_group*,struct acpi_device*,struct acpi_dma*) ;
 scalar_t__ FUNC_2 (int ,int ,struct acpi_table_header**) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(struct acpi_device *VAR_2, struct acpi_dma *VAR_3)
{
 struct acpi_csrt_group *VAR_4, *VAR_5;
 struct acpi_table_csrt *VAR_6;
 acpi_status VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_0, 0,
    (struct acpi_table_header **)&VAR_6);
 if (FUNC_0(VAR_7)) {
  if (VAR_7 != VAR_1)
   FUNC_3(&VAR_2->dev, "failed to get the CSRT table\n");
  return;
 }

 VAR_4 = (struct acpi_csrt_group *)(VAR_6 + 1);
 VAR_5 = (struct acpi_csrt_group *)((void *)VAR_6 + VAR_6->header.length);

 while (VAR_4 < VAR_5) {
  VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_3);
  if (VAR_8 < 0) {
   FUNC_3(&VAR_2->dev,
     "error in parsing resource group\n");
   return;
  }

  VAR_4 = (struct acpi_csrt_group *)((void *)VAR_4 + VAR_4->length);
 }
}
