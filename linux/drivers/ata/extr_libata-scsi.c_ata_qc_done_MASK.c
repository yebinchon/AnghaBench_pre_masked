
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct ata_queued_cmd {void (* scsidone ) (struct scsi_cmnd*) ;struct scsi_cmnd* scsicmd; } ;


 int FUNC_0 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->scsicmd;
 void (*VAR_2)(struct scsi_cmnd *) = VAR_0->scsidone;

 FUNC_0(VAR_0);
 VAR_2(VAR_1);
}
