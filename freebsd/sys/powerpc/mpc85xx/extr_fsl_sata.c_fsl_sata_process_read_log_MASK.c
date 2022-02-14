
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int* data_ptr; } ;
struct TYPE_7__ {int status; } ;
union ccb {TYPE_4__ ataio; TYPE_2__ ccb_h; } ;
typedef int uint8_t ;
struct fsl_sata_channel {int sim; int numhslots; TYPE_5__** hold; int dev; scalar_t__ recoverycmd; } ;
struct ata_res {int status; int error; int lba_low; int lba_mid; int lba_high; int device; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int sector_count; int sector_count_exp; } ;
struct TYPE_8__ {scalar_t__ func_code; int status; } ;
struct TYPE_6__ {struct ata_res res; } ;
struct TYPE_10__ {TYPE_3__ ccb_h; TYPE_1__ ataio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (struct fsl_sata_channel*,TYPE_5__*) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct fsl_sata_channel *VAR_7, union ccb *VAR_8)
{
 uint8_t *VAR_9;
 struct ata_res *VAR_10;
 int VAR_11;

 VAR_7->recoverycmd = 0;

 VAR_9 = VAR_8->ataio.data_ptr;
 if ((VAR_8->ccb_h.status & VAR_2) == VAR_1 &&
     (VAR_9[0] & 0x80) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   if (!VAR_7->hold[VAR_11])
    continue;
   if (VAR_7->hold[VAR_11]->ccb_h.func_code != VAR_6)
    continue;
   if ((VAR_9[0] & 0x1F) == VAR_11) {
    VAR_10 = &VAR_7->hold[VAR_11]->ataio.res;
    VAR_10->status = VAR_9[2];
    VAR_10->error = VAR_9[3];
    VAR_10->lba_low = VAR_9[4];
    VAR_10->lba_mid = VAR_9[5];
    VAR_10->lba_high = VAR_9[6];
    VAR_10->device = VAR_9[7];
    VAR_10->lba_low_exp = VAR_9[8];
    VAR_10->lba_mid_exp = VAR_9[9];
    VAR_10->lba_high_exp = VAR_9[10];
    VAR_10->sector_count = VAR_9[12];
    VAR_10->sector_count_exp = VAR_9[13];
   } else {
    VAR_7->hold[VAR_11]->ccb_h.status &= ~VAR_2;
    VAR_7->hold[VAR_11]->ccb_h.status |= VAR_0;
   }
   FUNC_2(VAR_7, VAR_7->hold[VAR_11]);
   VAR_7->hold[VAR_11] = ((void*)0);
   VAR_7->numhslots--;
  }
 } else {
  if ((VAR_8->ccb_h.status & VAR_2) != VAR_1)
   FUNC_0(VAR_7->dev, "Error while READ LOG EXT\n");
  else if ((VAR_9[0] & 0x80) == 0) {
   FUNC_0(VAR_7->dev, "Non-queued command error in READ LOG EXT\n");
  }
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   if (!VAR_7->hold[VAR_11])
    continue;
   if (VAR_7->hold[VAR_11]->ccb_h.func_code != VAR_6)
    continue;
   FUNC_2(VAR_7, VAR_7->hold[VAR_11]);
   VAR_7->hold[VAR_11] = ((void*)0);
   VAR_7->numhslots--;
  }
 }
 FUNC_1(VAR_8->ataio.data_ptr, VAR_4);
 FUNC_3(VAR_8);
 FUNC_4(VAR_7->sim, VAR_5);
}
