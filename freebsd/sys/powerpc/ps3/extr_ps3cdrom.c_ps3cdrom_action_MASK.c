
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int func_code; int status; int path; int target_lun; int target_id; } ;
struct TYPE_7__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_misc; int initiator_id; int base_transfer_speed; int transport_version; TYPE_3__ ccb_h; int maxio; void* protocol_version; void* protocol; void* transport; int dev_name; int hba_vid; int sim_vid; int unit_number; int bus_id; int max_lun; int max_target; int vuhba_flags; int hba_eng_cnt; int hba_inquiry; int target_sprt; } ;
struct TYPE_6__ {int valid; } ;
struct TYPE_5__ {int valid; } ;
struct ccb_trans_settings {int transport_version; TYPE_2__ xport_specific; TYPE_1__ proto_specific; void* transport; void* protocol_version; void* protocol; } ;
union ccb {TYPE_4__ ccb_h; struct ccb_pathinq cpi; int ccg; struct ccb_trans_settings cts; } ;
struct ps3cdrom_xfer {union ccb* x_ccb; int x_dmamap; } ;
struct ps3cdrom_softc {int sc_free_xferq; int sc_dmatag; int sc_dev; } ;
struct cam_sim {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_2 (struct ps3cdrom_softc*) ;
 void* VAR_18 ;
 int VAR_19 ;
 struct ps3cdrom_xfer* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ps3cdrom_xfer*,int ) ;
 int FUNC_5 (int *,struct ps3cdrom_xfer*,int ) ;
 void* VAR_20 ;







 int FUNC_6 (int ,int ,union ccb*,int ,struct ps3cdrom_xfer*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct cam_sim*) ;
 char* FUNC_10 (struct cam_sim*) ;
 scalar_t__ FUNC_11 (struct cam_sim*) ;
 int FUNC_12 (struct cam_sim*) ;
 int FUNC_13 (int ,char*,int) ;
 int VAR_21 ;
 int FUNC_14 (int ,char*,int ) ;
 int VAR_22 ;
 int FUNC_15 (union ccb*) ;

__attribute__((used)) static void
FUNC_16(struct cam_sim *VAR_23, union ccb *VAR_24)
{
 struct ps3cdrom_softc *VAR_25 = (struct ps3cdrom_softc *)FUNC_11(VAR_23);
 device_t VAR_26 = VAR_25->sc_dev;
 struct ps3cdrom_xfer *VAR_27;
 int VAR_28;

 FUNC_2(VAR_25);

 FUNC_0(VAR_24->ccb_h.path, VAR_0,
    ("function code 0x%02x\n", VAR_24->ccb_h.func_code));

 switch (VAR_24->ccb_h.func_code) {
 case 129:
  if ((VAR_24->ccb_h.status & VAR_7) != VAR_4)
   break;

  if(VAR_24->ccb_h.target_id > 0) {
   VAR_24->ccb_h.status = VAR_8;
   break;
  }

  if(VAR_24->ccb_h.target_lun > 0) {
   VAR_24->ccb_h.status = VAR_2;
   break;
  }

  VAR_27 = FUNC_3(&VAR_25->sc_free_xferq);

  FUNC_1(VAR_27 != ((void*)0), ("no free transfers"));

  VAR_27->x_ccb = VAR_24;

  FUNC_5(&VAR_25->sc_free_xferq, VAR_27, VAR_22);

  VAR_28 = FUNC_6(VAR_25->sc_dmatag, VAR_27->x_dmamap,
      VAR_24, VAR_21, VAR_27, 0);
  if (VAR_28 && VAR_28 != VAR_10) {
   FUNC_13(VAR_26, "Could not load DMA map (%d)\n",
       VAR_28);

   VAR_27->x_ccb = ((void*)0);
   FUNC_4(&VAR_25->sc_free_xferq, VAR_27, VAR_22);
   VAR_24->ccb_h.status = VAR_6;
   break;
  }
  return;
 case 128:
  VAR_24->ccb_h.status = VAR_1;
  break;
 case 133:
 {
  struct ccb_trans_settings *VAR_29 = &VAR_24->cts;

  VAR_29->protocol = VAR_17;
  VAR_29->protocol_version = VAR_18;
  VAR_29->transport = VAR_20;
  VAR_29->transport_version = 2;
  VAR_29->proto_specific.valid = 0;
  VAR_29->xport_specific.valid = 0;
  VAR_24->ccb_h.status = VAR_3;
  break;
 }
 case 131:
 case 130:
  VAR_24->ccb_h.status = VAR_3;
  break;
 case 134:
  FUNC_8(&VAR_24->ccg, 1);
  break;
 case 132:
 {
  struct ccb_pathinq *VAR_30 = &VAR_24->cpi;

  VAR_30->version_num = 1;
  VAR_30->hba_inquiry = 0;
  VAR_30->target_sprt = 0;
  VAR_30->hba_inquiry = VAR_16;
  VAR_30->hba_misc = VAR_13 | VAR_15 | VAR_14;
  VAR_30->hba_eng_cnt = 0;
  FUNC_7(VAR_30->vuhba_flags, sizeof(VAR_30->vuhba_flags));
  VAR_30->max_target = 0;
  VAR_30->max_lun = 0;
  VAR_30->initiator_id = 7;
  VAR_30->bus_id = FUNC_9(VAR_23);
  VAR_30->unit_number = FUNC_12(VAR_23);
  VAR_30->base_transfer_speed = 150000;
  FUNC_14(VAR_30->sim_vid, "FreeBSD", VAR_19);
  FUNC_14(VAR_30->hba_vid, "Sony", VAR_11);
  FUNC_14(VAR_30->dev_name, FUNC_10(VAR_23), VAR_9);
  VAR_30->transport = VAR_20;
  VAR_30->transport_version = 2;
  VAR_30->protocol = VAR_17;
  VAR_30->protocol_version = VAR_18;
  VAR_30->maxio = VAR_12;
  VAR_30->ccb_h.status = VAR_3;
  break;
 }
 default:
  FUNC_0(VAR_24->ccb_h.path, VAR_0,
      ("unsupported function code 0x%02x\n",
      VAR_24->ccb_h.func_code));
  VAR_24->ccb_h.status = VAR_5;
  break;
 }

 FUNC_15(VAR_24);
}
