
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int dma_mode; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int) ;
 int FUNC_2 () ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 static const u32 VAR_4[3][3] = {
  { 0x00921250, 0x00911140, 0x00911030 },
  { 0x00932470, 0x00922260, 0x00922140 },
  { 0x009436A1, 0x00933481, 0x00923261 }
 };

 static const u32 VAR_5[3][3] = {
  { 0x00077771, 0x00012121, 0x00002020 },
  { 0x000BBBB2, 0x00024241, 0x00013131 },
  { 0x000FFFF3, 0x00035352, 0x00015151 }
 };

 int VAR_6 = FUNC_2();
 struct pci_dev *VAR_7 = FUNC_3(VAR_2->host->dev);
 unsigned int VAR_8 = 0x40 + 0x10 * VAR_2->port_no;
 int VAR_9 = VAR_3->dma_mode;
 u32 VAR_10;

 if (VAR_9 >= VAR_1)
  VAR_10 = VAR_4[VAR_6][VAR_9 - VAR_1];
 else
  VAR_10 = VAR_5[VAR_6][VAR_9 - VAR_0];

 if (VAR_3->devno == 0) {
  u32 VAR_11;

  FUNC_0(VAR_7, VAR_8 + 4, &VAR_11);
  VAR_11 &= 0x80000000UL;
  VAR_11 |= VAR_10;
  FUNC_1(VAR_7, VAR_8 + 4, VAR_11);
 } else
  FUNC_1(VAR_7, VAR_8 + 12, VAR_10);
}
