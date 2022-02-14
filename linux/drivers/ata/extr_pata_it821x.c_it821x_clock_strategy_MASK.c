
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct it821x_dev {int** want; int clock_mode; scalar_t__* udma; int * pio; } ;
struct ata_port {int port_no; struct it821x_dev* private_data; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,int ) ;
 int FUNC_2 (struct ata_port*,struct ata_device*,scalar_t__) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_4, struct ata_device *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_5(VAR_4->host->dev);
 struct it821x_dev *VAR_7 = VAR_4->private_data;
 u8 VAR_8 = VAR_5->devno;
 struct ata_device *VAR_9 = FUNC_0(VAR_5);

 int VAR_10, VAR_11;
 u8 VAR_12;
 int VAR_13 = 0;


 if (VAR_7->want[0][0] > VAR_7->want[1][0]) {
  VAR_10 = VAR_7->want[0][1];
  VAR_11 = VAR_7->want[1][1];
 } else {
  VAR_10 = VAR_7->want[1][1];
  VAR_11 = VAR_7->want[0][1];
 }


 if (VAR_10 == VAR_2)
  VAR_10 = VAR_11;


 if (VAR_10 == VAR_2)
  return;

 if (VAR_10 == VAR_7->clock_mode)
  return;


 if (VAR_10 == VAR_1)
  VAR_7->clock_mode = VAR_1;
 else {
  VAR_7->clock_mode = VAR_0;
  VAR_13 = 1;
 }
 FUNC_3(VAR_6, 0x50, &VAR_12);
 VAR_12 &= ~(1 << (1 + VAR_4->port_no));
 VAR_12 |= VAR_13 << (1 + VAR_4->port_no);
 FUNC_4(VAR_6, 0x50, VAR_12);





 if (VAR_9 && VAR_7->udma[1-VAR_8] != VAR_3) {
  FUNC_2(VAR_4, VAR_9, VAR_7->udma[1-VAR_8]);
  FUNC_1(VAR_4, VAR_9, VAR_7->pio[1-VAR_8]);
 }




 if (VAR_7->udma[VAR_8] != VAR_3) {
  FUNC_2(VAR_4, VAR_5, VAR_7->udma[VAR_8]);
  FUNC_1(VAR_4, VAR_5, VAR_7->pio[VAR_8]);
 }
}
