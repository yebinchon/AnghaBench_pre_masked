
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


struct TYPE_11__ {int flags; int command; int features; int lba_low; int lba_mid; int lba_high; int device; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int features_exp; int sector_count; int sector_count_exp; int control; } ;
struct TYPE_12__ {TYPE_5__ cmd; } ;
struct TYPE_9__ {int cdb_bytes; int cdb_ptr; } ;
struct TYPE_10__ {int dxfer_len; int cdb_len; TYPE_3__ cdb_io; } ;
struct TYPE_8__ {int target_id; scalar_t__ func_code; int flags; } ;
union ccb {TYPE_6__ ataio; TYPE_4__ csio; TYPE_2__ ccb_h; } ;
typedef int uint8_t ;
struct fsl_sata_cmd_tab {int* cfis; int* acmd; } ;
struct fsl_sata_channel {TYPE_1__* curr; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static int
FUNC_2(struct fsl_sata_channel *VAR_11, struct fsl_sata_cmd_tab *VAR_12, union ccb *VAR_13, int VAR_14)
{
 uint8_t *VAR_15 = &VAR_12->cfis[0];

 FUNC_1(VAR_15, 32);
 VAR_15[0] = 0x27;
 VAR_15[1] = (VAR_13->ccb_h.target_id & 0x0f);
 if (VAR_13->ccb_h.func_code == VAR_10) {
  VAR_15[1] |= 0x80;
  VAR_15[2] = VAR_4;
  if ((VAR_13->ccb_h.flags & VAR_8) != VAR_9 &&
      VAR_11->curr[VAR_13->ccb_h.target_id].mode >= VAR_1)
   VAR_15[3] = VAR_3;
  else {
   VAR_15[5] = VAR_13->csio.dxfer_len;
   VAR_15[6] = VAR_13->csio.dxfer_len >> 8;
  }
  VAR_15[7] = VAR_2;
  VAR_15[15] = VAR_0;
  FUNC_0((VAR_13->ccb_h.flags & VAR_7) ?
      VAR_13->csio.cdb_io.cdb_ptr : VAR_13->csio.cdb_io.cdb_bytes,
      VAR_12->acmd, VAR_13->csio.cdb_len);
  FUNC_1(VAR_12->acmd + VAR_13->csio.cdb_len, 32 - VAR_13->csio.cdb_len);
 } else if ((VAR_13->ataio.cmd.flags & VAR_5) == 0) {
  VAR_15[1] |= 0x80;
  VAR_15[2] = VAR_13->ataio.cmd.command;
  VAR_15[3] = VAR_13->ataio.cmd.features;
  VAR_15[4] = VAR_13->ataio.cmd.lba_low;
  VAR_15[5] = VAR_13->ataio.cmd.lba_mid;
  VAR_15[6] = VAR_13->ataio.cmd.lba_high;
  VAR_15[7] = VAR_13->ataio.cmd.device;
  VAR_15[8] = VAR_13->ataio.cmd.lba_low_exp;
  VAR_15[9] = VAR_13->ataio.cmd.lba_mid_exp;
  VAR_15[10] = VAR_13->ataio.cmd.lba_high_exp;
  VAR_15[11] = VAR_13->ataio.cmd.features_exp;
  if (VAR_13->ataio.cmd.flags & VAR_6) {
   VAR_15[12] = VAR_14 << 3;
   VAR_15[13] = 0;
  } else {
   VAR_15[12] = VAR_13->ataio.cmd.sector_count;
   VAR_15[13] = VAR_13->ataio.cmd.sector_count_exp;
  }
  VAR_15[15] = VAR_0;
 } else {
  VAR_15[15] = VAR_13->ataio.cmd.control;
 }
 return (20);
}
