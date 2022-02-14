
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int func_code; void* status; } ;
struct TYPE_8__ {int valid; } ;
struct TYPE_7__ {int valid; } ;
struct TYPE_9__ {TYPE_3__ xport_specific; TYPE_2__ proto_specific; int transport_version; void* transport; void* protocol_version; void* protocol; } ;
struct TYPE_6__ {void* status; } ;
struct ccb_pathinq {int version_num; int base_transfer_speed; TYPE_1__ ccb_h; void* protocol_version; void* protocol; int transport_version; void* transport; int bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int initiator_id; int max_lun; int max_target; int hba_eng_cnt; int target_sprt; int hba_misc; int hba_inquiry; } ;
union ccb {TYPE_5__ ccb_h; TYPE_4__ cts; struct ccb_pathinq cpi; } ;
struct vscsi_xfer {int dmamap; union ccb* ccb; } ;
struct vscsi_softc {int data_tag; int active_xferq; int free_xferq; int io_lock; } ;
struct cam_sim {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 struct vscsi_xfer* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct vscsi_xfer*,int ) ;
 int FUNC_2 (int *,struct vscsi_xfer*,int ) ;
 void* VAR_12 ;






 int FUNC_3 (int ,int ,union ccb*,int ,struct vscsi_xfer*,int ) ;
 int FUNC_4 (struct cam_sim*) ;
 char* FUNC_5 (struct cam_sim*) ;
 struct vscsi_softc* FUNC_6 (struct cam_sim*) ;
 int FUNC_7 (struct cam_sim*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 int VAR_13 ;
 int FUNC_10 (int ,char*,int ) ;
 int VAR_14 ;
 int FUNC_11 (struct vscsi_softc*,union ccb*) ;
 int FUNC_12 (union ccb*) ;

__attribute__((used)) static void
FUNC_13(struct cam_sim *VAR_15, union ccb *VAR_16)
{
 struct vscsi_softc *VAR_17 = FUNC_6(VAR_15);

 FUNC_8(&VAR_17->io_lock, VAR_6);

 switch (VAR_16->ccb_h.func_code) {
 case 132:
 {
  struct ccb_pathinq *VAR_18 = &VAR_16->cpi;

  VAR_18->version_num = 1;
  VAR_18->hba_inquiry = VAR_8;
  VAR_18->hba_misc = VAR_7;
  VAR_18->target_sprt = 0;
  VAR_18->hba_eng_cnt = 0;
  VAR_18->max_target = 0;
  VAR_18->max_lun = 0;
  VAR_18->initiator_id = ~0;
  FUNC_10(VAR_18->sim_vid, "FreeBSD", VAR_11);
  FUNC_10(VAR_18->hba_vid, "IBM", VAR_5);
  FUNC_10(VAR_18->dev_name, FUNC_5(VAR_15), VAR_4);
  VAR_18->unit_number = FUNC_7(VAR_15);
  VAR_18->bus_id = FUNC_4(VAR_15);
  VAR_18->base_transfer_speed = 150000;
  VAR_18->transport = VAR_12;
  VAR_18->transport_version = 0;
  VAR_18->protocol = VAR_9;
  VAR_18->protocol_version = VAR_10;
  VAR_18->ccb_h.status = VAR_1;
  break;
 }
 case 131:
  VAR_16->ccb_h.status = VAR_1;
  break;
 case 130:
  VAR_16->ccb_h.status = VAR_2;
  FUNC_11(VAR_17, VAR_16);
  return;
 case 133:
  VAR_16->cts.protocol = VAR_9;
  VAR_16->cts.protocol_version = VAR_10;
  VAR_16->cts.transport = VAR_12;
  VAR_16->cts.transport_version = 0;
  VAR_16->cts.proto_specific.valid = 0;
  VAR_16->cts.xport_specific.valid = 0;
  VAR_16->ccb_h.status = VAR_1;
  break;
 case 128:
  VAR_16->ccb_h.status = VAR_0;
  break;
 case 129:
 {
  struct vscsi_xfer *VAR_19;

  VAR_16->ccb_h.status = VAR_2;

  VAR_19 = FUNC_0(&VAR_17->free_xferq);
  if (VAR_19 == ((void*)0))
   FUNC_9("SCSI queue flooded");
  VAR_19->ccb = VAR_16;
  FUNC_2(&VAR_17->free_xferq, VAR_19, VAR_13);
  FUNC_1(&VAR_17->active_xferq, VAR_19, VAR_13);
  FUNC_3(VAR_17->data_tag, VAR_19->dmamap,
      VAR_16, VAR_14, VAR_19, 0);

  return;
 }
 default:
  VAR_16->ccb_h.status = VAR_3;
  break;
 }

 FUNC_12(VAR_16);
 return;
}
