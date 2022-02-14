
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int target_id; scalar_t__ func_code; int timeout; int path; } ;
struct TYPE_8__ {int flags; int control; scalar_t__ command; } ;
struct TYPE_9__ {TYPE_3__ cmd; } ;
union ccb {TYPE_5__ ccb_h; TYPE_4__ ataio; } ;
typedef int uint32_t ;
typedef int timeout_t ;
struct TYPE_6__ {int nsegs; } ;
struct fsl_sata_slot {int slot; int ttl; int timeout; int state; TYPE_1__ dma; union ccb* ccb; struct fsl_sata_channel* ch; } ;
struct fsl_sata_cmd_tab {int* sfis; } ;
struct fsl_sata_cmd_list {void* cda; void* ttl; void* cmd_flags; void* prd_length; void* fis_length; } ;
struct TYPE_7__ {int work_map; int work_tag; } ;
struct fsl_sata_channel {int rslots; int r_mem; int dev; TYPE_2__ dma; } ;
typedef enum fsl_sata_err_type { ____Placeholder_fsl_sata_err_type } fsl_sata_err_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 struct fsl_sata_cmd_list* FUNC_4 (struct fsl_sata_channel*,struct fsl_sata_slot*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct fsl_sata_cmd_tab* FUNC_5 (struct fsl_sata_channel*,struct fsl_sata_slot*) ;
 int FUNC_6 (struct fsl_sata_channel*,struct fsl_sata_slot*) ;
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
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int,int ,int *,struct fsl_sata_slot*,int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct fsl_sata_slot*,int) ;
 int FUNC_11 (struct fsl_sata_channel*,struct fsl_sata_cmd_tab*,union ccb*,int) ;
 scalar_t__ VAR_29 ;
 void* FUNC_12 (int) ;
 void* FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct fsl_sata_slot *VAR_30)
{
 struct fsl_sata_channel *VAR_31 = VAR_30->ch;
 struct fsl_sata_cmd_tab *VAR_32;
 struct fsl_sata_cmd_list *VAR_33;
 union ccb *VAR_34 = VAR_30->ccb;
 int VAR_35 = VAR_34->ccb_h.target_id & 0x0f;
 int VAR_36, VAR_37, VAR_38;
 uint32_t VAR_39;
 uint32_t VAR_40 = VAR_11 | VAR_10;

 VAR_38 = 0;
 FUNC_2(VAR_34->ccb_h.path, VAR_6,
     ("fsl_sata_execute_transaction func_code=0x%x\n", VAR_34->ccb_h.func_code));

 VAR_32 = FUNC_5(VAR_31, VAR_30);

 if (!(VAR_36 = FUNC_11(VAR_31, VAR_32, VAR_34, VAR_30->slot))) {
  FUNC_9(VAR_31->dev, "Setting up SATA FIS failed\n");
  FUNC_10(VAR_30, VAR_12);
  return;
 }

 VAR_33 = FUNC_4(VAR_31, VAR_30);
 VAR_33->fis_length = FUNC_12(VAR_36);
 VAR_33->prd_length = FUNC_12(VAR_30->dma.nsegs);

 if ((VAR_34->ccb_h.func_code == VAR_27) &&
     (VAR_34->ataio.cmd.flags & VAR_4)) {
  if (VAR_34->ataio.cmd.control & VAR_0) {
   VAR_38 = 1;
   VAR_40 |= VAR_9;
  } else {

   for (VAR_37 = 0; VAR_37 < 32; VAR_37++)
    VAR_32->sfis[VAR_37] = 0xff;
   VAR_38 = 2;
  }
 }
 if (VAR_34->ataio.cmd.flags & VAR_5)
  VAR_40 |= VAR_8;
 VAR_33->cmd_flags = FUNC_13(VAR_40 |
     (VAR_34->ccb_h.func_code == VAR_28 ? VAR_7 : 0) |
     VAR_30->slot);
 VAR_33->ttl = FUNC_13(VAR_30->ttl);
 VAR_33->cda = FUNC_13(FUNC_6(VAR_31, VAR_30));
 FUNC_7(VAR_31->dma.work_tag, VAR_31->dma.work_map,
     VAR_2 | VAR_3);

 VAR_30->state = VAR_25;
 VAR_31->rslots |= (1 << VAR_30->slot);
 FUNC_1(VAR_31->r_mem, VAR_18, VAR_35);
 FUNC_1(VAR_31->r_mem, VAR_19, (1 << VAR_30->slot));

 if (VAR_34->ccb_h.func_code == VAR_27 &&
     (VAR_34->ataio.cmd.command == VAR_1 || VAR_38)) {
  int VAR_41, VAR_42 = VAR_34->ccb_h.timeout * 100;
  enum fsl_sata_err_type VAR_43 = VAR_13;

  for (VAR_41 = 0; VAR_41 < VAR_42; VAR_41++) {
   FUNC_3(10);
   VAR_39 = 0;
   if (VAR_38 == 2) {
    VAR_39 = FUNC_0(VAR_31->r_mem, VAR_23);
    if (VAR_39 != 0 && VAR_39 != 0xffffffff)
     break;
    continue;
   }
   if ((FUNC_0(VAR_31->r_mem, VAR_16) & (1 << VAR_30->slot)) != 0)
    break;
  }

  if (VAR_42 && (VAR_41 >= VAR_42)) {
   FUNC_9(VAR_31->dev, "Poll timeout on slot %d port %d (round %d)\n",
       VAR_30->slot, VAR_35, VAR_38);
   FUNC_9(VAR_31->dev, "hsts %08x cqr %08x ccr %08x ss %08x "
       "rs %08x cer %08x der %08x serr %08x car %08x sig %08x\n",
       FUNC_0(VAR_31->r_mem, VAR_21),
       FUNC_0(VAR_31->r_mem, VAR_19),
       FUNC_0(VAR_31->r_mem, VAR_16),
       FUNC_0(VAR_31->r_mem, VAR_24), VAR_31->rslots,
       FUNC_0(VAR_31->r_mem, VAR_17),
       FUNC_0(VAR_31->r_mem, VAR_20),
       FUNC_0(VAR_31->r_mem, VAR_22),
       FUNC_0(VAR_31->r_mem, VAR_15),
       FUNC_0(VAR_31->r_mem, VAR_23));
   VAR_43 = VAR_14;
  }

  FUNC_10(VAR_30, VAR_43);
  return;
 }

 FUNC_8(&VAR_30->timeout, VAR_26 * VAR_34->ccb_h.timeout / 2,
     0, (timeout_t*)VAR_29, VAR_30, 0);
 return;
}
