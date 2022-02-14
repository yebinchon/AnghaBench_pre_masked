
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (char*,int ,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_2(VAR_4->dev);
 int VAR_6 = VAR_4->channel ? VAR_0 : VAR_2;
 u8 VAR_7 = VAR_4->channel ? VAR_1 :
        VAR_3;
 u8 VAR_8 = 0;

 (void) FUNC_0(VAR_5, VAR_6, &VAR_8);

 FUNC_1("%s: irq_stat: 0x%02x irq_mask: 0x%02x\n",
   VAR_4->name, VAR_8, VAR_7);

 return (VAR_8 & VAR_7) ? 1 : 0;
}
