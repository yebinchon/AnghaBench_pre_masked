
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct it821x_dev {scalar_t__ clock_mode; scalar_t__ timing10; } ;
struct ata_port {int port_no; TYPE_1__* host; struct it821x_dev* private_data; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1, struct ata_device *VAR_2, u16 VAR_3)
{
 struct it821x_dev *VAR_4 = VAR_1->private_data;
 struct pci_dev *VAR_5 = FUNC_1(VAR_1->host->dev);
 int VAR_6 = VAR_1->port_no;
 int VAR_7 = VAR_2->devno;
 u8 VAR_8;


 if (VAR_4->clock_mode == VAR_0)
  VAR_8 = VAR_3 >> 8;
 else
  VAR_8 = VAR_3 & 0xFF;
 if (VAR_4->timing10 == 0)
  FUNC_0(VAR_5, 0x56 + 4 * VAR_6 + VAR_7, VAR_8);
 else {

  FUNC_0(VAR_5, 0x56 + 4 * VAR_6, VAR_8);
  FUNC_0(VAR_5, 0x56 + 4 * VAR_6 + 1, VAR_8);
 }
}
