
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scsi_cmnd {int sense_buffer; } ;
struct ata_taskfile {int dummy; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_taskfile const*,struct ata_device*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

void FUNC_2(struct ata_device *VAR_2,
        struct scsi_cmnd *VAR_3,
        const struct ata_taskfile *VAR_4)
{
 u64 VAR_5;

 if (!VAR_3)
  return;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5 == VAR_1)
  return;

 FUNC_1(VAR_3->sense_buffer,
       VAR_0, VAR_5);
}
