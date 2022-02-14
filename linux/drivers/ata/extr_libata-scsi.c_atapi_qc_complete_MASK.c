
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int* cmnd; void* result; } ;
struct ata_queued_cmd {unsigned int err_mask; int flags; scalar_t__* cdb; struct scsi_cmnd* scsicmd; TYPE_4__* dev; TYPE_2__* ap; } ;
struct TYPE_8__ {TYPE_3__* sdev; } ;
struct TYPE_7__ {scalar_t__ locked; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {scalar_t__ error_handler; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(struct ata_queued_cmd *VAR_6)
{
 struct scsi_cmnd *VAR_7 = VAR_6->scsicmd;
 unsigned int VAR_8 = VAR_6->err_mask;

 FUNC_0("ENTER, err_mask 0x%X\n", VAR_8);


 if (FUNC_5(VAR_6->ap->ops->error_handler &&
       (VAR_8 || VAR_6->flags & VAR_2))) {

  if (!(VAR_6->flags & VAR_2)) {





   FUNC_1(VAR_6);
  }
  if (VAR_6->cdb[0] == VAR_1 && VAR_6->dev->sdev)
   VAR_6->dev->sdev->locked = 0;

  VAR_6->scsicmd->result = VAR_4;
  FUNC_2(VAR_6);
  return;
 }


 if (FUNC_5(VAR_8 & VAR_0)) {
  VAR_7->result = VAR_4;
  FUNC_4(VAR_6);
  return;
 } else if (FUNC_5(VAR_8)) {





  FUNC_1(VAR_6);
 } else {
  if (VAR_7->cmnd[0] == VAR_3 && (VAR_7->cmnd[1] & 0x03) == 0)
   FUNC_3(VAR_7);
  VAR_7->result = VAR_5;
 }

 FUNC_2(VAR_6);
}
