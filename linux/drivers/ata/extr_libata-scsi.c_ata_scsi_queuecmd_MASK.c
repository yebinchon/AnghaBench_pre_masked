
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;struct scsi_device* device; } ;
struct ata_port {int lock; } ;
struct ata_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,struct ata_device*) ;
 int FUNC_1 (struct ata_port*,struct scsi_cmnd*) ;
 struct ata_device* FUNC_2 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_3 (struct Scsi_Host*) ;
 scalar_t__ FUNC_4 (struct ata_device*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (struct scsi_cmnd*) ;

int FUNC_8(struct Scsi_Host *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct ata_port *VAR_3;
 struct ata_device *VAR_4;
 struct scsi_device *VAR_5 = VAR_2->device;
 int VAR_6 = 0;
 unsigned long VAR_7;

 VAR_3 = FUNC_3(VAR_1);

 FUNC_5(VAR_3->lock, VAR_7);

 FUNC_1(VAR_3, VAR_2);

 VAR_4 = FUNC_2(VAR_3, VAR_5);
 if (FUNC_4(VAR_4))
  VAR_6 = FUNC_0(VAR_2, VAR_4);
 else {
  VAR_2->result = (VAR_0 << 16);
  VAR_2->scsi_done(VAR_2);
 }

 FUNC_6(VAR_3->lock, VAR_7);

 return VAR_6;
}
