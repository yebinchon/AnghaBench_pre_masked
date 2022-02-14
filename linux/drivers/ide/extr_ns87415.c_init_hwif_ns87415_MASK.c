
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_8__ {scalar_t__ ctl_addr; } ;
struct TYPE_10__ {int channel; unsigned long select_data; scalar_t__ dma_base; int irq; TYPE_3__* tp_ops; TYPE_2__ io_ports; TYPE_1__* mate; int dev; } ;
typedef TYPE_4__ ide_hwif_t ;
struct TYPE_9__ {int (* read_status ) (TYPE_4__*) ;} ;
struct TYPE_7__ {unsigned long select_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,unsigned int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int FUNC_5 (struct pci_dev*,int,unsigned int) ;
 int FUNC_6 (TYPE_4__*) ;
 struct pci_dev* FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9 (ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_7(VAR_4->dev);
 unsigned int VAR_6, VAR_7;
 u8 VAR_8;
 (void) FUNC_3(VAR_5, 0x40, &VAR_6);
 (void) FUNC_2(VAR_5, 0x09, &VAR_8);

 VAR_7 = VAR_8 & (1 << (VAR_4->channel << 1));
 if (!VAR_7)
  VAR_7 = VAR_6 & (1 << (4 + VAR_4->channel));
 if (VAR_4->mate) {
  VAR_4->select_data = VAR_4->mate->select_data;
 } else {
  VAR_4->select_data = (unsigned long)
     &VAR_2[VAR_3++];
  VAR_6 |= (1 << 8) | (1 << 9);
  if (VAR_7)
   VAR_6 &= ~(1 << 6);
  *((unsigned int *)VAR_4->select_data) = VAR_6;
  (void) FUNC_5(VAR_5, 0x40, VAR_6);





  FUNC_4(VAR_5, 0x55, 0xee);
 }

 if (!VAR_7)
  VAR_4->irq = FUNC_1(VAR_5, VAR_4->channel);

 if (!VAR_4->dma_base)
  return;

 FUNC_0(0x60, VAR_4->dma_base + VAR_1);
}
