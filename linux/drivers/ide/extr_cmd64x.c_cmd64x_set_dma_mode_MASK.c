
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int dn; int dma_mode; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_2->dev);
 u8 VAR_5 = VAR_3->dn & 0x01;
 u8 VAR_6 = 0, VAR_7 = VAR_2->channel ? VAR_1 : VAR_0;
 const u8 VAR_8 = VAR_3->dma_mode;

 FUNC_1(VAR_4, VAR_7, &VAR_6);
 VAR_6 &= ~(VAR_5 ? 0xCA : 0x35);

 switch(VAR_8) {
 case 128:
  VAR_6 |= VAR_5 ? 0x0A : 0x05;
  break;
 case 129:
  VAR_6 |= VAR_5 ? 0x4A : 0x15;
  break;
 case 130:
  VAR_6 |= VAR_5 ? 0x8A : 0x25;
  break;
 case 131:
  VAR_6 |= VAR_5 ? 0x42 : 0x11;
  break;
 case 132:
  VAR_6 |= VAR_5 ? 0x82 : 0x21;
  break;
 case 133:
  VAR_6 |= VAR_5 ? 0xC2 : 0x31;
  break;
 case 134:
 case 135:
 case 136:
  FUNC_0(VAR_3, VAR_8);
  break;
 }

 FUNC_2(VAR_4, VAR_7, VAR_6);
}
