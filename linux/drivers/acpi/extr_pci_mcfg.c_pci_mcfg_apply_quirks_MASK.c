
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct resource {scalar_t__ start; } ;
struct pci_ecam_ops {int dummy; } ;
struct mcfg_fixup {struct pci_ecam_ops* ops; struct resource cfgres; } ;
struct acpi_pci_root {TYPE_1__* device; struct resource secondary; int segment; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct mcfg_fixup*) ;
 int FUNC_1 (int *,char*,struct resource*,struct resource*,struct pci_ecam_ops*) ;
 struct mcfg_fixup* VAR_0 ;
 scalar_t__ FUNC_2 (struct mcfg_fixup*,int ,struct resource*) ;

__attribute__((used)) static void FUNC_3(struct acpi_pci_root *VAR_1,
      struct resource *VAR_2,
      struct pci_ecam_ops **VAR_3)
{
}
