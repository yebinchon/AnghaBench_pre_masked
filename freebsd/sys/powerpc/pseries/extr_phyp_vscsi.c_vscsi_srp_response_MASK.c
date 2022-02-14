
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scsi_status; scalar_t__ resid; scalar_t__ sense_len; scalar_t__ sense_resid; int sense_data; } ;
struct TYPE_3__ {int flags; int status; int path; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct vscsi_xfer {union ccb* ccb; int dmamap; scalar_t__ srp_iu_offset; struct vscsi_softc* sc; } ;
struct vscsi_softc {int data_tag; scalar_t__ srp_iu_queue; } ;
struct vscsi_crq {scalar_t__ status; } ;
struct srp_rsp {scalar_t__ status; int flags; scalar_t__ data_in_resid; scalar_t__ data_out_resid; scalar_t__ sense_data_len; scalar_t__ response_data_len; int * data_payload; } ;
struct scsi_sense_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (size_t,scalar_t__) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct vscsi_xfer *VAR_14, struct vscsi_crq *VAR_15)
{
 union ccb *VAR_16 = VAR_14->ccb;
 struct vscsi_softc *VAR_17 = VAR_14->sc;
 struct srp_rsp *VAR_18;
 uint32_t VAR_19;


 VAR_18 = (struct srp_rsp *)((uint8_t *)VAR_17->srp_iu_queue +
     (uintptr_t)VAR_14->srp_iu_offset);
 VAR_16->csio.scsi_status = VAR_18->status;
 if (VAR_16->csio.scsi_status == VAR_7)
  VAR_16->ccb_h.status = VAR_4;
 else
  VAR_16->ccb_h.status = VAR_6;






 if (VAR_16->ccb_h.status != VAR_4) {
  VAR_16->ccb_h.status |= VAR_2;
  FUNC_7(VAR_16->ccb_h.path, 1);
 }

 if (!(VAR_18->flags & VAR_12))
  VAR_18->response_data_len = 0;
 if (!(VAR_18->flags & VAR_13))
  VAR_18->sense_data_len = 0;
 if (!(VAR_18->flags & (VAR_10 | VAR_11)))
  VAR_18->data_out_resid = 0;
 if (!(VAR_18->flags & (VAR_8 | VAR_9)))
  VAR_18->data_in_resid = 0;

 if (VAR_18->flags & VAR_13) {
  FUNC_3(&VAR_16->csio.sense_data, sizeof(struct scsi_sense_data));
  VAR_16->ccb_h.status |= VAR_1;
  VAR_19 = FUNC_5(FUNC_0(VAR_18->sense_data_len),
      VAR_16->csio.sense_len);
  FUNC_4(&VAR_16->csio.sense_data,
      &VAR_18->data_payload[FUNC_0(VAR_18->response_data_len)],
      VAR_19);
  VAR_16->csio.sense_resid = VAR_16->csio.sense_len -
      FUNC_0(VAR_18->sense_data_len);
 }

 switch (VAR_16->ccb_h.flags & VAR_3) {
 case 128:
  VAR_16->csio.resid = VAR_18->data_out_resid;
  break;
 case 129:
  VAR_16->csio.resid = VAR_18->data_in_resid;
  break;
 }

 FUNC_1(VAR_17->data_tag, VAR_14->dmamap, VAR_0);
 FUNC_2(VAR_17->data_tag, VAR_14->dmamap);
 FUNC_6(VAR_16);
 VAR_14->ccb = ((void*)0);
}
