
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {unsigned int pio_mode; scalar_t__ class; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct pci_dev*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,unsigned int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_6, struct ata_device *VAR_7)
{
 unsigned int VAR_8 = VAR_7->pio_mode - VAR_5;
 struct pci_dev *VAR_9 = FUNC_2(VAR_6->host->dev);
 unsigned int VAR_10 = VAR_7->devno ? VAR_2 : VAR_1;
 unsigned int VAR_11;

 FUNC_0(VAR_9, VAR_10, &VAR_11);


 VAR_11 &= ~(VAR_3 | VAR_4);
 VAR_11 |= VAR_8;

 if (VAR_7->class == VAR_0)
  VAR_11 |= VAR_4;
 FUNC_1(VAR_9, VAR_10, VAR_11);
}
