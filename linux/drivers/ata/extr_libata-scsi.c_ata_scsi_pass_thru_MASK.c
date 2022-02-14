
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; scalar_t__ sc_data_direction; TYPE_1__* device; } ;
struct ata_taskfile {scalar_t__ protocol; int flags; int hob_feature; int hob_nsect; int hob_lbal; int hob_lbam; int hob_lbah; int feature; int nsect; int lbal; int lbam; int lbah; int device; int command; int auxiliary; } ;
struct ata_queued_cmd {int hw_tag; int flags; int sect_size; struct ata_device* dev; struct scsi_cmnd* scsicmd; struct ata_taskfile tf; } ;
struct ata_device {scalar_t__ dma_mode; unsigned int multi_count; scalar_t__ devno; } ;
struct TYPE_2__ {int sector_size; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int const VAR_18 ;
 int FUNC_0 (struct ata_device*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (struct ata_device*,struct scsi_cmnd*,int,int) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (struct ata_taskfile*) ;
 int VAR_19 ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static unsigned int FUNC_9(struct ata_queued_cmd *VAR_20)
{
 struct ata_taskfile *VAR_21 = &(VAR_20->tf);
 struct scsi_cmnd *VAR_22 = VAR_20->scsicmd;
 struct ata_device *VAR_23 = VAR_20->dev;
 const u8 *VAR_24 = VAR_22->cmnd;
 u16 VAR_25;
 u16 VAR_26 = 0;


 if (VAR_24[0] == VAR_18)
  VAR_26 = 9;

 VAR_21->protocol = FUNC_4(VAR_24[1 + VAR_26]);
 if (VAR_21->protocol == VAR_7) {
  VAR_25 = 1;
  goto invalid_fld;
 }

 if (FUNC_1(VAR_21->protocol) && (VAR_24[2 + VAR_26] & 0x3) == 0)
  VAR_21->protocol = VAR_5;


 VAR_21->flags |= VAR_13;





 if (VAR_24[0] == VAR_1) {





  if (VAR_24[1] & 0x01) {
   VAR_21->hob_feature = VAR_24[3];
   VAR_21->hob_nsect = VAR_24[5];
   VAR_21->hob_lbal = VAR_24[7];
   VAR_21->hob_lbam = VAR_24[9];
   VAR_21->hob_lbah = VAR_24[11];
   VAR_21->flags |= VAR_14;
  } else
   VAR_21->flags &= ~VAR_14;




  VAR_21->feature = VAR_24[4];
  VAR_21->nsect = VAR_24[6];
  VAR_21->lbal = VAR_24[8];
  VAR_21->lbam = VAR_24[10];
  VAR_21->lbah = VAR_24[12];
  VAR_21->device = VAR_24[13];
  VAR_21->command = VAR_24[14];
 } else if (VAR_24[0] == VAR_0) {



  VAR_21->flags &= ~VAR_14;

  VAR_21->feature = VAR_24[3];
  VAR_21->nsect = VAR_24[4];
  VAR_21->lbal = VAR_24[5];
  VAR_21->lbam = VAR_24[6];
  VAR_21->lbah = VAR_24[7];
  VAR_21->device = VAR_24[8];
  VAR_21->command = VAR_24[9];
 } else {





  if (VAR_24[10] & 0x01) {
   VAR_21->hob_feature = VAR_24[20];
   VAR_21->hob_nsect = VAR_24[22];
   VAR_21->hob_lbal = VAR_24[16];
   VAR_21->hob_lbam = VAR_24[15];
   VAR_21->hob_lbah = VAR_24[14];
   VAR_21->flags |= VAR_14;
  } else
   VAR_21->flags &= ~VAR_14;

  VAR_21->feature = VAR_24[21];
  VAR_21->nsect = VAR_24[23];
  VAR_21->lbal = VAR_24[19];
  VAR_21->lbam = VAR_24[18];
  VAR_21->lbah = VAR_24[17];
  VAR_21->device = VAR_24[24];
  VAR_21->command = VAR_24[25];
  VAR_21->auxiliary = FUNC_6(&VAR_24[28]);
 }


 if (FUNC_1(VAR_21->protocol))
  VAR_21->nsect = VAR_20->hw_tag << 3;


 VAR_21->device = VAR_23->devno ?
  VAR_21->device | VAR_3 : VAR_21->device & ~VAR_3;

 switch (VAR_21->command) {

 case 148:
 case 147:
 case 136:
 case 135:
  if (VAR_21->protocol != VAR_6 || VAR_21->nsect != 1) {
   VAR_25 = 1;
   goto invalid_fld;
  }
  VAR_20->sect_size = FUNC_8(VAR_22);
  break;


 case 157:
 case 159:
 case 158:

 case 150:
 case 149:
 case 144:

 case 156:
 case 146:
 case 145:
 case 154:
 case 153:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 131:
 case 130:
 case 155:
 case 134:
 case 133:
 case 132:
 case 152:
 case 151:
 case 129:
 case 128:
  VAR_20->sect_size = VAR_22->device->sector_size;
  break;


 default:
  VAR_20->sect_size = VAR_10;
 }






 VAR_21->flags |= VAR_12 | VAR_11;
 if (VAR_22->sc_data_direction == VAR_16)
  VAR_21->flags |= VAR_15;

 VAR_20->flags |= VAR_9 | VAR_8;







 FUNC_3(VAR_20);


 if (VAR_21->protocol == VAR_4 && VAR_23->dma_mode == 0) {
  VAR_25 = 1;
  goto invalid_fld;
 }


 if (FUNC_1(VAR_21->protocol) && !FUNC_2(VAR_23)) {
  VAR_25 = 1;
  goto invalid_fld;
 }


 if ((VAR_24[1] & 0xe0) && !FUNC_7(VAR_21)) {
  VAR_25 = 1;
  goto invalid_fld;
 }

 if (FUNC_7(VAR_21)) {
  unsigned int VAR_27 = 1 << (VAR_24[1] >> 5);




  if (VAR_27 != VAR_23->multi_count)
   FUNC_0(VAR_23, "invalid multi_count %u ignored\n",
         VAR_27);
 }
 if (VAR_21->command == VAR_2 &&
     VAR_21->feature == VAR_17) {
  VAR_25 = (VAR_24[0] == VAR_1) ? 4 : 3;
  goto invalid_fld;
 }
 if (VAR_21->command >= 0x5C && VAR_21->command <= 0x5F && !VAR_19) {
  VAR_25 = (VAR_24[0] == VAR_1) ? 14 : 9;
  goto invalid_fld;
 }

 return 0;

 invalid_fld:
 FUNC_5(VAR_23, VAR_22, VAR_25, 0xff);
 return 1;
}
