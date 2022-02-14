
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {TYPE_1__* bus; } ;
struct grpci2_priv {int* irq_map; } ;
struct TYPE_2__ {struct grpci2_priv* sysdata; } ;



__attribute__((used)) static int FUNC_0(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct grpci2_priv *VAR_3 = VAR_0->bus->sysdata;
 int VAR_4;


 VAR_4 = VAR_1 & 0x3;
 VAR_2 = ((VAR_2 - 1) + VAR_4) & 0x3;

 return VAR_3->irq_map[VAR_2];
}
