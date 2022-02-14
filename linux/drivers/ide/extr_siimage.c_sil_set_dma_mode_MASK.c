
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_7__ {int host_flags; scalar_t__ channel; scalar_t__ hwif_data; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {int dn; int dma_mode; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 unsigned long FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct pci_dev*,unsigned long) ;
 int FUNC_3 (struct pci_dev*,unsigned long) ;
 int FUNC_4 (struct pci_dev*,int,unsigned long) ;
 int FUNC_5 (struct pci_dev*,int,unsigned long) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ide_hwif_t *VAR_3, ide_drive_t *VAR_4)
{
 static const u8 VAR_5[] = { 0x0F, 0x0B, 0x07, 0x05, 0x03, 0x02, 0x01 };
 static const u8 VAR_6[] = { 0x0C, 0x07, 0x05, 0x04, 0x02, 0x01 };
 static const u16 VAR_7[] = { 0x2208, 0x10C2, 0x10C1 };

 struct pci_dev *VAR_8 = FUNC_6(VAR_3->dev);
 unsigned long VAR_9 = (unsigned long)VAR_3->hwif_data;
 u16 VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12 = 0, VAR_13 = VAR_4->dn & 1;
 u8 VAR_14 = (VAR_3->host_flags & VAR_0) ? 1 : 0;
 u8 VAR_15 = 0, VAR_16 = VAR_3->channel ? (VAR_14 ? 0xF4 : 0x84)
      : (VAR_14 ? 0xB4 : 0x80);
 unsigned long VAR_17 = FUNC_1(VAR_4, 0x08);
 unsigned long VAR_18 = FUNC_1(VAR_4, 0x0C);
 const u8 VAR_19 = VAR_4->dma_mode;

 VAR_15 = FUNC_3 (VAR_8, VAR_9 + (VAR_14 ? 0x4A : 0x8A));
 VAR_12 = FUNC_3 (VAR_8, VAR_9 + VAR_16);
 VAR_11 = FUNC_2(VAR_8, VAR_17);
 VAR_10 = FUNC_2(VAR_8, VAR_18);

 VAR_12 &= ~(VAR_13 ? 0x30 : 0x03);
 VAR_10 &= ~0x3F;
 VAR_15 = ((VAR_15 & 0x30) == 0x00) ? 0 : 1;

 VAR_15 = FUNC_0(VAR_3) ? 1 : VAR_15;

 if (VAR_19 >= VAR_2) {
  VAR_11 = VAR_7[2];
  VAR_10 |= VAR_15 ? VAR_5[VAR_19 - VAR_2] :
    VAR_6[VAR_19 - VAR_2];
  VAR_12 |= VAR_13 ? 0x30 : 0x03;
 } else {
  VAR_11 = VAR_7[VAR_19 - VAR_1];
  VAR_12 |= VAR_13 ? 0x20 : 0x02;
 }

 FUNC_5 (VAR_8, VAR_12, VAR_9 + VAR_16);
 FUNC_4(VAR_8, VAR_11, VAR_17);
 FUNC_4(VAR_8, VAR_10, VAR_18);
}
