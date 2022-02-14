
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sata_dwc_device_port {int dma_interrupt_count; scalar_t__* dma_pending; } ;
struct sata_dwc_device {scalar_t__ host; } ;
struct TYPE_2__ {size_t active_tag; } ;
struct ata_port {int dev; TYPE_1__ link; } ;
struct ata_host {int lock; struct ata_port** ports; } ;


 struct sata_dwc_device_port* FUNC_0 (struct ata_port*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,size_t,scalar_t__) ;
 int FUNC_2 (struct sata_dwc_device_port*,size_t) ;
 int FUNC_3 (struct ata_port*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 unsigned long VAR_2;
 struct sata_dwc_device *VAR_3 = VAR_1;
 struct ata_host *VAR_4 = (struct ata_host *)VAR_3->host;
 struct ata_port *VAR_5;
 struct sata_dwc_device_port *VAR_6;
 u8 VAR_7 = 0;
 unsigned int VAR_8 = 0;

 FUNC_4(&VAR_4->lock, VAR_2);
 VAR_5 = VAR_4->ports[VAR_8];
 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = VAR_5->link.active_tag;






 VAR_6->dma_interrupt_count++;
 FUNC_2(VAR_6, VAR_7);

 if (VAR_6->dma_pending[VAR_7] == VAR_0) {
  FUNC_1(VAR_5->dev, "DMA not pending tag=0x%02x pending=%d\n",
   VAR_7, VAR_6->dma_pending[VAR_7]);
 }

 if ((VAR_6->dma_interrupt_count % 2) == 0)
  FUNC_3(VAR_5, 1);

 FUNC_5(&VAR_4->lock, VAR_2);
}
