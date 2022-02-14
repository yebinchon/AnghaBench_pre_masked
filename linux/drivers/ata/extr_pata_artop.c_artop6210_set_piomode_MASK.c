
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_1->host->dev);
 int VAR_4 = VAR_2->devno + 2 * VAR_1->port_no;
 u8 VAR_5;

 FUNC_0(VAR_1, VAR_2, VAR_2->pio_mode - VAR_0);


 FUNC_1(VAR_3, 0x54, &VAR_5);
 VAR_5 &= ~(3 << (2 * VAR_4));
 FUNC_2(VAR_3, 0x54, VAR_5);
}
