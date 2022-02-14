
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; int path; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef int uint32_t ;
typedef int timeout_t ;
struct fsl_sata_slot {scalar_t__ state; int slot; TYPE_2__* ccb; int timeout; struct fsl_sata_channel* ch; } ;
struct fsl_sata_channel {int toslots; int rslots; int sim; union ccb* frozen; int r_mem; int dev; } ;
typedef int device_t ;
struct TYPE_4__ {int timeout; int target_id; } ;
struct TYPE_5__ {TYPE_1__ ccb_h; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int,int ,int *,struct fsl_sata_slot*,int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_4 (struct fsl_sata_channel*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct fsl_sata_slot *VAR_7)
{
 struct fsl_sata_channel *VAR_8 = VAR_7->ch;
 device_t VAR_9 = VAR_8->dev;
 uint32_t VAR_10;


 if (VAR_7->state < VAR_5)
  return;


 if (VAR_7->state < VAR_4) {

  VAR_10 = FUNC_0(VAR_8->r_mem, VAR_3);
  if ((VAR_10 & (1 << VAR_7->slot)) != 0)
   VAR_7->state = VAR_4;

  FUNC_1(&VAR_7->timeout,
          VAR_6 * VAR_7->ccb->ccb_h.timeout / 2, 0,
      (timeout_t*)FUNC_7, VAR_7, 0);
  return;
 }

 FUNC_2(VAR_9, "Timeout on slot %d port %d\n",
     VAR_7->slot, VAR_7->ccb->ccb_h.target_id & 0x0f);


 if (VAR_8->frozen) {
  union ccb *VAR_11 = VAR_8->frozen;
  VAR_8->frozen = ((void*)0);
  VAR_11->ccb_h.status = VAR_2 | VAR_1;
  if (!(VAR_11->ccb_h.status & VAR_0)) {
   FUNC_5(VAR_11->ccb_h.path, 1);
   VAR_11->ccb_h.status |= VAR_0;
  }
  FUNC_3(VAR_8, VAR_11);
 }
 if (VAR_8->toslots == 0)
  FUNC_6(VAR_8->sim, 1);
 VAR_8->toslots |= (1 << VAR_7->slot);
 if ((VAR_8->rslots & ~VAR_8->toslots) == 0)
  FUNC_4(VAR_8);
 else
  FUNC_2(VAR_9, " ... waiting for slots %08x\n",
      VAR_8->rslots & ~VAR_8->toslots);
}
