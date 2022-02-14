
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct scsi_cmnd {scalar_t__* cmnd; int cmd_len; int result; } ;
struct ata_taskfile {int flags; scalar_t__ device; scalar_t__ lbah; scalar_t__ lbam; scalar_t__ lbal; scalar_t__ nsect; void* command; scalar_t__ hob_lbal; scalar_t__ hob_lbam; scalar_t__ hob_lbah; scalar_t__ hob_nsect; int protocol; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_taskfile tf; struct scsi_cmnd* scsicmd; } ;
struct ata_device {scalar_t__ n_sectors; int flags; scalar_t__ sectors; scalar_t__ heads; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ const VAR_12 ;
 scalar_t__ const VAR_13 ;
 int FUNC_1 (struct ata_device*,struct scsi_cmnd*,int,int) ;
 int FUNC_2 (struct ata_device*,struct scsi_cmnd*,int ,int,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__ const*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__ const*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static unsigned int FUNC_7(struct ata_queued_cmd *VAR_14)
{
 struct scsi_cmnd *VAR_15 = VAR_14->scsicmd;
 struct ata_taskfile *VAR_16 = &VAR_14->tf;
 struct ata_device *VAR_17 = VAR_14->dev;
 u64 VAR_18 = VAR_14->dev->n_sectors;
 const u8 *VAR_19 = VAR_15->cmnd;
 u64 VAR_20;
 u32 VAR_21;
 u16 VAR_22;

 VAR_16->flags |= VAR_7 | VAR_6;
 VAR_16->protocol = VAR_5;

 if (VAR_19[0] == VAR_12) {
  if (VAR_15->cmd_len < 10) {
   VAR_22 = 9;
   goto invalid_fld;
  }
  FUNC_5(VAR_19, &VAR_20, &VAR_21);
 } else if (VAR_19[0] == VAR_13) {
  if (VAR_15->cmd_len < 16) {
   VAR_22 = 15;
   goto invalid_fld;
  }
  FUNC_6(VAR_19, &VAR_20, &VAR_21);
 } else {
  VAR_22 = 0;
  goto invalid_fld;
 }

 if (!VAR_21)
  goto nothing_to_do;
 if (VAR_20 >= VAR_18)
  goto out_of_range;
 if ((VAR_20 + VAR_21) > VAR_18)
  goto out_of_range;

 if (VAR_17->flags & VAR_2) {
  VAR_16->flags |= VAR_8;

  if (FUNC_3(VAR_20, VAR_21)) {

   VAR_16->command = VAR_0;
   VAR_16->device |= (VAR_20 >> 24) & 0xf;
  } else if (FUNC_4(VAR_20, VAR_21)) {
   if (!(VAR_17->flags & VAR_3))
    goto out_of_range;


   VAR_16->flags |= VAR_9;
   VAR_16->command = VAR_1;

   VAR_16->hob_nsect = (VAR_21 >> 8) & 0xff;

   VAR_16->hob_lbah = (VAR_20 >> 40) & 0xff;
   VAR_16->hob_lbam = (VAR_20 >> 32) & 0xff;
   VAR_16->hob_lbal = (VAR_20 >> 24) & 0xff;
  } else

   goto out_of_range;

  VAR_16->nsect = VAR_21 & 0xff;

  VAR_16->lbah = (VAR_20 >> 16) & 0xff;
  VAR_16->lbam = (VAR_20 >> 8) & 0xff;
  VAR_16->lbal = VAR_20 & 0xff;

  VAR_16->device |= VAR_4;
 } else {

  u32 VAR_23, VAR_24, VAR_25, VAR_26;

  if (!FUNC_3(VAR_20, VAR_21))
   goto out_of_range;


  VAR_26 = (u32)VAR_20 / VAR_17->sectors;
  VAR_25 = VAR_26 / VAR_17->heads;
  VAR_24 = VAR_26 % VAR_17->heads;
  VAR_23 = (u32)VAR_20 % VAR_17->sectors + 1;

  FUNC_0("block %u track %u cyl %u head %u sect %u\n",
   (u32)VAR_20, VAR_26, VAR_25, VAR_24, VAR_23);





  if ((VAR_25 >> 16) || (VAR_24 >> 4) || (VAR_23 >> 8) || (!VAR_23))
   goto out_of_range;

  VAR_16->command = VAR_0;
  VAR_16->nsect = VAR_21 & 0xff;
  VAR_16->lbal = VAR_23;
  VAR_16->lbam = VAR_25;
  VAR_16->lbah = VAR_25 >> 8;
  VAR_16->device |= VAR_24;
 }

 return 0;

invalid_fld:
 FUNC_1(VAR_14->dev, VAR_15, VAR_22, 0xff);
 return 1;

out_of_range:
 FUNC_2(VAR_14->dev, VAR_15, VAR_10, 0x21, 0x0);

 return 1;

nothing_to_do:
 VAR_15->result = VAR_11;
 return 1;
}
