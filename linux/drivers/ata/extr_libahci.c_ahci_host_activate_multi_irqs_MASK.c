
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_host_template {int dummy; } ;
struct ata_host {int n_ports; TYPE_1__** ports; int dev; struct ahci_host_priv* private_data; } ;
struct ahci_port_priv {int irq_desc; } ;
struct ahci_host_priv {int (* get_irq_vector ) (struct ata_host*,int) ;} ;
struct TYPE_3__ {struct ahci_port_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_host*,struct scsi_host_template*) ;
 int FUNC_1 (struct ata_host*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int ,int,int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ata_host*,int) ;

__attribute__((used)) static int FUNC_6(struct ata_host *VAR_1,
      struct scsi_host_template *VAR_2)
{
 struct ahci_host_priv *VAR_3 = VAR_1->private_data;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5)
  return VAR_5;




 for (VAR_4 = 0; VAR_4 < VAR_1->n_ports; VAR_4++) {
  struct ahci_port_priv *VAR_6 = VAR_1->ports[VAR_4]->private_data;
  int VAR_7 = VAR_3->get_irq_vector(VAR_1, VAR_4);


  if (!VAR_6) {
   FUNC_4(VAR_7);
   continue;
  }

  VAR_5 = FUNC_3(VAR_1->dev, VAR_7, VAR_0,
    0, VAR_6->irq_desc, VAR_1->ports[VAR_4]);

  if (VAR_5)
   return VAR_5;
  FUNC_2(VAR_1->ports[VAR_4], "irq %d", VAR_7);
 }

 return FUNC_0(VAR_1, VAR_2);
}
