
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int pio_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int const) ;
 scalar_t__ FUNC_2 () ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 static const u32 VAR_3[4][5] = {

  { 0x00009172, 0x00012171, 0x00020080, 0x00032010, 0x00040010 },

  { 0xd1329172, 0x71212171, 0x30200080, 0x20102010, 0x00100010 },

  { 0xfaa3f4f3, 0xc23232b2, 0x513101c1, 0x31213121, 0x10211021 },

  { 0xfff4fff4, 0xf35353d3, 0x814102f1, 0x42314231, 0x11311131 }
 };

 struct pci_dev *VAR_4 = FUNC_3(VAR_1->host->dev);
 u32 VAR_5;
 unsigned int VAR_6 = 0x40 + 0x10 * VAR_1->port_no;
 int VAR_7 = VAR_2->pio_mode - VAR_0;

 FUNC_0(VAR_4, VAR_6 + 4, &VAR_5);
 VAR_5 >>= 31;
 VAR_5 += FUNC_2();
 FUNC_1(VAR_4, VAR_6 + 8 * VAR_2->devno,
    VAR_3[VAR_5][VAR_7]);
}
