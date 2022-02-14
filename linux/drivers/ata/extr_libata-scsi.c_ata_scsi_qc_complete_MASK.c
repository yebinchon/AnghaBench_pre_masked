
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int* cmnd; int result; } ;
struct ata_queued_cmd {scalar_t__ err_mask; int flags; int result_tf; struct scsi_cmnd* scsicmd; struct ata_port* ap; } ;
struct ata_port {int print_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 int FUNC_3 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_4(struct ata_queued_cmd *VAR_5)
{
 struct ata_port *VAR_6 = VAR_5->ap;
 struct scsi_cmnd *VAR_7 = VAR_5->scsicmd;
 u8 *VAR_8 = VAR_7->cmnd;
 int VAR_9 = (VAR_5->err_mask != 0);
 if (((VAR_8[0] == VAR_1) || (VAR_8[0] == VAR_0)) &&
     ((VAR_8[2] & 0x20) || VAR_9))
  FUNC_2(VAR_5);
 else if (VAR_5->flags & VAR_2)
  VAR_7->result = VAR_3;
 else if (VAR_9)
  FUNC_1(VAR_5);
 else
  VAR_7->result = VAR_4;

 if (VAR_9 && !VAR_6->ops->error_handler)
  FUNC_0(VAR_6->print_id, &VAR_5->result_tf);

 FUNC_3(VAR_5);
}
