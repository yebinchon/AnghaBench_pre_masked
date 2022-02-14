
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_host_template {int dummy; } ;
struct ata_port {struct Scsi_Host* scsi_host; TYPE_1__* host; int tdev; int print_id; } ;
struct ata_host {int n_ports; struct ata_port** ports; } ;
struct Scsi_Host {int eh_noresume; int max_id; int max_lun; int max_channel; int max_cmd_len; int max_host_blocked; int unique_id; int transportt; int * hostdata; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Scsi_Host*,int *,int ) ;
 struct Scsi_Host* FUNC_1 (struct scsi_host_template*,int) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;

int FUNC_4(struct ata_host *VAR_2, struct scsi_host_template *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->n_ports; VAR_4++) {
  struct ata_port *VAR_6 = VAR_2->ports[VAR_4];
  struct Scsi_Host *VAR_7;

  VAR_5 = -VAR_0;
  VAR_7 = FUNC_1(VAR_3, sizeof(struct ata_port *));
  if (!VAR_7)
   goto err_alloc;

  VAR_7->eh_noresume = 1;
  *(struct ata_port **)&VAR_7->hostdata[0] = VAR_6;
  VAR_6->scsi_host = VAR_7;

  VAR_7->transportt = VAR_1;
  VAR_7->unique_id = VAR_6->print_id;
  VAR_7->max_id = 16;
  VAR_7->max_lun = 1;
  VAR_7->max_channel = 1;
  VAR_7->max_cmd_len = 32;






  VAR_7->max_host_blocked = 1;

  VAR_5 = FUNC_0(VAR_6->scsi_host,
      &VAR_6->tdev, VAR_6->host->dev);
  if (VAR_5)
   goto err_add;
 }

 return 0;

 err_add:
 FUNC_2(VAR_2->ports[VAR_4]->scsi_host);
 err_alloc:
 while (--VAR_4 >= 0) {
  struct Scsi_Host *VAR_8 = VAR_2->ports[VAR_4]->scsi_host;

  FUNC_3(VAR_8);
  FUNC_2(VAR_8);
 }
 return VAR_5;
}
