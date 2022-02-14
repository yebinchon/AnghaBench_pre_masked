
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_4__ {int error_code; int extra_len; void* add_sense_code_qual; void* add_sense_code; void* flags; } ;
struct TYPE_3__ {int status; } ;
struct ccb_scsiio {int sense_len; TYPE_2__ sense_data; int scsi_status; TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(struct ccb_scsiio *VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
 VAR_5->ccb_h.status = VAR_1|VAR_0;
 VAR_5->scsi_status = VAR_2;
 VAR_5->sense_data.error_code = VAR_4|VAR_3;
 VAR_5->sense_data.flags = VAR_6;
 VAR_5->sense_data.extra_len = 10;
 VAR_5->sense_data.add_sense_code = VAR_7;
 VAR_5->sense_data.add_sense_code_qual = VAR_8;
 VAR_5->sense_len = sizeof (VAR_5->sense_data);
}
