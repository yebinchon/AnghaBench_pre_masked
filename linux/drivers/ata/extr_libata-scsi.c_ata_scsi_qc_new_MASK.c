
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* request; } ;
struct ata_queued_cmd {int flags; int n_elem; int sg; int (* scsidone ) (struct scsi_cmnd*) ;struct scsi_cmnd* scsicmd; } ;
struct ata_device {int dummy; } ;
struct TYPE_2__ {int rq_flags; int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_device*,int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static struct ata_queued_cmd *FUNC_4(struct ata_device *VAR_4,
           struct scsi_cmnd *VAR_5)
{
 struct ata_queued_cmd *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5->request->tag);
 if (VAR_6) {
  VAR_6->scsicmd = VAR_5;
  VAR_6->scsidone = VAR_5->scsi_done;

  VAR_6->sg = FUNC_2(VAR_5);
  VAR_6->n_elem = FUNC_1(VAR_5);

  if (VAR_5->request->rq_flags & VAR_3)
   VAR_6->flags |= VAR_0;
 } else {
  VAR_5->result = (VAR_1 << 16) | (VAR_2 << 1);
  VAR_5->scsi_done(VAR_5);
 }

 return VAR_6;
}
