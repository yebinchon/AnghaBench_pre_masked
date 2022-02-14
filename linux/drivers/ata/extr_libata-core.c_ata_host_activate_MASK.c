
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct ata_host {int n_ports; int dev; int * ports; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_host*,struct scsi_host_template*) ;
 int FUNC_2 (struct ata_host*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,struct ata_host*) ;
 char* FUNC_7 (int ,int ,char*,int ,int ) ;
 int FUNC_8 (int ,int,int ,unsigned long,char*,struct ata_host*) ;

int FUNC_9(struct ata_host *VAR_2, int VAR_3,
        irq_handler_t VAR_4, unsigned long VAR_5,
        struct scsi_host_template *VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_2(VAR_2);
 if (VAR_8)
  return VAR_8;


 if (!VAR_3) {
  FUNC_0(VAR_4);
  return FUNC_1(VAR_2, VAR_6);
 }

 VAR_9 = FUNC_7(VAR_2->dev, VAR_1, "%s[%s]",
      FUNC_4(VAR_2->dev),
      FUNC_5(VAR_2->dev));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_8(VAR_2->dev, VAR_3, VAR_4, VAR_5,
         VAR_9, VAR_2);
 if (VAR_8)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2->n_ports; VAR_7++)
  FUNC_3(VAR_2->ports[VAR_7], "irq %d", VAR_3);

 VAR_8 = FUNC_1(VAR_2, VAR_6);

 if (VAR_8)
  FUNC_6(VAR_2->dev, VAR_3, VAR_2);

 return VAR_8;
}
