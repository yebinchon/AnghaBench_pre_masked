
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct scsi_device {size_t sector_size; } ;
struct scsi_cmnd {int* cmnd; int cmd_len; int request; struct scsi_device* device; } ;
struct ata_taskfile {int hob_nsect; int nsect; int hob_feature; int feature; int auxiliary; int flags; int command; int protocol; } ;
struct ata_queued_cmd {int hw_tag; struct ata_device* dev; struct scsi_cmnd* scsicmd; struct ata_taskfile tf; } ;
struct ata_device {int horkage; int id; int dma_mode; } ;


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
 int FUNC_0 (struct scsi_cmnd*,int const,int ,int) ;
 scalar_t__ FUNC_1 (struct ata_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ata_device*) ;
 int FUNC_4 (struct ata_queued_cmd*) ;
 int FUNC_5 (struct ata_device*,struct scsi_cmnd*,int,int) ;
 int FUNC_6 (struct ata_device*,struct scsi_cmnd*,int ,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int const*,int *,int*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static unsigned int FUNC_11(struct ata_queued_cmd *VAR_12)
{
 struct ata_taskfile *VAR_13 = &VAR_12->tf;
 struct scsi_cmnd *VAR_14 = VAR_12->scsicmd;
 struct scsi_device *VAR_15 = VAR_14->device;
 size_t VAR_16 = VAR_15->sector_size;
 struct ata_device *VAR_17 = VAR_12->dev;
 const u8 *VAR_18 = VAR_14->cmnd;
 u64 VAR_19;
 u32 VAR_20;
 const u32 VAR_21 = VAR_16 >> 3;
 u32 VAR_22;
 u16 VAR_23;
 u8 VAR_24 = 0xff;
 u8 VAR_25 = VAR_18[1] & 0x8;


 if (FUNC_10(!VAR_17->dma_mode))
  goto invalid_opcode;






 if (FUNC_10(FUNC_7(VAR_14->request)))
  goto invalid_opcode;

 if (FUNC_10(VAR_14->cmd_len < 16)) {
  VAR_23 = 15;
  goto invalid_fld;
 }
 FUNC_8(VAR_18, &VAR_19, &VAR_20);

 if (!VAR_25 ||
     (VAR_17->horkage & VAR_3) ||
     !FUNC_2(VAR_17->id)) {
  VAR_23 = 1;
  VAR_24 = 3;
  goto invalid_fld;
 }

 if (VAR_20 > 0xffff * VAR_21) {
  VAR_23 = 2;
  goto invalid_fld;
 }





 if (!FUNC_9(VAR_14))
  goto invalid_param_len;







 VAR_22 = FUNC_0(VAR_14, VAR_21, VAR_19, VAR_20);
 if (VAR_22 != VAR_16)
  goto invalid_param_len;

 if (FUNC_3(VAR_17) && FUNC_1(VAR_17)) {

  VAR_13->protocol = VAR_5;
  VAR_13->command = VAR_1;
  VAR_13->hob_nsect = VAR_6 & 0x1f;
  VAR_13->nsect = VAR_12->hw_tag << 3;
  VAR_13->hob_feature = (VAR_22 / 512) >> 8;
  VAR_13->feature = VAR_22 / 512;

  VAR_13->auxiliary = 1;
 } else {
  VAR_13->protocol = VAR_4;
  VAR_13->hob_feature = 0;
  VAR_13->feature = VAR_2;
  VAR_13->hob_nsect = (VAR_22 / 512) >> 8;
  VAR_13->nsect = VAR_22 / 512;
  VAR_13->command = VAR_0;
 }

 VAR_13->flags |= VAR_8 | VAR_7 | VAR_9 |
       VAR_10;

 FUNC_4(VAR_12);

 return 0;

invalid_fld:
 FUNC_5(VAR_17, VAR_14, VAR_23, VAR_24);
 return 1;
invalid_param_len:

 FUNC_6(VAR_17, VAR_14, VAR_11, 0x1a, 0x0);
 return 1;
invalid_opcode:

 FUNC_6(VAR_17, VAR_14, VAR_11, 0x20, 0x0);
 return 1;
}
