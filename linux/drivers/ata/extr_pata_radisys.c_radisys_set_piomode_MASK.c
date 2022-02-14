
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {struct ata_device* private_data; TYPE_1__* host; } ;
struct ata_device {unsigned int pio_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 unsigned int VAR_3 = VAR_2->pio_mode - VAR_0;
 struct pci_dev *VAR_4 = FUNC_3(VAR_1->host->dev);
 u16 VAR_5;
 int VAR_6 = 0;
 static const
 u8 VAR_7[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 1 },
       { 2, 2 },
       { 3, 3 }, };

 if (VAR_3 > 0)
  VAR_6 |= 1;
 if (FUNC_0(VAR_2))
  VAR_6 |= 2;

 FUNC_1(VAR_4, 0x40, &VAR_5);



 VAR_5 &= 0xCCCC;
 VAR_5 |= (VAR_6 << (4 * VAR_2->devno));
 VAR_5 |= (VAR_7[VAR_3][0] << 12) |
   (VAR_7[VAR_3][1] << 8);
 FUNC_2(VAR_4, 0x40, VAR_5);


 VAR_1->private_data = VAR_2;
}
