
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int name; scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (char*,int ,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(ide_hwif_t *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_2->dev);
 unsigned long VAR_4 = FUNC_1(VAR_3, 4);
 u8 VAR_5 = VAR_2->channel ? VAR_1 :
        VAR_0;
 u8 VAR_6 = FUNC_0(VAR_4 + 1);

 FUNC_2("%s: mrdmode: 0x%02x irq_mask: 0x%02x\n",
   VAR_2->name, VAR_6, VAR_5);

 return (VAR_6 & VAR_5) ? 1 : 0;
}
