
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct scsi_device {size_t id; int request_queue; scalar_t__ lun; scalar_t__ channel; int host; } ;
struct pci_dev {int dev; } ;
struct nv_adma_port_priv {int flags; int adma_dma_mask; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct ata_port {int port_no; int lock; TYPE_4__* host; TYPE_2__ link; struct nv_adma_port_priv* private_data; } ;
struct TYPE_10__ {scalar_t__* dma_mask; } ;
struct TYPE_9__ {TYPE_5__* dev; TYPE_3__** ports; } ;
struct TYPE_8__ {struct nv_adma_port_priv* private_data; } ;
struct TYPE_6__ {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ata_port*,char*,unsigned long long,unsigned long,unsigned short) ;
 int FUNC_1 (struct scsi_device*) ;
 struct ata_port* FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned short) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (struct pci_dev*,int ,int) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;
 struct pci_dev* FUNC_11 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_12(struct scsi_device *VAR_13)
{
 struct ata_port *VAR_14 = FUNC_2(VAR_13->host);
 struct nv_adma_port_priv *VAR_15 = VAR_14->private_data;
 struct nv_adma_port_priv *VAR_16, *VAR_17;
 struct pci_dev *VAR_18 = FUNC_11(VAR_14->host->dev);
 unsigned long VAR_19, VAR_20;
 unsigned short VAR_21;
 int VAR_22;
 int VAR_23;
 u32 VAR_24, VAR_25, VAR_26;

 VAR_22 = FUNC_1(VAR_13);

 if (VAR_13->id >= VAR_3 || VAR_13->channel || VAR_13->lun)

  return VAR_22;

 FUNC_9(VAR_14->lock, VAR_20);

 if (VAR_14->link.device[VAR_13->id].class == VAR_0) {







  VAR_19 = VAR_1;


  VAR_21 = VAR_4 - 1;



  VAR_23 = 0;
  FUNC_6(VAR_14);
 } else {
  VAR_19 = VAR_6;
  VAR_21 = VAR_7;
  VAR_23 = 1;
 }

 FUNC_7(VAR_18, VAR_8, &VAR_24);

 if (VAR_14->port_no == 1)
  VAR_26 = VAR_11 |
         VAR_12;
 else
  VAR_26 = VAR_9 |
         VAR_10;

 if (VAR_23) {
  VAR_25 = VAR_24 | VAR_26;
  VAR_15->flags &= ~VAR_5;
 } else {
  VAR_25 = VAR_24 & ~VAR_26;
  VAR_15->flags |= VAR_5;
 }

 if (VAR_24 != VAR_25)
  FUNC_8(VAR_18, VAR_8, VAR_25);

 VAR_16 = VAR_14->host->ports[0]->private_data;
 VAR_17 = VAR_14->host->ports[1]->private_data;
 if ((VAR_16->flags & VAR_5) ||
     (VAR_17->flags & VAR_5)) {







  VAR_22 = FUNC_5(&VAR_18->dev, VAR_2);
 } else {
  VAR_22 = FUNC_5(&VAR_18->dev, VAR_15->adma_dma_mask);
 }

 FUNC_4(VAR_13->request_queue, VAR_19);
 FUNC_3(VAR_13->request_queue, VAR_21);
 FUNC_0(VAR_14,
        "DMA mask 0x%llX, segment boundary 0x%lX, hw segs %hu\n",
        (unsigned long long)*VAR_14->host->dev->dma_mask,
        VAR_19, VAR_21);

 FUNC_10(VAR_14->lock, VAR_20);

 return VAR_22;
}
