
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct vscsi_xfer {int srp_iu_size; TYPE_1__* sc; scalar_t__ srp_iu_offset; int * ccb; } ;
struct vscsi_softc {int crq_map; int crq_tag; int active_xferq; int free_xferq; int io_lock; } ;
struct vscsi_crq {int iu_length; int valid; int format; scalar_t__ iu_data; } ;
struct srp_login {scalar_t__ flags; int buffer_formats; int max_cmd_length; scalar_t__ tag; int type; } ;
struct TYPE_2__ {int unit; scalar_t__ srp_iu_phys; scalar_t__ srp_iu_queue; int srp_iu_arena; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vscsi_xfer* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct vscsi_xfer*,int ) ;
 int FUNC_2 (int *,struct vscsi_xfer*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct srp_login*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int ,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_10 (int ,int,int,scalar_t__*) ;

__attribute__((used)) static void
FUNC_11(struct vscsi_softc *VAR_7)
{
 struct vscsi_xfer *VAR_8;
 struct srp_login *VAR_9;
 struct vscsi_crq VAR_10;
 int VAR_11;

 FUNC_7(&VAR_7->io_lock, VAR_2);

 VAR_8 = FUNC_0(&VAR_7->free_xferq);
 if (VAR_8 == ((void*)0))
  FUNC_8("SCSI queue flooded");
 VAR_8->ccb = ((void*)0);
 FUNC_2(&VAR_7->free_xferq, VAR_8, VAR_6);
 FUNC_1(&VAR_7->active_xferq, VAR_8, VAR_6);


 VAR_8->srp_iu_size = VAR_10.iu_length = 64;
 VAR_11 = FUNC_10(VAR_8->sc->srp_iu_arena, VAR_8->srp_iu_size,
     VAR_3 | VAR_4, &VAR_8->srp_iu_offset);
 if (VAR_11)
  FUNC_8("Error during VMEM allocation (%d)", VAR_11);

 VAR_9 = (struct srp_login *)((uint8_t *)VAR_8->sc->srp_iu_queue +
     (uintptr_t)VAR_8->srp_iu_offset);
 FUNC_4(VAR_9, VAR_8->srp_iu_size);
 VAR_9->type = VAR_5;
 VAR_9->tag = (uint64_t)(VAR_8);
 VAR_9->max_cmd_length = FUNC_6(256);
 VAR_9->buffer_formats = FUNC_5(0x1 | 0x2);
 VAR_9->flags = 0;


 VAR_10.valid = 0x80;
 VAR_10.format = 0x01;
 VAR_10.iu_data = VAR_8->sc->srp_iu_phys + VAR_8->srp_iu_offset;
 FUNC_3(VAR_7->crq_tag, VAR_7->crq_map, VAR_0);

 VAR_11 = FUNC_9(VAR_1, VAR_8->sc->unit, ((uint64_t *)(&VAR_10))[0],
     ((uint64_t *)(&VAR_10))[1]);
 if (VAR_11 != 0)
  FUNC_8("CRQ send failure (%d)", VAR_11);
}
