
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int func_code; int target_lun; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct vscsi_xfer {int srp_iu_size; TYPE_2__* sc; scalar_t__ srp_iu_offset; union ccb* ccb; } ;
struct vscsi_softc {int active_xferq; int free_xferq; int io_lock; } ;
struct vscsi_crq {int iu_length; int valid; int format; scalar_t__ iu_data; } ;
struct srp_tsk_mgmt {int function; int lun; scalar_t__ tag; int type; } ;
struct TYPE_4__ {int unit; scalar_t__ srp_iu_phys; int crq_map; int crq_tag; scalar_t__ srp_iu_queue; int srp_iu_arena; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vscsi_xfer* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct vscsi_xfer*,int ) ;
 int FUNC_3 (int *,struct vscsi_xfer*,int ) ;

 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct srp_tsk_mgmt*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int ,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_10 (int ,int,int,scalar_t__*) ;

__attribute__((used)) static void
FUNC_11(struct vscsi_softc *VAR_7, union ccb *VAR_8)
{
 struct srp_tsk_mgmt *VAR_9;
 struct vscsi_xfer *VAR_10;
 struct vscsi_crq VAR_11;
 int VAR_12;

 FUNC_7(&VAR_7->io_lock, VAR_2);

 VAR_10 = FUNC_1(&VAR_7->free_xferq);
 if (VAR_10 == ((void*)0))
  FUNC_8("SCSI queue flooded");
 VAR_10->ccb = VAR_8;
 FUNC_3(&VAR_7->free_xferq, VAR_10, VAR_6);
 FUNC_2(&VAR_7->active_xferq, VAR_10, VAR_6);

 VAR_10->srp_iu_size = VAR_11.iu_length = sizeof(*VAR_9);
 VAR_12 = FUNC_10(VAR_10->sc->srp_iu_arena, VAR_10->srp_iu_size,
     VAR_3 | VAR_4, &VAR_10->srp_iu_offset);
 if (VAR_12)
  FUNC_8("Error during VMEM allocation (%d)", VAR_12);

 VAR_9 = (struct srp_tsk_mgmt *)((uint8_t *)VAR_10->sc->srp_iu_queue +
     (uintptr_t)VAR_10->srp_iu_offset);
 FUNC_5(VAR_9, VAR_10->srp_iu_size);
 VAR_9->type = VAR_5;
 VAR_9->tag = (uint64_t)VAR_10;
 VAR_9->lun = FUNC_6(FUNC_0(VAR_8->ccb_h.target_lun));

 switch (VAR_8->ccb_h.func_code) {
 case 128:
  VAR_9->function = 0x08;
  break;
 default:
  FUNC_8("Unimplemented code %d", VAR_8->ccb_h.func_code);
  break;
 }

 FUNC_4(VAR_10->sc->crq_tag, VAR_10->sc->crq_map, VAR_0);


 VAR_11.valid = 0x80;
 VAR_11.format = 0x01;
 VAR_11.iu_data = VAR_10->sc->srp_iu_phys + VAR_10->srp_iu_offset;

 VAR_12 = FUNC_9(VAR_1, VAR_10->sc->unit, ((uint64_t *)(&VAR_11))[0],
     ((uint64_t *)(&VAR_11))[1]);
 if (VAR_12 != 0)
  FUNC_8("CRQ send failure (%d)", VAR_12);
}
