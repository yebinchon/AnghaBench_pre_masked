
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
typedef struct ata_port_info {int flags; void* private_data; } const ata_port_info ;
struct ata_port {int port_no; int flags; int * ops; int em_message_type; } ;
struct ata_host {int n_ports; struct ata_port** ports; int flags; struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {int irq; int cap; int port_map; int em_msg_type; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ata_host*,struct scsi_host_template*) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct ata_host*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ata_host*,char*) ;
 int FUNC_5 (struct ata_host*) ;
 int FUNC_6 (struct ata_host*) ;
 int FUNC_7 (struct device*,struct ahci_host_priv*) ;
 int FUNC_8 (struct ahci_host_priv*,struct ata_port_info const*) ;
 int VAR_12 ;
 struct ata_host* FUNC_9 (struct device*,struct ata_port_info const**,int) ;
 int FUNC_10 (struct ata_port*,char*,int) ;
 int FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,char*) ;
 int FUNC_14 (struct device*,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct platform_device*,int ) ;
 int FUNC_18 (struct platform_device*,int ,int ) ;

int FUNC_19(struct platform_device *VAR_13,
       struct ahci_host_priv *VAR_14,
       const struct ata_port_info *VAR_15,
       struct scsi_host_template *VAR_16)
{
 struct device *VAR_17 = &VAR_13->dev;
 struct ata_port_info VAR_18 = *VAR_15;
 const struct ata_port_info *VAR_19[] = { &VAR_18, ((void*)0) };
 struct ata_host *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_22 = FUNC_17(VAR_13, 0);
 if (VAR_22 <= 0) {
  if (VAR_22 != -VAR_5)
   FUNC_11(VAR_17, "no irq\n");
  return VAR_22;
 }

 VAR_14->irq = VAR_22;


 VAR_18.private_data = (void *)(unsigned long)VAR_14->flags;

 FUNC_7(VAR_17, VAR_14);

 if (VAR_14->cap & VAR_7)
  VAR_18.flags |= VAR_1;

 if (VAR_14->cap & VAR_8)
  VAR_18.flags |= VAR_2;

 FUNC_8(VAR_14, &VAR_18);






 VAR_23 = FUNC_16(FUNC_3(VAR_14->cap), FUNC_15(VAR_14->port_map));

 VAR_20 = FUNC_9(VAR_17, VAR_19, VAR_23);
 if (!VAR_20)
  return -VAR_4;

 VAR_20->private_data = VAR_14;

 if (!(VAR_14->cap & VAR_9) || VAR_11)
  VAR_20->flags |= VAR_3;
 else
  FUNC_12(VAR_17, "SSS flag set, parallel bus scan disabled\n");

 if (VAR_18.flags & VAR_0)
  FUNC_6(VAR_20);

 for (VAR_21 = 0; VAR_21 < VAR_20->n_ports; VAR_21++) {
  struct ata_port *VAR_25 = VAR_20->ports[VAR_21];

  FUNC_10(VAR_25, "mmio %pR",
         FUNC_18(VAR_13, VAR_10, 0));
  FUNC_10(VAR_25, "port 0x%x", 0x100 + VAR_25->port_no * 0x80);


  if (VAR_25->flags & VAR_0)
   VAR_25->em_message_type = VAR_14->em_msg_type;


  if (!(VAR_14->port_map & (1 << VAR_21)))
   VAR_25->ops = &VAR_12;
 }

 if (VAR_14->cap & VAR_6) {
  VAR_24 = FUNC_14(VAR_17, FUNC_0(64));
  if (VAR_24) {
   VAR_24 = FUNC_14(VAR_17,
         FUNC_0(32));
   if (VAR_24) {
    FUNC_11(VAR_17, "Failed to enable 64-bit DMA.\n");
    return VAR_24;
   }
   FUNC_13(VAR_17, "Enable 32-bit DMA instead of 64-bit.\n");
  }
 }

 VAR_24 = FUNC_5(VAR_20);
 if (VAR_24)
  return VAR_24;

 FUNC_2(VAR_20);
 FUNC_4(VAR_20, "platform");

 return FUNC_1(VAR_20, VAR_16);
}
