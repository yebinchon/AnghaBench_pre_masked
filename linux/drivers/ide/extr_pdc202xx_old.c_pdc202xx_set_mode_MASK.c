
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int dn; int dma_mode; scalar_t__ media; } ;
typedef TYPE_2__ ide_drive_t ;
 int const VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int const) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_2->dev);
 u8 VAR_5 = 0x60 + (VAR_3->dn << 2);
 const u8 VAR_6 = VAR_3->dma_mode;

 u8 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 FUNC_1(VAR_4, VAR_5, &VAR_7);
 FUNC_1(VAR_4, VAR_5 + 1, &VAR_8);
 FUNC_1(VAR_4, VAR_5 + 2, &VAR_9);

 switch(VAR_6) {
  case 128:
  case 129: VAR_11 = 0x20; VAR_12 = 0x01; break;
  case 131: VAR_11 = 0x20; VAR_12 = 0x01; break;
  case 130:
  case 132: VAR_11 = 0x40; VAR_12 = 0x02; break;
  case 133:
  case 139: VAR_11 = 0x60; VAR_12 = 0x03; break;
  case 140: VAR_11 = 0x60; VAR_12 = 0x04; break;
  case 141: VAR_11 = 0xE0; VAR_12 = 0x0F; break;
  case 134: VAR_10 = 0x01; VAR_11 = 0x04; break;
  case 135: VAR_10 = 0x02; VAR_11 = 0x06; break;
  case 136: VAR_10 = 0x03; VAR_11 = 0x08; break;
  case 137: VAR_10 = 0x05; VAR_11 = 0x0C; break;
  case 138:
  default: VAR_10 = 0x09; VAR_11 = 0x13; break;
 }

 if (VAR_6 < VAR_0) {




  VAR_7 &= ~0x3f;
  if (FUNC_0(VAR_3, VAR_6 - 138))
   VAR_7 |= 0x20;
  if (VAR_3->media == VAR_1)
   VAR_7 |= 0x10;

  VAR_8 &= ~0x1f;
  FUNC_2(VAR_4, VAR_5, VAR_7 | VAR_10);
  FUNC_2(VAR_4, VAR_5 + 1, VAR_8 | VAR_11);
 } else {

  VAR_8 &= ~0xe0;

  VAR_9 &= ~0x0f;
  FUNC_2(VAR_4, VAR_5 + 1, VAR_8 | VAR_11);
  FUNC_2(VAR_4, VAR_5 + 2, VAR_9 | VAR_12);
 }
}
