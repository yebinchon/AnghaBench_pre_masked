
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 unsigned int VAR_5;
 struct pci_dev *VAR_6 = FUNC_3(VAR_3->host->dev);
 u8 VAR_7;

 if (VAR_4->dma_mode == VAR_0)
  VAR_5 = 1;
 else
  VAR_5 = 4;


 FUNC_0(VAR_3, VAR_4, VAR_5);


 FUNC_1(VAR_6, 0x44 + VAR_3->port_no, &VAR_7);
 VAR_7 &= ~(7 << (4 * VAR_4->devno));
 if (VAR_4->dma_mode >= VAR_1) {
  u8 VAR_8 = VAR_4->dma_mode - VAR_1 + 1 - VAR_2;
  if (VAR_8 == 0)
   VAR_8 = 1;
  VAR_7 |= (VAR_8 << (4 * VAR_4->devno));
 }
 FUNC_2(VAR_6, 0x44 + VAR_3->port_no, VAR_7);
}
