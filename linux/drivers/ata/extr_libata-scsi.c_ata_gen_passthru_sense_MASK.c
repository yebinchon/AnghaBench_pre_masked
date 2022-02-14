
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {unsigned char* sense_buffer; int result; } ;
struct ata_taskfile {int command; unsigned char feature; unsigned char nsect; unsigned char lbal; unsigned char lbam; unsigned char lbah; unsigned char device; int flags; unsigned char hob_nsect; unsigned char hob_lbal; unsigned char hob_lbam; unsigned char hob_lbah; } ;
struct ata_queued_cmd {int dev; TYPE_2__* ap; scalar_t__ err_mask; struct ata_taskfile result_tf; struct scsi_cmnd* scsicmd; } ;
struct TYPE_4__ {int print_id; TYPE_1__* ops; } ;
struct TYPE_3__ {int * error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct scsi_cmnd*,int,int,int) ;
 int FUNC_1 (int ,int,unsigned char,int*,int*,int*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int,unsigned char*,int ,int ,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ata_queued_cmd *VAR_9)
{
 struct scsi_cmnd *VAR_10 = VAR_9->scsicmd;
 struct ata_taskfile *VAR_11 = &VAR_9->result_tf;
 unsigned char *VAR_12 = VAR_10->sense_buffer;
 unsigned char *VAR_13 = VAR_12 + 8;
 int VAR_14 = VAR_9->ap->ops->error_handler == ((void*)0);
 u8 VAR_15, VAR_16, VAR_17;

 FUNC_2(VAR_12, 0, VAR_8);

 VAR_10->result = (VAR_5 << 24) | VAR_7;





 if (VAR_9->err_mask ||
     VAR_11->command & (VAR_0 | VAR_1 | VAR_3 | VAR_2)) {
  FUNC_1(VAR_9->ap->print_id, VAR_11->command, VAR_11->feature,
       &VAR_15, &VAR_16, &VAR_17, VAR_14);
  FUNC_0(VAR_9->dev, VAR_10, VAR_15, VAR_16, VAR_17);
 } else {




  FUNC_3(1, VAR_10->sense_buffer,
     VAR_6, 0, 0x1D);
 }

 if ((VAR_10->sense_buffer[0] & 0x7f) >= 0x72) {
  u8 VAR_18;


  VAR_18 = VAR_12[7];
  VAR_13 = (char *)FUNC_4(VAR_12, VAR_18 + 8, 9);
  if (!VAR_13) {
   if (VAR_8 < VAR_18 + 14)
    return;
   VAR_12[7] = VAR_18 + 14;
   VAR_13 = VAR_12 + 8 + VAR_18;
  }
  VAR_13[0] = 9;
  VAR_13[1] = 12;



  VAR_13[2] = 0x00;
  VAR_13[3] = VAR_11->feature;
  VAR_13[5] = VAR_11->nsect;
  VAR_13[7] = VAR_11->lbal;
  VAR_13[9] = VAR_11->lbam;
  VAR_13[11] = VAR_11->lbah;
  VAR_13[12] = VAR_11->device;
  VAR_13[13] = VAR_11->command;





  if (VAR_11->flags & VAR_4) {
   VAR_13[2] |= 0x01;
   VAR_13[4] = VAR_11->hob_nsect;
   VAR_13[6] = VAR_11->hob_lbal;
   VAR_13[8] = VAR_11->hob_lbam;
   VAR_13[10] = VAR_11->hob_lbah;
  }
 } else {

  VAR_13[0] = VAR_11->feature;
  VAR_13[1] = VAR_11->command;
  VAR_13[2] = VAR_11->device;
  VAR_13[3] = VAR_11->nsect;
  VAR_13[7] = 0;
  if (VAR_11->flags & VAR_4) {
   VAR_13[8] |= 0x80;
   if (VAR_11->hob_nsect)
    VAR_13[8] |= 0x40;
   if (VAR_11->hob_lbal || VAR_11->hob_lbam || VAR_11->hob_lbah)
    VAR_13[8] |= 0x20;
  }
  VAR_13[9] = VAR_11->lbal;
  VAR_13[10] = VAR_11->lbam;
  VAR_13[11] = VAR_11->lbah;
 }
}
