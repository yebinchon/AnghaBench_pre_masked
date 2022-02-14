
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int allowed; int retries; } ;
struct ata_queued_cmd {struct scsi_cmnd* scsicmd; } ;


 int FUNC_0 (struct ata_queued_cmd*) ;

void FUNC_1(struct ata_queued_cmd *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->scsicmd;
 VAR_1->retries = VAR_1->allowed;
 FUNC_0(VAR_0);
}
