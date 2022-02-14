
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; int cmd_len; } ;
struct ata_taskfile {int feature; int nsect; int auxiliary; int hob_feature; int lbah; int lbam; int lbal; int hob_lbah; int hob_lbam; int hob_lbal; int flags; int device; int command; int protocol; } ;
struct ata_queued_cmd {int hw_tag; struct ata_device* dev; struct scsi_cmnd* scsicmd; struct ata_taskfile tf; } ;
struct ata_device {int n_sectors; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*,struct scsi_cmnd*,int,int) ;
 int FUNC_3 (struct ata_device*,struct scsi_cmnd*,int ,int,int) ;
 int FUNC_4 (int const*,int*,scalar_t__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned int FUNC_6(struct ata_queued_cmd *VAR_14)
{
 struct ata_taskfile *VAR_15 = &VAR_14->tf;
 struct scsi_cmnd *VAR_16 = VAR_14->scsicmd;
 struct ata_device *VAR_17 = VAR_14->dev;
 const u8 *VAR_18 = VAR_16->cmnd;
 u8 VAR_19, VAR_20;
 u64 VAR_21;
 u32 VAR_22;
 u16 VAR_23 = (u16)-1;

 if (FUNC_5(VAR_16->cmd_len < 16)) {
  VAR_23 = 15;
  goto invalid_fld;
 }

 VAR_20 = VAR_18[1] & 0x1f;
 if ((VAR_20 != VAR_10) && (VAR_20 != VAR_11) &&
     (VAR_20 != VAR_12) && (VAR_20 != VAR_13)) {
  VAR_23 = 1;
  goto invalid_fld;
 }

 FUNC_4(VAR_18, &VAR_21, &VAR_22);
 if (VAR_22) {



  goto invalid_param_len;
 }

 VAR_19 = VAR_18[14] & 0x1;
 if (VAR_19) {



  VAR_21 = 0;
 } else if (VAR_21 >= VAR_17->n_sectors) {



  VAR_23 = 2;
  goto invalid_fld;
 }

 if (FUNC_1(VAR_14->dev) &&
     FUNC_0(VAR_14->dev)) {
  VAR_15->protocol = VAR_3;
  VAR_15->command = VAR_0;
  VAR_15->feature = VAR_5;
  VAR_15->nsect = VAR_14->hw_tag << 3;
  VAR_15->auxiliary = VAR_20 | ((u16)VAR_19 << 8);
 } else {
  VAR_15->protocol = VAR_4;
  VAR_15->command = VAR_1;
  VAR_15->feature = VAR_20;
  VAR_15->hob_feature = VAR_19;
 }
 VAR_15->lbah = (VAR_21 >> 16) & 0xff;
 VAR_15->lbam = (VAR_21 >> 8) & 0xff;
 VAR_15->lbal = VAR_21 & 0xff;
 VAR_15->hob_lbah = (VAR_21 >> 40) & 0xff;
 VAR_15->hob_lbam = (VAR_21 >> 32) & 0xff;
 VAR_15->hob_lbal = (VAR_21 >> 24) & 0xff;
 VAR_15->device = VAR_2;
 VAR_15->flags |= VAR_7 | VAR_6 | VAR_8;

 return 0;

 invalid_fld:
 FUNC_2(VAR_14->dev, VAR_16, VAR_23, 0xff);
 return 1;
invalid_param_len:

 FUNC_3(VAR_14->dev, VAR_16, VAR_9, 0x1a, 0x0);
 return 1;
}
