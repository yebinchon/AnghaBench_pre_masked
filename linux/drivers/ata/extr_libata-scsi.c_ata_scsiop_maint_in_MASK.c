
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_scsi_args {TYPE_1__* cmd; struct ata_device* dev; } ;
struct ata_device {int flags; int class; int id; } ;
struct TYPE_2__ {int* cmnd; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_device*,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_scsi_args *VAR_2, u8 *VAR_3)
{
 struct ata_device *VAR_4 = VAR_2->dev;
 u8 *VAR_5 = VAR_2->cmd->cmnd;
 u8 VAR_6 = 0;
 unsigned int VAR_7 = 0;

 if (VAR_5[2] != 1) {
  FUNC_0(VAR_4, "invalid command format %d\n", VAR_5[2]);
  VAR_7 = 2;
  goto out;
 }
 switch (VAR_5[3]) {
 case 156:
 case 152:
 case 151:
 case 147:
 case 138:
 case 146:
 case 145:
 case 136:
 case 144:
 case 140:
 case 141:
 case 135:
 case 139:
 case 155:
 case 148:
 case 150:
 case 149:
 case 130:
 case 132:
 case 131:
 case 158:
 case 157:
 case 134:
 case 133:
 case 154:
 case 153:
 case 137:
  VAR_6 = 3;
  break;
 case 129:
 case 128:
  if (FUNC_1(VAR_4->id) ||
      VAR_4->class == VAR_0)
   VAR_6 = 3;
  break;
 case 143:
 case 142:
  if (VAR_4->flags & VAR_1)
   VAR_6 = 3;
  break;
 default:
  break;
 }
out:
 VAR_3[1] = VAR_6;
 return VAR_7;
}
