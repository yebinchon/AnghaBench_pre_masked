
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_sense_hdr {int dummy; } ;
struct cdrom_device_info {int sanyo_slot; } ;
struct cdrom_info {struct cdrom_device_info devinfo; } ;
struct TYPE_4__ {struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int ,int *,int *,struct scsi_sense_hdr*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;

int FUNC_3(ide_drive_t *VAR_5, struct scsi_sense_hdr *VAR_6)
{
 struct cdrom_info *VAR_7 = VAR_5->driver_data;
 struct cdrom_device_info *VAR_8;
 unsigned char VAR_9[VAR_0];

 FUNC_1(VAR_3, "enter");

 if (!VAR_7)
  return -VAR_1;

 VAR_8 = &VAR_7->devinfo;

 FUNC_2(VAR_9, 0, VAR_0);
 VAR_9[0] = VAR_2;





 VAR_9[7] = VAR_8->sanyo_slot % 3;

 return FUNC_0(VAR_5, VAR_9, 0, ((void*)0), ((void*)0), VAR_6, 0, VAR_4);
}
