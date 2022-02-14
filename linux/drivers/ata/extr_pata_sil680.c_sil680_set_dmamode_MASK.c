
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,unsigned long,int*) ;
 int FUNC_1 (struct pci_dev*,unsigned long,int*) ;
 int FUNC_2 (struct pci_dev*,unsigned long,int) ;
 int FUNC_3 (struct pci_dev*,unsigned long,int) ;
 unsigned long FUNC_4 (struct ata_port*,struct ata_device*,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 static const u8 VAR_4[2][7] = {
  { 0x0C, 0x07, 0x05, 0x04, 0x02, 0x01, 0xFF },
  { 0x0F, 0x0B, 0x07, 0x05, 0x03, 0x02, 0x01 },
 };
 static const u16 VAR_5[3] = { 0x2208, 0x10C2, 0x10C1 };

 struct pci_dev *VAR_6 = FUNC_5(VAR_2->host->dev);
 unsigned long VAR_7 = FUNC_4(VAR_2, VAR_3, 0x08);
 unsigned long VAR_8 = FUNC_4(VAR_2, VAR_3, 0x0C);
 unsigned long VAR_9 = 0x80 + 4 * VAR_2->port_no;
 int VAR_10 = VAR_3->devno * 4;
 u8 VAR_11, VAR_12;
 u16 VAR_13, VAR_14;

 FUNC_0(VAR_6, 0x8A, &VAR_11);
 FUNC_0(VAR_6, VAR_9, &VAR_12);
 FUNC_1(VAR_6, VAR_7, &VAR_13);
 FUNC_1(VAR_6, VAR_8, &VAR_14);


 VAR_14 &= ~0x3F;
 VAR_12 &= ~(0x03 << VAR_10);


 VAR_11 = (VAR_11 & 0x30) ? 1 : 0;

 if (VAR_3->dma_mode >= VAR_1) {
  VAR_13 = 0x10C1;
  VAR_14 |= VAR_4[VAR_11][VAR_3->dma_mode - VAR_1];
  VAR_12 |= (0x03 << VAR_10);
 } else {
  VAR_13 = VAR_5[VAR_3->dma_mode - VAR_0];
  VAR_12 |= (0x02 << VAR_10);
 }
 FUNC_2(VAR_6, VAR_9, VAR_12);
 FUNC_3(VAR_6, VAR_7, VAR_13);
 FUNC_3(VAR_6, VAR_8, VAR_14);
}
