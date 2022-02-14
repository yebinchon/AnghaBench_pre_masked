
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct scsi_cmnd {int sense_buffer; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_device*,struct scsi_cmnd*,int ,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ata_device *VAR_2,
           struct scsi_cmnd *VAR_3, u16 VAR_4, u8 VAR_5)
{
 FUNC_0(VAR_2, VAR_3, VAR_0, 0x24, 0x0);

 FUNC_1(VAR_3->sense_buffer, VAR_1,
         VAR_4, VAR_5, 1);
}
