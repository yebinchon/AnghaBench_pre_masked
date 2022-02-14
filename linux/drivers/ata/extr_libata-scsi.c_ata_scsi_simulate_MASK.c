
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ata_scsi_args {struct scsi_cmnd* cmd; int id; struct ata_device* dev; } ;
struct ata_device {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int const VAR_3 ;






 int const VAR_4 ;






 int FUNC_0 (struct ata_scsi_args*,int ) ;
 int FUNC_1 (struct ata_device*,struct scsi_cmnd*,int,int) ;
 int FUNC_2 (struct ata_device*,struct scsi_cmnd*,int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct scsi_cmnd*) ;

void FUNC_4(struct ata_device *VAR_18, struct scsi_cmnd *VAR_19)
{
 struct ata_scsi_args VAR_20;
 const u8 *VAR_21 = VAR_19->cmnd;
 u8 VAR_22;

 VAR_20.dev = VAR_18;
 VAR_20.id = VAR_18->id;
 VAR_20.cmd = VAR_19;

 switch(VAR_21[0]) {
 case 141:
  if (VAR_21[1] & 2)
   FUNC_1(VAR_18, VAR_19, 1, 0xff);
  else if ((VAR_21[1] & 1) == 0)
   FUNC_0(&VAR_20, VAR_13);
  else switch (VAR_21[2]) {
  case 0x00:
   FUNC_0(&VAR_20, VAR_5);
   break;
  case 0x80:
   FUNC_0(&VAR_20, VAR_6);
   break;
  case 0x83:
   FUNC_0(&VAR_20, VAR_7);
   break;
  case 0x89:
   FUNC_0(&VAR_20, VAR_8);
   break;
  case 0xb0:
   FUNC_0(&VAR_20, VAR_9);
   break;
  case 0xb1:
   FUNC_0(&VAR_20, VAR_10);
   break;
  case 0xb2:
   FUNC_0(&VAR_20, VAR_11);
   break;
  case 0xb6:
   if (VAR_18->flags & VAR_0) {
    FUNC_0(&VAR_20, VAR_12);
    break;
   }

  default:
   FUNC_1(VAR_18, VAR_19, 2, 0xff);
   break;
  }
  break;

 case 139:
 case 138:
  FUNC_0(&VAR_20, VAR_15);
  break;

 case 137:
  FUNC_0(&VAR_20, VAR_16);
  break;

 case 130:
  if ((VAR_21[1] & 0x1f) == VAR_4)
   FUNC_0(&VAR_20, VAR_16);
  else
   FUNC_1(VAR_18, VAR_19, 1, 0xff);
  break;

 case 136:
  FUNC_0(&VAR_20, VAR_17);
  break;

 case 135:
  FUNC_2(VAR_18, VAR_19, 0, 0, 0);
  VAR_19->result = (VAR_1 << 24);
  break;




 case 129:



 case 134:
 case 132:
 case 133:
 case 128:
  break;

 case 131:
  VAR_22 = VAR_21[1] & ~(1 << 3);
  if (VAR_22 != 0x4 || VAR_21[3] || VAR_21[4])
   FUNC_1(VAR_18, VAR_19, 1, 0xff);
  break;

 case 140:
  if (VAR_21[1] == VAR_3)
   FUNC_0(&VAR_20, VAR_14);
  else
   FUNC_1(VAR_18, VAR_19, 1, 0xff);
  break;


 default:
  FUNC_2(VAR_18, VAR_19, VAR_2, 0x20, 0x0);

  break;
 }

 VAR_19->scsi_done(VAR_19);
}
