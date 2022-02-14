
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct zpodd {int from_notify; } ;
struct device {int dummy; } ;
struct ata_device {TYPE_1__* sdev; struct zpodd* zpodd; } ;
typedef int acpi_handle ;
struct TYPE_2__ {struct device sdev_gendev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(acpi_handle VAR_1, u32 VAR_2, void *VAR_3)
{
 struct ata_device *VAR_4 = VAR_3;
 struct zpodd *VAR_5 = VAR_4->zpodd;
 struct device *VAR_6 = &VAR_4->sdev->sdev_gendev;

 if (VAR_2 == VAR_0 && FUNC_1(VAR_6)) {
  VAR_5->from_notify = 1;
  FUNC_0(VAR_6);
 }
}
