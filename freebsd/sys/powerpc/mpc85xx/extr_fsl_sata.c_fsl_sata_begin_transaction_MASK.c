
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ func_code; size_t target_id; int flags; int path; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_9__ {TYPE_2__ cmd; } ;
union ccb {TYPE_6__ ccb_h; TYPE_3__ ataio; } ;
struct TYPE_11__ {scalar_t__ nsegs; int data_map; } ;
struct fsl_sata_slot {TYPE_5__ dma; int state; scalar_t__ ttl; union ccb* ccb; } ;
struct TYPE_10__ {int data_tag; } ;
struct fsl_sata_channel {int lastslot; int oslots; scalar_t__ numrslots; int pm_level; size_t taggedtarget; int aslots; TYPE_4__ dma; int * numtslotspd; int numtslots; int * numrslotspd; int pm_timer; struct fsl_sata_slot* slot; TYPE_1__* curr; } ;
struct TYPE_7__ {int tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ,union ccb*,int ,struct fsl_sata_slot*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (struct fsl_sata_slot*) ;

__attribute__((used)) static void
FUNC_5(struct fsl_sata_channel *VAR_10, union ccb *VAR_11)
{
 struct fsl_sata_slot *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_11->ccb_h.path, VAR_3,
     ("fsl_sata_begin_transaction func_code=0x%x\n", VAR_11->ccb_h.func_code));

 VAR_14 = VAR_6;
 if ((VAR_11->ccb_h.func_code == VAR_8) &&
     (VAR_11->ataio.cmd.flags & VAR_1))
  VAR_14 = VAR_10->curr[VAR_11->ccb_h.target_id].tags;
 if (VAR_10->lastslot + 1 < VAR_14)
  VAR_13 = FUNC_3(~(VAR_10->oslots >> (VAR_10->lastslot + 1)));
 else
  VAR_13 = 0;
 if (VAR_13 == 0 || VAR_13 + VAR_10->lastslot >= VAR_14)
  VAR_13 = FUNC_3(~VAR_10->oslots) - 1;
 else
  VAR_13 += VAR_10->lastslot;
 VAR_10->lastslot = VAR_13;

 VAR_12 = &VAR_10->slot[VAR_13];
 VAR_12->ccb = VAR_11;
 VAR_12->ttl = 0;

 if (VAR_10->numrslots == 0 && VAR_10->pm_level > 3)
  FUNC_2(&VAR_10->pm_timer);

 VAR_10->oslots |= (1 << VAR_13);
 VAR_10->numrslots++;
 VAR_10->numrslotspd[VAR_11->ccb_h.target_id]++;
 if ((VAR_11->ccb_h.func_code == VAR_8) &&
     (VAR_11->ataio.cmd.flags & VAR_1)) {
  VAR_10->numtslots++;
  VAR_10->numtslotspd[VAR_11->ccb_h.target_id]++;
  VAR_10->taggedtarget = VAR_11->ccb_h.target_id;
 }
 if ((VAR_11->ccb_h.func_code == VAR_8) &&
     (VAR_11->ataio.cmd.flags & (VAR_0 | VAR_2)))
  VAR_10->aslots |= (1 << VAR_13);
 if ((VAR_11->ccb_h.flags & VAR_4) != VAR_5) {
  VAR_12->state = VAR_7;
  FUNC_1(VAR_10->dma.data_tag, VAR_12->dma.data_map, VAR_11,
      VAR_9, VAR_12, 0);
 } else {
  VAR_12->dma.nsegs = 0;
  FUNC_4(VAR_12);
 }

 FUNC_0(VAR_11->ccb_h.path, VAR_3,
     ("fsl_sata_begin_transaction exit\n"));
}
