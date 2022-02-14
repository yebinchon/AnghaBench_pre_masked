
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ata_scsi_args {TYPE_1__* cmd; int id; struct ata_device* dev; } ;
struct ata_device {int flags; scalar_t__ multi_count; } ;
typedef int sat_blk_desc ;
struct TYPE_3__ {int* cmnd; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (struct ata_device*,int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct ata_device*,TYPE_1__*,int,int) ;
 int FUNC_6 (struct ata_device*,TYPE_1__*,int ,int,int) ;
 int FUNC_7 (int*,int const*,int) ;

__attribute__((used)) static unsigned int FUNC_8(struct ata_scsi_args *VAR_5, u8 *VAR_6)
{
 struct ata_device *VAR_7 = VAR_5->dev;
 u8 *VAR_8 = VAR_5->cmd->cmnd, *VAR_9 = VAR_6;
 static const u8 VAR_10[] = {
  0, 0, 0, 0,
  0,
  0, 0x2, 0x0
 };
 u8 VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17 = 0xff;
 u16 VAR_18;

 FUNC_0("ENTER\n");

 VAR_15 = (VAR_8[0] == VAR_4);
 VAR_13 = !(VAR_8[1] & 0x8);




 VAR_14 = VAR_8[2] >> 6;
 switch (VAR_14) {
 case 0:
 case 1:
 case 2:
  break;
 case 3:
  goto saving_not_supp;
 default:
  VAR_18 = 2;
  VAR_17 = 6;
  goto invalid_fld;
 }

 if (VAR_15)
  VAR_9 += 4 + (VAR_13 ? 8 : 0);
 else
  VAR_9 += 8 + (VAR_13 ? 8 : 0);

 VAR_11 = VAR_8[2] & 0x3f;
 VAR_12 = VAR_8[3];




 if (VAR_12 && (VAR_12 != VAR_0)) {
  VAR_18 = 3;
  goto invalid_fld;
 }

 switch(VAR_11) {
 case 128:
  VAR_9 += FUNC_4(VAR_9, VAR_14 == 1);
  break;

 case 130:
  VAR_9 += FUNC_2(VAR_5->id, VAR_9, VAR_14 == 1);
  break;

 case 129:
  VAR_9 += FUNC_3(VAR_5->dev, VAR_9, VAR_14 == 1);
  break;

 case 131:
  VAR_9 += FUNC_4(VAR_9, VAR_14 == 1);
  VAR_9 += FUNC_2(VAR_5->id, VAR_9, VAR_14 == 1);
  VAR_9 += FUNC_3(VAR_5->dev, VAR_9, VAR_14 == 1);
  break;

 default:
  VAR_18 = 2;
  goto invalid_fld;
 }

 VAR_16 = 0;
 if (FUNC_1(VAR_5->id) && (VAR_7->flags & VAR_1) &&
     (!(VAR_7->flags & VAR_2) || VAR_7->multi_count))
  VAR_16 = 1 << 4;

 if (VAR_15) {
  VAR_6[0] = VAR_9 - VAR_6 - 1;
  VAR_6[2] |= VAR_16;
  if (VAR_13) {
   VAR_6[3] = sizeof(VAR_10);
   FUNC_7(VAR_6 + 4, VAR_10, sizeof(VAR_10));
  }
 } else {
  unsigned int VAR_19 = VAR_9 - VAR_6 - 2;

  VAR_6[0] = VAR_19 >> 8;
  VAR_6[1] = VAR_19;
  VAR_6[3] |= VAR_16;
  if (VAR_13) {
   VAR_6[7] = sizeof(VAR_10);
   FUNC_7(VAR_6 + 8, VAR_10, sizeof(VAR_10));
  }
 }
 return 0;

invalid_fld:
 FUNC_5(VAR_7, VAR_5->cmd, VAR_18, VAR_17);
 return 1;

saving_not_supp:
 FUNC_6(VAR_7, VAR_5->cmd, VAR_3, 0x39, 0x0);

 return 1;
}
