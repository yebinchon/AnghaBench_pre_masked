
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct ata_taskfile {int flags; int command; int lbal; int lbam; int lbah; int protocol; } ;
struct ata_queued_cmd {int flags; struct ata_device* dev; TYPE_1__* ap; } ;
struct ata_device {int id; } ;
struct TYPE_2__ {int pflags; } ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_device*,char*,...) ;
 unsigned int FUNC_2 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ata_device*,struct scsi_cmnd*,int ,int ,int ) ;
 int FUNC_5 (struct ata_device*,struct ata_taskfile*) ;

__attribute__((used)) static void FUNC_6(struct ata_queued_cmd *VAR_10,
     struct scsi_cmnd *VAR_11)
{
 struct ata_device *VAR_12 = VAR_10->dev;
 struct ata_taskfile VAR_13;
 unsigned int VAR_14;

 if (VAR_10->ap->pflags & VAR_1) {
  FUNC_1(VAR_12, "sense data available but port frozen\n");
  return;
 }

 if (!VAR_11 || VAR_10->flags & VAR_3)
  return;

 if (!FUNC_3(VAR_12->id)) {
  FUNC_1(VAR_10->dev, "sense data reporting disabled\n");
  return;
 }

 FUNC_0("ATA request sense\n");

 FUNC_5(VAR_12, &VAR_13);
 VAR_13.flags |= VAR_6 | VAR_5;
 VAR_13.flags |= VAR_7 | VAR_8;
 VAR_13.command = VAR_0;
 VAR_13.protocol = VAR_2;

 VAR_14 = FUNC_2(VAR_12, &VAR_13, ((void*)0), VAR_9, ((void*)0), 0, 0);

 if (VAR_13.command & VAR_4) {
  FUNC_4(VAR_12, VAR_11, VAR_13.lbah, VAR_13.lbam, VAR_13.lbal);
  VAR_10->flags |= VAR_3;
 } else {
  FUNC_1(VAR_12, "request sense failed stat %02x emask %x\n",
        VAR_13.command, VAR_14);
 }
}
