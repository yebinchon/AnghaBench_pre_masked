
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int func_code; size_t target_id; void* status; int recovery_type; int path; } ;
struct TYPE_9__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_misc; int base_transfer_speed; TYPE_4__ ccb_h; int maxio; void* protocol_version; int protocol; void* transport_version; void* transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_lun; int max_target; int hba_eng_cnt; int target_sprt; int hba_inquiry; } ;
struct TYPE_7__ {int valid; int revision; int caps; int atapi; void* tags; int pm_present; void* bytecount; int mode; } ;
struct TYPE_8__ {TYPE_2__ sata; } ;
struct TYPE_6__ {int valid; } ;
struct ccb_trans_settings {TYPE_3__ xport_specific; int type; TYPE_1__ proto_specific; void* transport_version; void* transport; void* protocol_version; int protocol; } ;
union ccb {TYPE_5__ ccb_h; struct ccb_pathinq cpi; struct ccb_trans_settings cts; } ;
typedef int uint32_t ;
struct fsl_sata_device {int revision; int caps; int atapi; void* tags; void* bytecount; int mode; } ;
struct fsl_sata_channel {int pm_present; struct fsl_sata_device* user; int pm_level; int r_mem; struct fsl_sata_device* curr; int sim; union ccb* frozen; int devices; } ;
struct cam_sim {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 int FUNC_2 (struct cam_sim*) ;
 char* FUNC_3 (struct cam_sim*) ;
 scalar_t__ FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_7 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_8 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_9 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_10 (struct fsl_sata_channel*) ;
 void* FUNC_11 (int,void*) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static void
FUNC_14(struct cam_sim *VAR_33, union ccb *VAR_34)
{
 struct fsl_sata_channel *VAR_35;

 FUNC_1(VAR_34->ccb_h.path, VAR_1,
     ("fsl_sataaction func_code=0x%x\n", VAR_34->ccb_h.func_code));

 VAR_35 = (struct fsl_sata_channel *)FUNC_4(VAR_33);
 switch (VAR_34->ccb_h.func_code) {

 case 135:
 case 130:
  if (FUNC_8(VAR_35, VAR_34))
   return;
  if (VAR_35->devices == 0 ||
      (VAR_35->pm_present == 0 &&
       VAR_34->ccb_h.target_id > 0 && VAR_34->ccb_h.target_id < 15)) {
   VAR_34->ccb_h.status = VAR_4;
   break;
  }
  VAR_34->ccb_h.recovery_type = VAR_29;

  if (FUNC_7(VAR_35, VAR_34)) {

   VAR_35->frozen = VAR_34;

   FUNC_13(VAR_35->sim, 1);
   return;
  }
  FUNC_6(VAR_35, VAR_34);
  return;
 case 136:

  VAR_34->ccb_h.status = VAR_3;
  break;
 case 129:
 {
  struct ccb_trans_settings *VAR_36 = &VAR_34->cts;
  struct fsl_sata_device *VAR_37;

  if (FUNC_8(VAR_35, VAR_34))
   return;
  if (VAR_36->type == VAR_15)
   VAR_37 = &VAR_35->curr[VAR_34->ccb_h.target_id];
  else
   VAR_37 = &VAR_35->user[VAR_34->ccb_h.target_id];
  if (VAR_36->xport_specific.sata.valid & VAR_13)
   VAR_37->revision = VAR_36->xport_specific.sata.revision;
  if (VAR_36->xport_specific.sata.valid & VAR_11)
   VAR_37->mode = VAR_36->xport_specific.sata.mode;
  if (VAR_36->xport_specific.sata.valid & VAR_9)
   VAR_37->bytecount = FUNC_11(8192, VAR_36->xport_specific.sata.bytecount);
  if (VAR_36->xport_specific.sata.valid & VAR_14)
   VAR_37->tags = FUNC_11(VAR_17, VAR_36->xport_specific.sata.tags);
  if (VAR_36->xport_specific.sata.valid & VAR_12)
   VAR_35->pm_present = VAR_36->xport_specific.sata.pm_present;
  if (VAR_36->xport_specific.sata.valid & VAR_8)
   VAR_37->atapi = VAR_36->xport_specific.sata.atapi;
  VAR_34->ccb_h.status = VAR_2;
  break;
 }
 case 134:

 {
  struct ccb_trans_settings *VAR_38 = &VAR_34->cts;
  struct fsl_sata_device *VAR_39;
  uint32_t VAR_40;

  if (FUNC_8(VAR_35, VAR_34))
   return;
  if (VAR_38->type == VAR_15)
   VAR_39 = &VAR_35->curr[VAR_34->ccb_h.target_id];
  else
   VAR_39 = &VAR_35->user[VAR_34->ccb_h.target_id];
  VAR_38->protocol = VAR_27;
  VAR_38->protocol_version = VAR_28;
  VAR_38->transport = VAR_31;
  VAR_38->transport_version = VAR_32;
  VAR_38->proto_specific.valid = 0;
  VAR_38->xport_specific.sata.valid = 0;
  if (VAR_38->type == VAR_15 &&
      (VAR_34->ccb_h.target_id == 15 ||
      (VAR_34->ccb_h.target_id == 0 && !VAR_35->pm_present))) {
   VAR_40 = FUNC_0(VAR_35->r_mem, VAR_18) & VAR_0;
   if (VAR_40 & 0x0f0) {
    VAR_38->xport_specific.sata.revision =
        (VAR_40 & 0x0f0) >> 4;
    VAR_38->xport_specific.sata.valid |=
        VAR_13;
   }
   VAR_38->xport_specific.sata.caps = VAR_39->caps & VAR_5;
   if (VAR_35->pm_level) {
    VAR_38->xport_specific.sata.caps |= VAR_7;
   }
   VAR_38->xport_specific.sata.caps |= VAR_6;
   VAR_38->xport_specific.sata.caps &=
       VAR_35->user[VAR_34->ccb_h.target_id].caps;
   VAR_38->xport_specific.sata.valid |= VAR_10;
  } else {
   VAR_38->xport_specific.sata.revision = VAR_39->revision;
   VAR_38->xport_specific.sata.valid |= VAR_13;
   VAR_38->xport_specific.sata.caps = VAR_39->caps;
   VAR_38->xport_specific.sata.valid |= VAR_10;
  }
  VAR_38->xport_specific.sata.mode = VAR_39->mode;
  VAR_38->xport_specific.sata.valid |= VAR_11;
  VAR_38->xport_specific.sata.bytecount = VAR_39->bytecount;
  VAR_38->xport_specific.sata.valid |= VAR_9;
  VAR_38->xport_specific.sata.pm_present = VAR_35->pm_present;
  VAR_38->xport_specific.sata.valid |= VAR_12;
  VAR_38->xport_specific.sata.tags = VAR_39->tags;
  VAR_38->xport_specific.sata.valid |= VAR_14;
  VAR_38->xport_specific.sata.atapi = VAR_39->atapi;
  VAR_38->xport_specific.sata.valid |= VAR_8;
  VAR_34->ccb_h.status = VAR_2;
  break;
 }
 case 132:
 case 131:
  FUNC_10(VAR_35);
  VAR_34->ccb_h.status = VAR_2;
  break;
 case 128:

  VAR_34->ccb_h.status = VAR_3;
  break;
 case 133:
 {
  struct ccb_pathinq *VAR_41 = &VAR_34->cpi;

  VAR_41->version_num = 1;
  VAR_41->hba_inquiry = VAR_24;
  VAR_41->hba_inquiry |= VAR_25;







  VAR_41->target_sprt = 0;
  VAR_41->hba_misc = VAR_21 | VAR_22;
  VAR_41->hba_eng_cnt = 0;




  VAR_41->max_target = 0;
  VAR_41->max_lun = 0;
  VAR_41->initiator_id = 0;
  VAR_41->bus_id = FUNC_2(VAR_33);
  VAR_41->base_transfer_speed = 150000;
  FUNC_12(VAR_41->sim_vid, "FreeBSD", VAR_30);
  FUNC_12(VAR_41->hba_vid, "FSL SATA", VAR_19);
  FUNC_12(VAR_41->dev_name, FUNC_3(VAR_33), VAR_16);
  VAR_41->unit_number = FUNC_5(VAR_33);
  VAR_41->transport = VAR_31;
  VAR_41->transport_version = VAR_32;
  VAR_41->protocol = VAR_26;
  VAR_41->protocol_version = VAR_28;
  VAR_41->maxio = VAR_20;
  VAR_41->ccb_h.status = VAR_2;
  break;
 }
 default:
  VAR_34->ccb_h.status = VAR_3;
  break;
 }
 FUNC_9(VAR_35, VAR_34);
}
