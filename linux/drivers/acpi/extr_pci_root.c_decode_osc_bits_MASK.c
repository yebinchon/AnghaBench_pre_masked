
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_osc_bit_struct {int bit; int desc; } ;
struct acpi_pci_root {TYPE_1__* device; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,int,char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct acpi_pci_root *VAR_0, char *VAR_1, u32 VAR_2,
       struct pci_osc_bit_struct *VAR_3, int VAR_4)
{
 char VAR_5[80];
 int VAR_6, VAR_7 = 0;
 struct pci_osc_bit_struct *VAR_8;

 VAR_5[0] = '\0';
 for (VAR_6 = 0, VAR_8 = VAR_3; VAR_6 < VAR_4; VAR_6++, VAR_8++)
  if (VAR_2 & VAR_8->bit)
   VAR_7 += FUNC_1(VAR_5 + VAR_7, sizeof(VAR_5) - VAR_7, "%s%s",
     VAR_7 ? " " : "", VAR_8->desc);

 FUNC_0(&VAR_0->device->dev, "_OSC: %s [%s]\n", VAR_1, VAR_5);
}
