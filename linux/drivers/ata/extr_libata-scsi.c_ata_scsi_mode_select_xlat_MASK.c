
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct scsi_cmnd {int* cmnd; int cmd_len; int result; } ;
struct ata_queued_cmd {int dev; struct scsi_cmnd* scsicmd; } ;
struct TYPE_3__ {int length; } ;


 int VAR_0 ;


 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_queued_cmd*,int const*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct ata_queued_cmd*,int const*,unsigned int,unsigned int*) ;
 int FUNC_3 (int ,struct scsi_cmnd*,unsigned int,int) ;
 int FUNC_4 (int ,struct scsi_cmnd*,unsigned int) ;
 int FUNC_5 (int ,struct scsi_cmnd*,int ,int,int) ;
 int* FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 TYPE_1__* FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static unsigned int FUNC_10(struct ata_queued_cmd *VAR_4)
{
 struct scsi_cmnd *VAR_5 = VAR_4->scsicmd;
 const u8 *VAR_6 = VAR_5->cmnd;
 const u8 *VAR_7;
 u8 VAR_8, VAR_9;
 unsigned VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;
 u16 VAR_15 = (u16)-1;
 u8 VAR_16 = 0xff;

 FUNC_0("ENTER\n");

 VAR_10 = (VAR_6[0] == VAR_2);
 if (VAR_10) {
  if (VAR_5->cmd_len < 5) {
   VAR_15 = 4;
   goto invalid_fld;
  }

  VAR_14 = VAR_6[4];
  VAR_12 = 4;
 } else {
  if (VAR_5->cmd_len < 9) {
   VAR_15 = 8;
   goto invalid_fld;
  }

  VAR_14 = (VAR_6[7] << 8) + VAR_6[8];
  VAR_12 = 8;
 }


 if ((VAR_6[1] & 0x11) != 0x10) {
  VAR_15 = 1;
  VAR_16 = (VAR_6[1] & 0x01) ? 1 : 5;
  goto invalid_fld;
 }


 if (!FUNC_7(VAR_5) || FUNC_8(VAR_5)->length < VAR_14)
  goto invalid_param_len;

 VAR_7 = FUNC_6(FUNC_9(FUNC_8(VAR_5)));


 if (VAR_14 < VAR_12)
  goto invalid_param_len;

 if (VAR_10)
  VAR_13 = VAR_7[3];
 else
  VAR_13 = (VAR_7[6] << 8) + VAR_7[7];

 VAR_14 -= VAR_12;
 VAR_7 += VAR_12;
 if (VAR_14 < VAR_13)
  goto invalid_param_len;
 if (VAR_13 != 0 && VAR_13 != 8) {
  VAR_15 = (VAR_10) ? 3 : 6;
  VAR_15 += VAR_13 + VAR_12;
  goto invalid_param;
 }

 VAR_14 -= VAR_13;
 VAR_7 += VAR_13;
 if (VAR_14 == 0)
  goto skip;


 VAR_8 = VAR_7[0] & 0x3f;
 if (VAR_7[0] & 0x40) {
  if (VAR_14 < 4)
   goto invalid_param_len;

  VAR_9 = VAR_7[1];
  VAR_11 = (VAR_7[2] << 8) | VAR_7[3];
  VAR_7 += 4;
  VAR_14 -= 4;
 } else {
  if (VAR_14 < 2)
   goto invalid_param_len;

  VAR_9 = 0;
  VAR_11 = VAR_7[1];
  VAR_7 += 2;
  VAR_14 -= 2;
 }





 if (VAR_9 && (VAR_9 != VAR_0)) {
  VAR_15 = (VAR_7[0] & 0x40) ? 1 : 0;
  VAR_15 += VAR_12 + VAR_13;
  goto invalid_param;
 }
 if (VAR_11 > VAR_14)
  goto invalid_param_len;

 switch (VAR_8) {
 case 129:
  if (FUNC_1(VAR_4, VAR_7, VAR_11, &VAR_15) < 0) {
   VAR_15 += VAR_12 + VAR_13;
   goto invalid_param;
  }
  break;
 case 128:
  if (FUNC_2(VAR_4, VAR_7, VAR_11, &VAR_15) < 0) {
   VAR_15 += VAR_12 + VAR_13;
   goto invalid_param;
  } else {
   goto skip;
  }
  break;
 default:
  VAR_15 = VAR_13 + VAR_12;
  goto invalid_param;
 }





 if (VAR_14 > VAR_11)
  goto invalid_param;

 return 0;

 invalid_fld:
 FUNC_3(VAR_4->dev, VAR_5, VAR_15, VAR_16);
 return 1;

 invalid_param:
 FUNC_4(VAR_4->dev, VAR_5, VAR_15);
 return 1;

 invalid_param_len:

 FUNC_5(VAR_4->dev, VAR_5, VAR_1, 0x1a, 0x0);
 return 1;

 skip:
 VAR_5->result = VAR_3;
 return 1;
}
