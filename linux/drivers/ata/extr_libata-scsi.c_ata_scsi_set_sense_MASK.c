
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int result; int sense_buffer; } ;
struct ata_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;

void FUNC_1(struct ata_device *VAR_3, struct scsi_cmnd *VAR_4,
   u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 bool VAR_8 = (VAR_3->flags & VAR_0);

 if (!VAR_4)
  return;

 VAR_4->result = (VAR_1 << 24) | VAR_2;

 FUNC_0(VAR_8, VAR_4->sense_buffer, VAR_5, VAR_6, VAR_7);
}
