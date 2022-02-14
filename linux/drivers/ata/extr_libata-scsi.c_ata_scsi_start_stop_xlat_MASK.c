
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; int cmd_len; int result; } ;
struct ata_taskfile {int flags; int nsect; int lbah; int lbam; int lbal; int command; int device; int protocol; } ;
struct ata_queued_cmd {TYPE_2__* dev; TYPE_1__* ap; struct ata_taskfile tf; struct scsi_cmnd* scsicmd; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_2__*,struct scsi_cmnd*,int,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_queued_cmd *VAR_13)
{
 struct scsi_cmnd *VAR_14 = VAR_13->scsicmd;
 struct ata_taskfile *VAR_15 = &VAR_13->tf;
 const u8 *VAR_16 = VAR_14->cmnd;
 u16 VAR_17;
 u8 VAR_18 = 0xff;

 if (VAR_14->cmd_len < 5) {
  VAR_17 = 4;
  goto invalid_fld;
 }

 VAR_15->flags |= VAR_7 | VAR_8;
 VAR_15->protocol = VAR_6;
 if (VAR_16[1] & 0x1) {
  ;
 }
 if (VAR_16[4] & 0x2) {
  VAR_17 = 4;
  VAR_18 = 1;
  goto invalid_fld;
 }
 if (((VAR_16[4] >> 4) & 0xf) != 0) {
  VAR_17 = 4;
  VAR_18 = 3;
  goto invalid_fld;
 }

 if (VAR_16[4] & 0x1) {
  VAR_15->nsect = 1;

  if (VAR_13->dev->flags & VAR_2) {
   VAR_15->flags |= VAR_9;

   VAR_15->lbah = 0x0;
   VAR_15->lbam = 0x0;
   VAR_15->lbal = 0x0;
   VAR_15->device |= VAR_5;
  } else {

   VAR_15->lbal = 0x1;
   VAR_15->lbam = 0x0;
   VAR_15->lbah = 0x0;
  }

  VAR_15->command = VAR_1;
 } else {



  if ((VAR_13->ap->flags & VAR_4) &&
      VAR_12 == VAR_11)
   goto skip;

  if ((VAR_13->ap->flags & VAR_3) &&
       FUNC_1())
   goto skip;


  VAR_15->command = VAR_0;
 }
 return 0;

 invalid_fld:
 FUNC_0(VAR_13->dev, VAR_14, VAR_17, VAR_18);
 return 1;
 skip:
 VAR_14->result = VAR_10;
 return 1;
}
