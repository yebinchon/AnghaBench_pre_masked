
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int scsi_status; int resid; int dxfer_len; } ;
struct TYPE_3__ {int status; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef int camdd_buf_status ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
camdd_buf_status
FUNC_0(union ccb *VAR_6, int VAR_7)
{
 camdd_buf_status VAR_8 = VAR_2;
 cam_status VAR_9;

 VAR_9 = VAR_6->ccb_h.status & VAR_5;

 switch (VAR_7) {
 case 137:
  switch (VAR_9) {
  case 140: {
   if (VAR_6->csio.resid == 0) {
    VAR_8 = VAR_3;
   } else if (VAR_6->csio.dxfer_len > VAR_6->csio.resid) {
    VAR_8 = VAR_4;
   } else {
    VAR_8 = VAR_0;
   }
   break;
  }
  case 139: {
   switch (VAR_6->csio.scsi_status) {
   case 130:
   case 133:
   case 132:
   case 131:
    VAR_8 = VAR_3;
    break;
   case 134:
   case 135:
   case 129:
   case 136:
   case 128:
   default:
    VAR_8 = VAR_1;
    break;
   }
   break;
  }
  default:
   VAR_8 = VAR_1;
   break;
  }
  break;
 case 138:
  switch (VAR_9) {
  case 140:
   VAR_8 = VAR_3;
   break;
  default:
   VAR_8 = VAR_1;
   break;
  }
  break;
 default:
  VAR_8 = VAR_1;
  break;
 }

 return (VAR_8);
}
