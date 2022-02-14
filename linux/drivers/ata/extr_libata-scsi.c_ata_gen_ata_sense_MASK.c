
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct scsi_cmnd {unsigned char* sense_buffer; int result; } ;
struct ata_taskfile {int command; int feature; } ;
struct ata_queued_cmd {struct ata_taskfile result_tf; int err_mask; TYPE_2__* ap; struct scsi_cmnd* scsicmd; struct ata_device* dev; } ;
struct ata_device {int dummy; } ;
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
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,char*,int,int ) ;
 int FUNC_2 (struct ata_device*,struct scsi_cmnd*,int,int,int) ;
 scalar_t__ FUNC_3 (struct ata_taskfile*,struct ata_device*) ;
 int FUNC_4 (int ,int,int ,int*,int*,int*,int) ;
 int FUNC_5 (unsigned char*,int ,int ) ;
 int FUNC_6 (unsigned char*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ata_queued_cmd *VAR_10)
{
 struct ata_device *VAR_11 = VAR_10->dev;
 struct scsi_cmnd *VAR_12 = VAR_10->scsicmd;
 struct ata_taskfile *VAR_13 = &VAR_10->result_tf;
 unsigned char *VAR_14 = VAR_12->sense_buffer;
 int VAR_15 = VAR_10->ap->ops->error_handler == ((void*)0);
 u64 VAR_16;
 u8 VAR_17, VAR_18, VAR_19;

 FUNC_5(VAR_14, 0, VAR_8);

 VAR_12->result = (VAR_5 << 24) | VAR_7;

 if (FUNC_0(VAR_11)) {


  FUNC_2(VAR_11, VAR_12, VAR_6, 0x04, 0x21);
  return;
 }



 if (VAR_10->err_mask ||
     VAR_13->command & (VAR_1 | VAR_2 | VAR_4 | VAR_3)) {
  FUNC_4(VAR_10->ap->print_id, VAR_13->command, VAR_13->feature,
       &VAR_17, &VAR_18, &VAR_19, VAR_15);
  FUNC_2(VAR_11, VAR_12, VAR_17, VAR_18, VAR_19);
 } else {

  FUNC_1(VAR_11, "could not decode error status 0x%x err_mask 0x%x\n",
        VAR_13->command, VAR_10->err_mask);
  FUNC_2(VAR_11, VAR_12, VAR_0, 0, 0);
  return;
 }

 VAR_16 = FUNC_3(&VAR_10->result_tf, VAR_11);
 if (VAR_16 == VAR_9)
  return;

 FUNC_6(VAR_14, VAR_8, VAR_16);
}
