
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ func_code; int flags; int status; size_t target_id; scalar_t__ recovery_type; int path; } ;
struct TYPE_10__ {int flags; int control; } ;
struct ata_res {int lba_low; int lba_mid; int lba_high; int sector_count; void* sector_count_exp; void* lba_high_exp; void* lba_mid_exp; void* lba_low_exp; void* device; void* error; void* status; } ;
struct TYPE_11__ {void* dxfer_len; TYPE_3__ cmd; void* resid; struct ata_res res; } ;
struct TYPE_9__ {void* dxfer_len; int scsi_status; void* resid; } ;
union ccb {TYPE_5__ ccb_h; TYPE_4__ ataio; TYPE_2__ csio; } ;
typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int data_map; } ;
struct fsl_sata_slot {int slot; union ccb* ccb; int state; TYPE_1__ dma; struct fsl_sata_channel* ch; } ;
struct fsl_sata_cmd_tab {void** sfis; } ;
struct fsl_sata_cmd_list {int ttl; } ;
struct TYPE_14__ {int data_tag; int work_map; int work_tag; } ;
struct fsl_sata_channel {int eslots; int fatalerr; int oslots; int rslots; int aslots; scalar_t__ numrslots; int toslots; int pm_level; int pm_timer; scalar_t__ pm_present; TYPE_6__* curr; int sim; union ccb* frozen; scalar_t__ numhslots; int recoverycmd; union ccb** hold; int * numtslotspd; int numtslots; int r_mem; int * numrslotspd; TYPE_7__ dma; } ;
typedef enum fsl_sata_err_type { ____Placeholder_fsl_sata_err_type } fsl_sata_err_type ;
struct TYPE_13__ {int caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct fsl_sata_cmd_list* FUNC_2 (struct fsl_sata_channel*,struct fsl_sata_slot*) ;
 struct fsl_sata_cmd_tab* FUNC_3 (struct fsl_sata_channel*,struct fsl_sata_slot*) ;







 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ata_res*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_9 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_10 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_11 (struct fsl_sata_channel*) ;
 int FUNC_12 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_13 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_14 (struct fsl_sata_channel*) ;
 int FUNC_15 (struct fsl_sata_channel*) ;
 int FUNC_16 (struct fsl_sata_channel*) ;
 int FUNC_17 (struct fsl_sata_channel*) ;
 int VAR_32 ;
 void* FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int ) ;

__attribute__((used)) static void
FUNC_22(struct fsl_sata_slot *VAR_33, enum fsl_sata_err_type VAR_34)
{
 struct fsl_sata_channel *VAR_35 = VAR_33->ch;
 union ccb *VAR_36 = VAR_33->ccb;
 struct fsl_sata_cmd_list *VAR_37;
 int VAR_38;
 uint32_t VAR_39;

 FUNC_4(VAR_35->dma.work_tag, VAR_35->dma.work_map,
     VAR_1 | VAR_2);
 VAR_37 = FUNC_2(VAR_35, VAR_33);

 if (VAR_36->ccb_h.func_code == VAR_30) {
  struct ata_res *VAR_40 = &VAR_36->ataio.res;

  if ((VAR_34 == 129) ||
      (VAR_36->ataio.cmd.flags & VAR_5)) {
   struct fsl_sata_cmd_tab *VAR_41 = FUNC_3(VAR_35, VAR_33);
   uint8_t *VAR_42 = VAR_41->sfis;

   VAR_40->status = VAR_42[2];
   VAR_40->error = VAR_42[3];
   VAR_40->lba_low = VAR_42[4];
   VAR_40->lba_mid = VAR_42[5];
   VAR_40->lba_high = VAR_42[6];
   VAR_40->device = VAR_42[7];
   VAR_40->lba_low_exp = VAR_42[8];
   VAR_40->lba_mid_exp = VAR_42[9];
   VAR_40->lba_high_exp = VAR_42[10];
   VAR_40->sector_count = VAR_42[12];
   VAR_40->sector_count_exp = VAR_42[13];

   if ((VAR_36->ataio.cmd.flags & VAR_3) &&
       (VAR_36->ataio.cmd.control & VAR_0) == 0) {
    VAR_39 = FUNC_0(VAR_35->r_mem, VAR_23);
    VAR_40->lba_high = VAR_39 >> 24;
    VAR_40->lba_mid = VAR_39 >> 16;
    VAR_40->lba_low = VAR_39 >> 8;
    VAR_40->sector_count = VAR_39;
   }
  } else
   FUNC_6(VAR_40, sizeof(*VAR_40));
  if ((VAR_36->ataio.cmd.flags & VAR_4) == 0 &&
      (VAR_36->ccb_h.flags & VAR_10) != VAR_11) {
   VAR_36->ataio.resid =
       VAR_36->ataio.dxfer_len - FUNC_18(VAR_37->ttl);
  }
 } else {
  if ((VAR_36->ccb_h.flags & VAR_10) != VAR_11) {
   VAR_36->csio.resid =
       VAR_36->csio.dxfer_len - FUNC_18(VAR_37->ttl);
  }
 }
 if ((VAR_36->ccb_h.flags & VAR_10) != VAR_11) {
  FUNC_4(VAR_35->dma.data_tag, VAR_33->dma.data_map,
      (VAR_36->ccb_h.flags & VAR_9) ?
      VAR_1 : VAR_2);
  FUNC_5(VAR_35->dma.data_tag, VAR_33->dma.data_map);
 }
 if (VAR_34 != 131)
  VAR_35->eslots |= (1 << VAR_33->slot);

 if ((VAR_34 != 131) && (!VAR_35->recoverycmd) &&
     !(VAR_36->ccb_h.status & VAR_8)) {
  FUNC_19(VAR_36->ccb_h.path, 1);
  VAR_36->ccb_h.status |= VAR_8;
 }

 VAR_36->ccb_h.status &= ~VAR_19;
 switch (VAR_34) {
 case 131:
  VAR_36->ccb_h.status |= VAR_15;
  if (VAR_36->ccb_h.func_code == VAR_31)
   VAR_36->csio.scsi_status = VAR_28;
  break;
 case 133:
  VAR_35->fatalerr = 1;
  VAR_36->ccb_h.status |= VAR_17;
  break;
 case 134:
  VAR_36->ccb_h.status |= VAR_14;
  break;
 case 129:
 case 132:
  if (VAR_36->ccb_h.func_code == VAR_31) {
   VAR_36->ccb_h.status |= VAR_18;
   VAR_36->csio.scsi_status = VAR_27;
  } else {
   VAR_36->ccb_h.status |= VAR_6;
  }
  break;
 case 130:
  VAR_35->fatalerr = 1;
  if (!VAR_35->recoverycmd) {
   FUNC_20(VAR_35->sim, 1);
   VAR_36->ccb_h.status &= ~VAR_19;
   VAR_36->ccb_h.status |= VAR_13;
  }
  VAR_36->ccb_h.status |= VAR_20;
  break;
 case 128:
  if (!VAR_35->recoverycmd) {
   FUNC_20(VAR_35->sim, 1);
   VAR_36->ccb_h.status &= ~VAR_19;
   VAR_36->ccb_h.status |= VAR_13;
  }
  VAR_36->ccb_h.status |= VAR_7;
  break;
 default:
  VAR_35->fatalerr = 1;
  VAR_36->ccb_h.status |= VAR_16;
 }

 VAR_35->oslots &= ~(1 << VAR_33->slot);
 VAR_35->rslots &= ~(1 << VAR_33->slot);
 VAR_35->aslots &= ~(1 << VAR_33->slot);
 VAR_33->state = VAR_24;
 VAR_33->ccb = ((void*)0);

 VAR_35->numrslots--;
 VAR_35->numrslotspd[VAR_36->ccb_h.target_id]--;
 FUNC_1(VAR_35->r_mem, VAR_22, 1 << VAR_33->slot);
 if ((VAR_36->ccb_h.func_code == VAR_30) &&
     (VAR_36->ataio.cmd.flags & VAR_4)) {
  VAR_35->numtslots--;
  VAR_35->numtslotspd[VAR_36->ccb_h.target_id]--;
 }

 if (VAR_34 != 128) {
  VAR_38 = (VAR_35->toslots == (1 << VAR_33->slot));
  VAR_35->toslots &= ~(1 << VAR_33->slot);
  if (VAR_38)
   FUNC_21(VAR_35->sim, VAR_29);
 }


 if ((VAR_36->ccb_h.func_code == VAR_30) &&
     (VAR_36->ataio.cmd.flags & VAR_3) &&
     (VAR_36->ataio.cmd.control & VAR_0) &&
     VAR_34 == 131) {
  VAR_36->ataio.cmd.control &= ~VAR_0;
  FUNC_8(VAR_35, VAR_36);
  return;
 }

 if (VAR_36->ccb_h.recovery_type == VAR_25) {
  FUNC_12(VAR_35, VAR_36);

 } else if (VAR_36->ccb_h.recovery_type == VAR_26) {
  FUNC_13(VAR_35, VAR_36);

 } else if (VAR_34 == 132 ||
     ((VAR_36->ccb_h.status & VAR_19) == VAR_18 &&
      (VAR_36->ccb_h.flags & VAR_12) == 0)) {
  VAR_35->hold[VAR_33->slot] = VAR_36;
  VAR_35->numhslots++;
 } else
  FUNC_10(VAR_35, VAR_36);

 if (VAR_35->rslots == 0) {

  if (VAR_35->toslots != 0 || VAR_35->fatalerr) {
   FUNC_15(VAR_35);
  } else {

   if (VAR_35->eslots != 0) {
    FUNC_17(VAR_35);
    FUNC_16(VAR_35);
   }

   if (!VAR_35->recoverycmd && VAR_35->numhslots)
    FUNC_11(VAR_35);
  }

 } else if ((VAR_35->rslots & ~VAR_35->toslots) == 0 &&
     VAR_34 != 128)
  FUNC_14(VAR_35);

 if (VAR_35->frozen && !FUNC_9(VAR_35, VAR_35->frozen)) {
  union ccb *VAR_43 = VAR_35->frozen;
  VAR_35->frozen = ((void*)0);
  FUNC_8(VAR_35, VAR_43);
  FUNC_21(VAR_35->sim, VAR_29);
 }

 if (VAR_35->numrslots == 0 && VAR_35->pm_level > 3 &&
     (VAR_35->curr[VAR_35->pm_present ? 15 : 0].caps & VAR_21)) {
  FUNC_7(&VAR_35->pm_timer,
      (VAR_35->pm_level == 4) ? VAR_32 / 1000 : VAR_32 / 8);
 }
}
