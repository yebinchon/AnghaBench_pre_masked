
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; } ;
struct ata_taskfile {int flags; int feature; int lbam; int lbah; int nsect; int lbal; int command; int protocol; } ;
struct ata_queued_cmd {TYPE_1__* dev; struct ata_taskfile tf; struct scsi_cmnd* scsicmd; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (TYPE_1__*,struct scsi_cmnd*,int,int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static unsigned int FUNC_5(struct ata_queued_cmd *VAR_8)
{
 struct scsi_cmnd *VAR_9 = VAR_8->scsicmd;
 const u8 *VAR_10 = VAR_9->cmnd;
 struct ata_taskfile *VAR_11 = &VAR_8->tf;
 u8 VAR_12 = VAR_10[1];
 bool VAR_13 = (VAR_10[0] == VAR_7);
 u16 VAR_14 = FUNC_3(&VAR_10[2]);
 u32 VAR_15 = FUNC_4(&VAR_10[6]);
 bool VAR_16 = !(VAR_8->dev->flags & VAR_0);




 if (VAR_12 == 0xef) {
  FUNC_1(VAR_8->dev, VAR_9, 1, 0);
  return 1;
 }

 if (VAR_10[4] & 7) {
  if (VAR_15 > 0xffff) {
   FUNC_1(VAR_8->dev, VAR_9, 6, 0);
   return 1;
  }
 } else {
  if (VAR_15 > 0x01fffe00) {
   FUNC_1(VAR_8->dev, VAR_9, 6, 0);
   return 1;
  }


  VAR_15 = (VAR_15 + 511) / 512;
 }

 VAR_11->protocol = VAR_16 ? VAR_1 : VAR_2;
 VAR_11->flags |= VAR_3 | VAR_4 | VAR_5;
 if (VAR_13)
  VAR_11->flags |= VAR_6;
 VAR_11->command = FUNC_2(VAR_15, VAR_13, VAR_16);
 VAR_11->feature = VAR_12;
 VAR_11->lbam = VAR_14 & 0xff;
 VAR_11->lbah = VAR_14 >> 8;

 if (VAR_15) {
  VAR_11->nsect = VAR_15 & 0xff;
  VAR_11->lbal = VAR_15 >> 8;
 } else {
  if (!VAR_13)
   VAR_11->lbah = (1 << 7);
 }

 FUNC_0(VAR_8);
 return 0;
}
