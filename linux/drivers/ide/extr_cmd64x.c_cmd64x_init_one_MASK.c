
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int revision; } ;
struct ide_port_info {int udma_mask; int * dma_ops; int * port_ops; TYPE_1__* enablebits; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 int VAR_0 ;
 struct ide_port_info* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,struct ide_port_info*,int *) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 struct ide_port_info VAR_5;
 u8 VAR_6 = VAR_4->driver_data;

 VAR_5 = VAR_1[VAR_6];

 if (VAR_6 == 1) {
  if (VAR_3->revision < 5) {
   VAR_5.udma_mask = 0x00;





   if (VAR_3->revision < 3) {
    VAR_5.enablebits[0].reg = 0;
    VAR_5.port_ops = &VAR_2;
    if (VAR_3->revision == 1)
     VAR_5.dma_ops = &VAR_0;
   }
  }
 }

 return FUNC_0(VAR_3, &VAR_5, ((void*)0));
}
