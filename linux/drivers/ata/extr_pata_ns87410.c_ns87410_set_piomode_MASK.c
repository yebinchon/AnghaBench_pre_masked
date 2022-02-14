
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct ata_timing {size_t active; size_t setup; size_t recover; } ;
struct ata_port {int port_no; struct ata_device* private_data; TYPE_1__* host; } ;
struct ata_device {int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 void* FUNC_2 (size_t,int,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_6(VAR_0->host->dev);
 int VAR_3 = 0x40 + 4 * VAR_0->port_no;
 u8 VAR_4, VAR_5;
 struct ata_timing VAR_6;

 static const u8 VAR_7[15] = {
  0, 1, 2, 3, 4,
  5, 5, 6, 6, 6,
  6, 7, 7, 7, 7
 };

 static const u8 VAR_8[12] = {
  0, 1, 2, 3, 4, 5, 6, 6, 7, 7, 7, 7
 };

 FUNC_4(VAR_2, VAR_3 + 3, &VAR_5);

 if (FUNC_0(VAR_1))
  VAR_5 |= 0x04;
 else
  VAR_5 &= ~0x04;

 if (FUNC_1(VAR_1, VAR_1->pio_mode, &VAR_6, 30303, 1) < 0) {
  FUNC_3(&VAR_2->dev, "unknown mode %d\n", VAR_1->pio_mode);
  return;
 }

 VAR_6.active = FUNC_2(VAR_6.active, 2, 16) - 2;
 VAR_6.setup = FUNC_2(VAR_6.setup, 1, 4) - 1;
 VAR_6.recover = FUNC_2(VAR_6.recover, 1, 12) - 1;

 VAR_4 = (VAR_6.setup << 6) | (VAR_8[VAR_6.recover] << 3) | VAR_7[VAR_6.active];

 FUNC_5(VAR_2, VAR_3, VAR_4);
 FUNC_5(VAR_2, VAR_3 + 3, VAR_5);


 VAR_0->private_data = VAR_1;
}
