
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct media_event_desc {scalar_t__ door_open; scalar_t__ media_present; } ;
struct cdrom_device_info {int * handle; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,struct scsi_sense_hdr*) ;
 int FUNC_1 (struct cdrom_device_info*,struct media_event_desc*) ;

int FUNC_2(struct cdrom_device_info *VAR_8, int VAR_9)
{
 ide_drive_t *VAR_10 = VAR_8->handle;
 struct media_event_desc VAR_11;
 struct scsi_sense_hdr VAR_12;
 int VAR_13;

 if (VAR_9 != VAR_0)
  return -VAR_5;

 VAR_13 = FUNC_0(VAR_10, &VAR_12);
 if (!VAR_13 || VAR_12.sense_key == VAR_7)
  return VAR_1;

 if (!FUNC_1(VAR_8, &VAR_11)) {
  if (VAR_11.media_present)
   return VAR_1;
  else if (VAR_11.door_open)
   return VAR_4;
  else
   return VAR_3;
 }

 if (VAR_12.sense_key == VAR_6 && VAR_12.asc == 0x04
   && VAR_12.ascq == 0x04)
  return VAR_1;






 if (VAR_12.sense_key == VAR_6) {
  if (VAR_12.asc == 0x3a && VAR_12.ascq == 1)
   return VAR_3;
  else
   return VAR_4;
 }
 return VAR_2;
}
