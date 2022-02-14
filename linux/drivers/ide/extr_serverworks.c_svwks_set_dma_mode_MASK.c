
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dma_mode; int dn; } ;
typedef TYPE_2__ ide_drive_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int const,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 static const u8 VAR_4[] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05 };
 static const u8 VAR_5[] = { 0x77, 0x21, 0x20 };
 static const u8 VAR_6[] = { 0x45, 0x44, 0x47, 0x46 };

 struct pci_dev *VAR_7 = FUNC_2(VAR_2->dev);
 const u8 VAR_8 = VAR_3->dma_mode;
 u8 VAR_9 = VAR_3->dn & 1;

 u8 VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 FUNC_0(VAR_7, (0x56|VAR_2->channel), &VAR_11);
 FUNC_0(VAR_7, 0x54, &VAR_10);

 VAR_11 &= ~(0x0F << (4*VAR_9));
 VAR_10 &= ~(0x01 << VAR_3->dn);

 if (VAR_8 >= VAR_1) {
  VAR_12 |= VAR_5[2];
  VAR_11 |= (VAR_4[VAR_8 - VAR_1] << (4 * VAR_9));
  VAR_10 |= (0x01 << VAR_3->dn);
 } else if (VAR_8 >= VAR_0)
  VAR_12 |= VAR_5[VAR_8 - VAR_0];

 FUNC_1(VAR_7, VAR_6[VAR_3->dn], VAR_12);
 FUNC_1(VAR_7, (0x56|VAR_2->channel), VAR_11);
 FUNC_1(VAR_7, 0x54, VAR_10);
}
