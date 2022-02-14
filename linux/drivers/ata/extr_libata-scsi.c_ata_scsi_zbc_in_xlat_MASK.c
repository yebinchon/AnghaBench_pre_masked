
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; int cmd_len; } ;
struct ata_taskfile {int hob_nsect; int nsect; int feature; int hob_feature; int auxiliary; int lbah; int lbam; int lbal; int hob_lbah; int hob_lbam; int hob_lbal; int flags; int device; int protocol; int command; } ;
struct ata_queued_cmd {int hw_tag; int dev; int complete_fn; int flags; struct scsi_cmnd* scsicmd; struct ata_taskfile tf; } ;


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
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 int VAR_13 ;
 int FUNC_4 (int ,struct scsi_cmnd*,int,int) ;
 int FUNC_5 (int ,struct scsi_cmnd*,int ,int,int) ;
 int FUNC_6 (int const*,int*,int*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static unsigned int FUNC_9(struct ata_queued_cmd *VAR_14)
{
 struct ata_taskfile *VAR_15 = &VAR_14->tf;
 struct scsi_cmnd *VAR_16 = VAR_14->scsicmd;
 const u8 *VAR_17 = VAR_16->cmnd;
 u16 VAR_18, VAR_19 = (u16)-1;
 u8 VAR_20, VAR_21, VAR_22 = 0xff;
 u64 VAR_23;
 u32 VAR_24;

 if (FUNC_8(VAR_16->cmd_len < 16)) {
  FUNC_0(VAR_14->dev, "invalid cdb length %d\n",
        VAR_16->cmd_len);
  VAR_19 = 15;
  goto invalid_fld;
 }
 FUNC_6(VAR_17, &VAR_23, &VAR_24);
 if (VAR_24 != FUNC_7(VAR_16)) {
  FUNC_0(VAR_14->dev, "non-matching transfer count (%d/%d)\n",
        VAR_24, FUNC_7(VAR_16));
  goto invalid_param_len;
 }
 VAR_20 = VAR_17[1] & 0x1f;
 if (VAR_20 != VAR_12) {
  FUNC_0(VAR_14->dev, "invalid service action %d\n", VAR_20);
  VAR_19 = 1;
  goto invalid_fld;
 }




 if ((VAR_24 / 512) > 0xffff || VAR_24 < 512 || (VAR_24 % 512)) {
  FUNC_0(VAR_14->dev, "invalid transfer count %d\n", VAR_24);
  goto invalid_param_len;
 }
 VAR_18 = VAR_24 / 512;
 VAR_21 = VAR_17[14] & 0xbf;

 if (FUNC_2(VAR_14->dev) &&
     FUNC_1(VAR_14->dev)) {
  VAR_15->protocol = VAR_4;
  VAR_15->command = VAR_0;
  VAR_15->hob_nsect = VAR_6 & 0x1f;
  VAR_15->nsect = VAR_14->hw_tag << 3;
  VAR_15->feature = VAR_18 & 0xff;
  VAR_15->hob_feature = (VAR_18 >> 8) & 0xff;
  VAR_15->auxiliary = VAR_7 | (VAR_21 << 8);
 } else {
  VAR_15->command = VAR_1;
  VAR_15->feature = VAR_7;
  VAR_15->protocol = VAR_3;
  VAR_15->hob_feature = VAR_21;
  VAR_15->hob_nsect = (VAR_18 >> 8) & 0xff;
  VAR_15->nsect = VAR_18 & 0xff;
 }
 VAR_15->device = VAR_2;
 VAR_15->lbah = (VAR_23 >> 16) & 0xff;
 VAR_15->lbam = (VAR_23 >> 8) & 0xff;
 VAR_15->lbal = VAR_23 & 0xff;
 VAR_15->hob_lbah = (VAR_23 >> 40) & 0xff;
 VAR_15->hob_lbam = (VAR_23 >> 32) & 0xff;
 VAR_15->hob_lbal = (VAR_23 >> 24) & 0xff;

 VAR_15->flags |= VAR_9 | VAR_8 | VAR_10;
 VAR_14->flags |= VAR_5;

 FUNC_3(VAR_14);

 VAR_14->complete_fn = VAR_13;

 return 0;

invalid_fld:
 FUNC_4(VAR_14->dev, VAR_16, VAR_19, VAR_22);
 return 1;

invalid_param_len:

 FUNC_5(VAR_14->dev, VAR_16, VAR_11, 0x1a, 0x0);
 return 1;
}
