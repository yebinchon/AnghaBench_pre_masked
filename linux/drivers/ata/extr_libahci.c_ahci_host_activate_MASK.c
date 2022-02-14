
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct ata_host {int dev; struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {int irq; int flags; scalar_t__ irq_handler; int get_irq_vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_host*,struct scsi_host_template*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ata_host*,int,scalar_t__,int ,struct scsi_host_template*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct ata_host *VAR_4, struct scsi_host_template *VAR_5)
{
 struct ahci_host_priv *VAR_6 = VAR_4->private_data;
 int VAR_7 = VAR_6->irq;
 int VAR_8;

 if (VAR_6->flags & VAR_0) {
  if (VAR_6->irq_handler &&
      VAR_6->irq_handler != VAR_3)
   FUNC_3(VAR_4->dev,
            "both AHCI_HFLAG_MULTI_MSI flag set and custom irq handler implemented\n");
  if (!VAR_6->get_irq_vector) {
   FUNC_2(VAR_4->dev,
    "AHCI_HFLAG_MULTI_MSI requires ->get_irq_vector!\n");
   return -VAR_1;
  }

  VAR_8 = FUNC_0(VAR_4, VAR_5);
 } else {
  VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_6->irq_handler,
           VAR_2, VAR_5);
 }


 return VAR_8;
}
