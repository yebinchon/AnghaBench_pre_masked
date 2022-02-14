
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int irq; } ;
struct ide_io_ports {unsigned long data_addr; unsigned long error_addr; unsigned long nsect_addr; unsigned long lbal_addr; unsigned long lbam_addr; unsigned long lbah_addr; unsigned long device_addr; unsigned long status_addr; unsigned long ctl_addr; } ;
struct ide_host {void* host_priv; } ;
struct TYPE_3__ {unsigned long* sata_scr; unsigned long dma_base; int irq; void* hwif_data; int host_flags; struct ide_io_ports io_ports; scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ide_io_ports*,int ,int) ;
 struct ide_host* FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_3(VAR_4->dev);
 struct ide_host *VAR_6 = FUNC_1(VAR_5);
 void *VAR_7 = VAR_6->host_priv;
 u8 VAR_8 = VAR_4->channel;
 struct ide_io_ports *VAR_9 = &VAR_4->io_ports;
 unsigned long VAR_10;




 VAR_4->host_flags |= VAR_0;

 VAR_4->hwif_data = VAR_7;





 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_10 = (unsigned long)VAR_7;
 if (VAR_8)
  VAR_10 += 0xC0;
 else
  VAR_10 += 0x80;





 VAR_9->data_addr = VAR_10;
 VAR_9->error_addr = VAR_10 + 1;
 VAR_9->nsect_addr = VAR_10 + 2;
 VAR_9->lbal_addr = VAR_10 + 3;
 VAR_9->lbam_addr = VAR_10 + 4;
 VAR_9->lbah_addr = VAR_10 + 5;
 VAR_9->device_addr = VAR_10 + 6;
 VAR_9->status_addr = VAR_10 + 7;
 VAR_9->ctl_addr = VAR_10 + 10;

 if (FUNC_2(VAR_5)) {
  VAR_10 = (unsigned long)VAR_7;
  if (VAR_8)
   VAR_10 += 0x80;
  VAR_4->sata_scr[VAR_3] = VAR_10 + 0x104;
  VAR_4->sata_scr[VAR_2] = VAR_10 + 0x108;
  VAR_4->sata_scr[VAR_1] = VAR_10 + 0x100;
 }

 VAR_4->irq = VAR_5->irq;

 VAR_4->dma_base = (unsigned long)VAR_7 + (VAR_8 ? 0x08 : 0x00);
}
