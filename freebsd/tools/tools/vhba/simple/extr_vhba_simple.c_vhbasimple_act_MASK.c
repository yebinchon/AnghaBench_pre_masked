
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* disk; TYPE_1__* vhba; } ;
typedef TYPE_3__ vhbasimple_t ;
typedef int uint8_t ;
typedef size_t uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {scalar_t__ target_id; scalar_t__ target_lun; int status; } ;
struct TYPE_8__ {int* cdb_bytes; } ;
struct ccb_scsiio {char sense_data; unsigned int dxfer_len; char* data_ptr; int resid; scalar_t__ scsi_status; TYPE_6__ ccb_h; TYPE_2__ cdb_io; } ;
typedef size_t last_blk ;
typedef int junk ;
struct TYPE_10__ {int tqe; } ;
struct TYPE_7__ {int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;



 int VAR_17 ;


 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int *,TYPE_6__*,int ) ;




 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int,unsigned int) ;
 TYPE_5__ VAR_23 ;
 int FUNC_4 (struct ccb_scsiio*,scalar_t__,int *) ;
 int FUNC_5 (struct ccb_scsiio*,int ,int,int) ;
 int FUNC_6 (int*,size_t*,int*,int,int) ;

__attribute__((used)) static void
FUNC_7(vhbasimple_t *VAR_24, struct ccb_scsiio *VAR_25)
{
 char VAR_26[128];
 uint8_t *VAR_27, *VAR_28, VAR_29;
 uint32_t VAR_30;
 uint64_t VAR_31;

 VAR_30 = 0;
 VAR_29 = VAR_16;

 FUNC_2(&VAR_25->sense_data, 0, sizeof (VAR_25->sense_data));
 VAR_27 = VAR_25->cdb_io.cdb_bytes;

 if (VAR_25->ccb_h.target_id >= VAR_9) {
  VAR_25->ccb_h.status = VAR_3;
  FUNC_0(&VAR_24->vhba->done, &VAR_25->ccb_h, VAR_23.tqe);
  return;
 }
 if (VAR_25->ccb_h.target_lun >= VAR_8 && VAR_27[0] != VAR_7 && VAR_27[0] != VAR_13 && VAR_27[0] != VAR_14) {
  FUNC_5(VAR_25, VAR_21, 0x25, 0x0);
  FUNC_0(&VAR_24->vhba->done, &VAR_25->ccb_h, VAR_23.tqe);
  return;
 }

 switch (VAR_27[0]) {
 case 143:
 case 142:
 {
  unsigned int VAR_32;
  uint8_t VAR_33 = VAR_27[2] & VAR_18;
  uint8_t VAR_34 = VAR_27[2] & VAR_20;

  switch (VAR_33) {
  case 133:
  case 132:
  case 135:
  case 134:
  case 136:
   break;
  default:
   FUNC_5(VAR_25, VAR_21, 0x24, 0x0);
   FUNC_0(&VAR_24->vhba->done, &VAR_25->ccb_h, VAR_23.tqe);
   return;
  }
  FUNC_2(VAR_26, 0, sizeof (VAR_26));
  if (VAR_27[1] & VAR_17) {
   VAR_28 = &VAR_26[4];
  } else {
   VAR_28 = VAR_26;
   VAR_28[3] = 8;
   VAR_28[4] = ((1 << VAR_6) >> 24) & 0xff;
   VAR_28[5] = ((1 << VAR_6) >> 16) & 0xff;
   VAR_28[6] = ((1 << VAR_6) >> 8) & 0xff;
   VAR_28[7] = ((1 << VAR_6)) & 0xff;

   VAR_28[8] = (VAR_5 >> 24) & 0xff;
   VAR_28[9] = (VAR_5 >> 16) & 0xff;
   VAR_28[10] = (VAR_5 >> 8) & 0xff;
   VAR_28[11] = VAR_5 & 0xff;
   VAR_28 += 12;
  }

  if (VAR_33 == 136 || VAR_33 == 133) {
   VAR_28[0] = 133;
   VAR_28[1] = 24;
   if (VAR_34 != VAR_19) {
    VAR_28[10] = (VAR_12 >> 8) & 0xff;
    VAR_28[11] = VAR_12 & 0xff;

    VAR_28[12] = ((1 << VAR_6) >> 8) & 0xff;
    VAR_28[13] = (1 << VAR_6) & 0xff;
   }
   VAR_28 += 26;
  }

  if (VAR_33 == 136 || VAR_33 == 132) {
   VAR_28[0] = 132;
   VAR_28[1] = 24;
   if (VAR_34 != VAR_19) {
    uint32_t VAR_35 = (VAR_5 + ((VAR_11 - 1))) / VAR_11;

    VAR_28[2] = (VAR_35 >> 24) & 0xff;
    VAR_28[3] = (VAR_35 >> 16) & 0xff;
    VAR_28[4] = VAR_35 & 0xff;

    VAR_28[5] = VAR_10;
    VAR_28[20] = 0x1c;
    VAR_28[21] = 0x20;
   }
   VAR_28 += 26;
  }

  if (VAR_33 == 136 || VAR_33 == 135) {
   VAR_28[0] = 135;
   VAR_28[1] = 18;
   VAR_28[2] = 1 << 2;
   VAR_28 += 20;
  }

  if (VAR_33 == 136 || VAR_33 == 134) {
   VAR_28[0] = 134;
   VAR_28[1] = 10;
   if (VAR_34 != VAR_19) {
    VAR_28[3] = 1 << 4;
    VAR_28[8] = 0x75;
    VAR_28[9] = 0x30;
   }
   VAR_28 += 12;
  }
  VAR_32 = (char *)VAR_28 - &VAR_26[0];
  VAR_28[0] = VAR_32 - 4;

  if (VAR_27[0] == 143) {
   VAR_30 = FUNC_3(VAR_27[4], VAR_25->dxfer_len);
  } else {
   uint16_t VAR_36 = (VAR_27[7] << 8) | VAR_27[8];
   VAR_30 = FUNC_3(VAR_36, VAR_25->dxfer_len);
  }
  VAR_30 = FUNC_3(VAR_30, VAR_32);
  if (VAR_30) {
   FUNC_1(VAR_25->data_ptr, VAR_26, VAR_30);
  }
  VAR_25->resid = VAR_25->dxfer_len - VAR_30;
  break;
 }
 case 138:
 case 141:
 case 140:
 case 139:
 case 128:
 case 131:
 case 130:
 case 129:
  if (FUNC_6(VAR_27, &VAR_31, &VAR_30, VAR_5, VAR_6)) {
   FUNC_5(VAR_25, VAR_21, 0x24, 0x0);
   break;
  }
  if (VAR_30) {
   if ((VAR_27[0] & 0xf) == 8) {
    FUNC_1(VAR_25->data_ptr, &VAR_24->disk[VAR_31], VAR_30);
   } else {
    FUNC_1(&VAR_24->disk[VAR_31], VAR_25->data_ptr, VAR_30);
   }
   VAR_25->resid = VAR_25->dxfer_len - VAR_30;
  } else {
   VAR_25->resid = VAR_25->dxfer_len;
  }
  break;
  break;

 case 137:
  if (VAR_27[2] || VAR_27[3] || VAR_27[4] || VAR_27[5]) {
   FUNC_5(VAR_25, VAR_22, 0x24, 0x0);
   break;
  }
  if (VAR_27[8] & 0x1) {
   VAR_25->data_ptr[0] = 0xff;
   VAR_25->data_ptr[1] = 0xff;
   VAR_25->data_ptr[2] = 0xff;
   VAR_25->data_ptr[3] = 0xff;
  } else {
   uint64_t VAR_37 = VAR_5 - 1;
   if (VAR_37 < 0xffffffffULL) {
       VAR_25->data_ptr[0] = (VAR_37 >> 24) & 0xff;
       VAR_25->data_ptr[1] = (VAR_37 >> 16) & 0xff;
       VAR_25->data_ptr[2] = (VAR_37 >> 8) & 0xff;
       VAR_25->data_ptr[3] = (VAR_37) & 0xff;
   } else {
       VAR_25->data_ptr[0] = 0xff;
       VAR_25->data_ptr[1] = 0xff;
       VAR_25->data_ptr[2] = 0xff;
       VAR_25->data_ptr[3] = 0xff;
   }
  }
  VAR_25->data_ptr[4] = ((1 << VAR_6) >> 24) & 0xff;
  VAR_25->data_ptr[5] = ((1 << VAR_6) >> 16) & 0xff;
  VAR_25->data_ptr[6] = ((1 << VAR_6) >> 8) & 0xff;
  VAR_25->data_ptr[7] = ((1 << VAR_6)) & 0xff;
  break;

 default:
  FUNC_4(VAR_25, VAR_8, ((void*)0));
  break;
 }
 VAR_25->ccb_h.status &= ~VAR_4;
 if (VAR_25->scsi_status != VAR_16) {
  VAR_25->ccb_h.status |= VAR_2;
  if (VAR_25->scsi_status == VAR_15) {
   VAR_25->ccb_h.status |= VAR_0;
  }
 } else {
  VAR_25->scsi_status = VAR_16;
  VAR_25->ccb_h.status |= VAR_1;
 }
 FUNC_0(&VAR_24->vhba->done, &VAR_25->ccb_h, VAR_23.tqe);
}
