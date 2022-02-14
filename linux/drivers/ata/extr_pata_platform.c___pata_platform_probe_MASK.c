
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_host_template {int dummy; } ;
struct resource {scalar_t__ flags; int start; } ;
struct device {int dummy; } ;
struct TYPE_3__ {void* ctl_addr; void* altstatus_addr; void* cmd_addr; } ;
struct ata_port {int pio_mask; TYPE_1__ ioaddr; int flags; TYPE_2__* ops; } ;
struct ata_host {struct ata_port** ports; } ;
struct TYPE_4__ {int sff_data_xfer; int set_mode; int cable_detect; int * inherits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ata_host*,int,int *,int,struct scsi_host_template*) ;
 struct ata_host* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct ata_port*,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct device*,int,int ) ;
 TYPE_2__* FUNC_6 (struct device*,int,int ) ;
 int VAR_12 ;
 int FUNC_7 (TYPE_1__*,unsigned int) ;
 int FUNC_8 (struct resource*) ;

int FUNC_9(struct device *VAR_13, struct resource *VAR_14,
     struct resource *VAR_15, struct resource *VAR_16,
     unsigned int VAR_17, int VAR_18,
     struct scsi_host_template *VAR_19, bool VAR_20)
{
 struct ata_host *VAR_21;
 struct ata_port *VAR_22;
 unsigned int VAR_23;
 int VAR_24 = 0;
 int VAR_25 = 0;




 VAR_23 = (( VAR_14->flags == VAR_4) &&
  (VAR_15->flags == VAR_4));




 if (VAR_16 && VAR_16->start > 0) {
  VAR_24 = VAR_16->start;
  VAR_25 = (VAR_16->flags & VAR_6) | VAR_5;
 }




 VAR_21 = FUNC_1(VAR_13, 1);
 if (!VAR_21)
  return -VAR_2;
 VAR_22 = VAR_21->ports[0];

 VAR_22->ops = FUNC_6(VAR_13, sizeof(*VAR_22->ops), VAR_3);
 VAR_22->ops->inherits = &VAR_11;
 VAR_22->ops->cable_detect = VAR_7;
 VAR_22->ops->set_mode = VAR_12;
 if (VAR_20)
  VAR_22->ops->sff_data_xfer = VAR_8;
 else
  VAR_22->ops->sff_data_xfer = VAR_9;

 VAR_22->pio_mask = VAR_18;
 VAR_22->flags |= VAR_1;




 if (!VAR_24) {
  VAR_22->flags |= VAR_0;
  FUNC_2(VAR_22, "no IRQ, using PIO polling");
 }




 if (VAR_23) {
  VAR_22->ioaddr.cmd_addr = FUNC_5(VAR_13, VAR_14->start,
    FUNC_8(VAR_14));
  VAR_22->ioaddr.ctl_addr = FUNC_5(VAR_13, VAR_15->start,
    FUNC_8(VAR_15));
 } else {
  VAR_22->ioaddr.cmd_addr = FUNC_4(VAR_13, VAR_14->start,
    FUNC_8(VAR_14));
  VAR_22->ioaddr.ctl_addr = FUNC_4(VAR_13, VAR_15->start,
    FUNC_8(VAR_15));
 }
 if (!VAR_22->ioaddr.cmd_addr || !VAR_22->ioaddr.ctl_addr) {
  FUNC_3(VAR_13, "failed to map IO/CTL base\n");
  return -VAR_2;
 }

 VAR_22->ioaddr.altstatus_addr = VAR_22->ioaddr.ctl_addr;

 FUNC_7(&VAR_22->ioaddr, VAR_17);

 FUNC_2(VAR_22, "%s cmd 0x%llx ctl 0x%llx", VAR_23 ? "mmio" : "ioport",
        (unsigned long long)VAR_14->start,
        (unsigned long long)VAR_15->start);


 return FUNC_0(VAR_21, VAR_24, VAR_24 ? VAR_10 : ((void*)0),
     VAR_25, VAR_19);
}
