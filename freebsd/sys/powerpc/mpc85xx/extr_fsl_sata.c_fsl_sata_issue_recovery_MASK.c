
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int command; int sector_count; int lba_low; int* cdb_bytes; scalar_t__ lba_mid_exp; scalar_t__ lba_mid; scalar_t__ sector_count_exp; int flags; } ;
struct ccb_scsiio {int dxfer_len; int cdb_len; TYPE_4__ cdb_io; void* data_ptr; } ;
struct TYPE_5__ {scalar_t__ func_code; int timeout; int recovery_slot; scalar_t__ status; void* flags; int recovery_type; } ;
struct ccb_ataio {int dxfer_len; TYPE_4__ cmd; int * data_ptr; } ;
union ccb {struct ccb_scsiio csio; TYPE_1__ ccb_h; struct ccb_ataio ataio; } ;
struct fsl_sata_channel {int recoverycmd; int sim; TYPE_3__** hold; int dev; int numhslots; } ;
struct TYPE_6__ {int sense_len; int sense_data; } ;
struct TYPE_7__ {TYPE_2__ csio; TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct fsl_sata_channel*,union ccb*) ;
 int FUNC_3 (struct fsl_sata_channel*,TYPE_3__*) ;
 int FUNC_4 (struct fsl_sata_channel*) ;
 int * FUNC_5 (int,int ,int ) ;
 union ccb* FUNC_6 () ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void
FUNC_9(struct fsl_sata_channel *VAR_11)
{
 union ccb *VAR_12;
 struct ccb_ataio *VAR_13;
 struct ccb_scsiio *VAR_14;
 int VAR_15;


 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  if (VAR_11->hold[VAR_15])
   break;
 }
 VAR_12 = FUNC_6();
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_11->dev, "Unable to allocate recovery command\n");
completeall:

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   if (VAR_11->hold[VAR_15] == ((void*)0))
    continue;
   VAR_11->hold[VAR_15]->ccb_h.status &= ~VAR_3;
   VAR_11->hold[VAR_15]->ccb_h.status |= VAR_2;
   FUNC_3(VAR_11, VAR_11->hold[VAR_15]);
   VAR_11->hold[VAR_15] = ((void*)0);
   VAR_11->numhslots--;
  }
  FUNC_4(VAR_11);
  return;
 }
 VAR_12->ccb_h = VAR_11->hold[VAR_15]->ccb_h;
 if (VAR_12->ccb_h.func_code == VAR_9) {

  VAR_12->ccb_h.recovery_type = VAR_7;
  VAR_12->ccb_h.func_code = VAR_9;
  VAR_12->ccb_h.flags = VAR_1;
  VAR_12->ccb_h.timeout = 1000;
  VAR_13 = &VAR_12->ataio;
  VAR_13->data_ptr = FUNC_5(512, VAR_5, VAR_6);
  if (VAR_13->data_ptr == ((void*)0)) {
   FUNC_7(VAR_12);
   FUNC_1(VAR_11->dev,
       "Unable to allocate memory for READ LOG command\n");
   goto completeall;
  }
  VAR_13->dxfer_len = 512;
  FUNC_0(&VAR_13->cmd, sizeof(VAR_13->cmd));
  VAR_13->cmd.flags = VAR_0;
  VAR_13->cmd.command = 0x2F;
  VAR_13->cmd.sector_count = 1;
  VAR_13->cmd.sector_count_exp = 0;
  VAR_13->cmd.lba_low = 0x10;
  VAR_13->cmd.lba_mid = 0;
  VAR_13->cmd.lba_mid_exp = 0;
 } else {

  VAR_12->ccb_h.recovery_type = VAR_8;
  VAR_12->ccb_h.recovery_slot = VAR_15;
  VAR_12->ccb_h.func_code = VAR_10;
  VAR_12->ccb_h.flags = VAR_1;
  VAR_12->ccb_h.status = 0;
  VAR_12->ccb_h.timeout = 1000;
  VAR_14 = &VAR_12->csio;
  VAR_14->data_ptr = (void *)&VAR_11->hold[VAR_15]->csio.sense_data;
  VAR_14->dxfer_len = VAR_11->hold[VAR_15]->csio.sense_len;
  VAR_14->cdb_len = 6;
  FUNC_0(&VAR_14->cdb_io, sizeof(VAR_14->cdb_io));
  VAR_14->cdb_io.cdb_bytes[0] = 0x03;
  VAR_14->cdb_io.cdb_bytes[4] = VAR_14->dxfer_len;
 }

 VAR_11->recoverycmd = 1;
 FUNC_8(VAR_11->sim, 1);
 FUNC_2(VAR_11, VAR_12);
}
