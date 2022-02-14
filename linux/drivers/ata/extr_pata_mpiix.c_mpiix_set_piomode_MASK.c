
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {struct ata_device* private_data; TYPE_1__* host; } ;
struct ata_device {int pio_mode; scalar_t__ class; int devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_6, struct ata_device *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = VAR_7->pio_mode - VAR_5;
 struct pci_dev *VAR_10 = FUNC_3(VAR_6->host->dev);
 u16 VAR_11;
 static const
 u8 VAR_12[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 FUNC_1(VAR_10, VAR_2, &VAR_11);


 if (VAR_7->class == VAR_0)
  VAR_8 |= VAR_4;
 if (FUNC_0(VAR_7))
  VAR_8 |= VAR_3;
 if (VAR_9 > 1)
  VAR_8 |= VAR_1;


 VAR_11 &= 0xCCEE;
 VAR_11 &= ~(0x07 << (4 * VAR_7->devno));
 VAR_11 |= VAR_8 << (4 * VAR_7->devno);

 VAR_11 |= (VAR_12[VAR_9][0] << 12) | (VAR_12[VAR_9][1] << 8);
 FUNC_2(VAR_10, VAR_2, VAR_11);



 VAR_6->private_data = VAR_7;
}
