
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cca_seen; unsigned long long coherent_dma; } ;
struct acpi_device {TYPE_1__ flags; int handle; struct acpi_device* parent; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct acpi_device *VAR_1)
{
 unsigned long long VAR_2 = 0;
 acpi_status VAR_3;
 struct acpi_device *VAR_4 = VAR_1->parent;

 if (VAR_4 && VAR_4->flags.cca_seen) {




  VAR_1->flags.cca_seen = 1;
  VAR_2 = VAR_4->flags.coherent_dma;
 } else {
  VAR_3 = FUNC_2(VAR_1->handle, "_CCA",
            ((void*)0), &VAR_2);
  if (FUNC_0(VAR_3))
   VAR_1->flags.cca_seen = 1;
  else if (!FUNC_1(VAR_0))





   VAR_2 = 1;
  else
   FUNC_3(VAR_1->handle,
       "ACPI device is missing _CCA.\n");
 }

 VAR_1->flags.coherent_dma = VAR_2;
}
