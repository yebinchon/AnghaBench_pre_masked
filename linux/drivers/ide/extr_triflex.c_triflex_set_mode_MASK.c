
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; int dma_mode; } ;
typedef TYPE_2__ ide_drive_t ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_0, ide_drive_t *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_2(VAR_0->dev);
 u32 VAR_3 = 0;
 u16 VAR_4 = 0;
 u8 VAR_5 = VAR_0->channel ? 0x74 : 0x70, VAR_6 = VAR_1->dn & 1;

 FUNC_0(VAR_2, VAR_5, &VAR_3);

 switch (VAR_1->dma_mode) {
  case 136:
   VAR_4 = 0x0103;
   break;
  case 137:
   VAR_4 = 0x0203;
   break;
  case 138:
   VAR_4 = 0x0808;
   break;
  case 128:
  case 129:
  case 130:
   VAR_4 = 0x0f0f;
   break;
  case 131:
   VAR_4 = 0x0202;
   break;
  case 132:
   VAR_4 = 0x0204;
   break;
  case 133:
   VAR_4 = 0x0404;
   break;
  case 134:
   VAR_4 = 0x0508;
   break;
  case 135:
   VAR_4 = 0x0808;
   break;
 }

 VAR_3 &= ~(0xFFFF << (16 * VAR_6));
 VAR_3 |= (VAR_4 << (16 * VAR_6));

 FUNC_1(VAR_2, VAR_5, VAR_3);
}
