
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; scalar_t__ udma_mask; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ class; scalar_t__ pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,unsigned int,int) ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_3, struct ata_device *VAR_4,
        u8 VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_7(VAR_3->host->dev);
 unsigned long VAR_7;
 unsigned int VAR_8 = (VAR_4->devno != 0);
 unsigned int VAR_9= VAR_3->port_no ? 0x42 : 0x40;
 unsigned int VAR_10 = 0x44;
 u16 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 int VAR_14 = 0;






 static const
 u8 VAR_15[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 if (VAR_5 >= 2)
  VAR_14 |= 1;
 if (FUNC_0(VAR_4))
  VAR_14 |= 2;

 if (VAR_4->class == VAR_0)
  VAR_14 |= 4;




 if (VAR_4->pio_mode < VAR_1 + VAR_5)

  VAR_14 |= 8;

 FUNC_5(&VAR_2, VAR_7);





 FUNC_2(VAR_6, VAR_9, &VAR_11);
 if (VAR_8) {

  VAR_11 &= 0xff0f;

  VAR_11 |= (VAR_14 << 4);
  FUNC_1(VAR_6, VAR_10, &VAR_12);
  VAR_12 &= (VAR_3->port_no ? 0x0f : 0xf0);

  VAR_12 |= ((VAR_15[VAR_5][0] << 2) | VAR_15[VAR_5][1])
      << (VAR_3->port_no ? 4 : 0);
 } else {

  VAR_11 &= 0xccf0;

  VAR_11 |= VAR_14;

  VAR_11 |=
   (VAR_15[VAR_5][0] << 12) |
   (VAR_15[VAR_5][1] << 8);
 }


 VAR_11 |= 0x4000;
 FUNC_4(VAR_6, VAR_9, VAR_11);
 if (VAR_8)
  FUNC_3(VAR_6, VAR_10, VAR_12);




 if (VAR_3->udma_mask) {
  FUNC_1(VAR_6, 0x48, &VAR_13);
  VAR_13 &= ~(1 << (2 * VAR_3->port_no + VAR_4->devno));
  FUNC_3(VAR_6, 0x48, VAR_13);
 }

 FUNC_6(&VAR_2, VAR_7);
}
