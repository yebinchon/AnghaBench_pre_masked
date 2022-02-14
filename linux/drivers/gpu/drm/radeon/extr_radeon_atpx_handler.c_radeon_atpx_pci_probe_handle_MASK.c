
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
typedef int acpi_status ;
typedef void* acpi_handle ;
struct TYPE_3__ {void* handle; } ;
struct TYPE_4__ {TYPE_1__ atpx; void* dhandle; } ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (void*,char*,void**) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static bool FUNC_3(struct pci_dev *VAR_1)
{
 acpi_handle VAR_2, VAR_3;
 acpi_status VAR_4;

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_2(VAR_2, "ATPX", &VAR_3);
 if (FUNC_0(VAR_4))
  return 0;

 VAR_0.dhandle = VAR_2;
 VAR_0.atpx.handle = VAR_3;
 return 1;
}
