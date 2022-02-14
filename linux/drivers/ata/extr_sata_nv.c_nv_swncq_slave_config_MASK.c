
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {size_t id; int queue_depth; scalar_t__ lun; scalar_t__ channel; int host; } ;
struct pci_dev {scalar_t__ device; } ;
struct TYPE_4__ {struct ata_device* device; } ;
struct ata_port {int flags; TYPE_2__ link; TYPE_1__* host; } ;
struct ata_device {scalar_t__ class; int id; } ;
typedef int model_num ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ata_device*,char*,int ) ;
 int FUNC_1 (int ,unsigned char*,int ,int) ;
 int FUNC_2 (struct scsi_device*,int) ;
 int FUNC_3 (struct scsi_device*) ;
 struct ata_port* FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 scalar_t__ FUNC_6 (unsigned char*,char*,int) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct scsi_device *VAR_9)
{
 struct ata_port *VAR_10 = FUNC_4(VAR_9->host);
 struct pci_dev *VAR_11 = FUNC_7(VAR_10->host->dev);
 struct ata_device *VAR_12;
 int VAR_13;
 u8 VAR_14;
 u8 VAR_15 = 0;
 unsigned char VAR_16[VAR_3 + 1];

 VAR_13 = FUNC_3(VAR_9);
 if (VAR_9->id >= VAR_4 || VAR_9->channel || VAR_9->lun)

  return VAR_13;

 VAR_12 = &VAR_10->link.device[VAR_9->id];
 if (!(VAR_10->flags & VAR_1) || VAR_12->class == VAR_0)
  return VAR_13;


 if (VAR_11->device == VAR_5 ||
  VAR_11->device == VAR_6)
  VAR_15 = 1;


 if (VAR_11->device == VAR_7 ||
  VAR_11->device == VAR_8) {
  FUNC_5(VAR_11, 0x8, &VAR_14);
  if (VAR_14 <= 0xa2)
   VAR_15 = 1;
 }

 if (!VAR_15)
  return VAR_13;

 FUNC_1(VAR_12->id, VAR_16, VAR_2, sizeof(VAR_16));

 if (FUNC_6(VAR_16, "Maxtor", 6) == 0) {
  FUNC_2(VAR_9, 1);
  FUNC_0(VAR_12, "Disabling SWNCQ mode (depth %x)\n",
          VAR_9->queue_depth);
 }

 return VAR_13;
}
