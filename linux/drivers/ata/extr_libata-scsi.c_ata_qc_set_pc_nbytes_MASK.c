
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; } ;
struct ata_queued_cmd {scalar_t__ extrabytes; scalar_t__ nbytes; struct scsi_cmnd* scsicmd; } ;
struct TYPE_2__ {scalar_t__ extra_len; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->scsicmd;

 VAR_0->extrabytes = VAR_1->request->extra_len;
 VAR_0->nbytes = FUNC_0(VAR_1) + VAR_0->extrabytes;
}
