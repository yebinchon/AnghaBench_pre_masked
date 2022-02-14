
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct request {int rq_flags; int timeout; } ;
struct cdrom_info {int disk; } ;
typedef int req_flags_t ;
struct TYPE_6__ {int queue; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_8__ {int type; } ;
struct TYPE_7__ {unsigned int resid_len; int sense_len; int sense; scalar_t__ result; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,struct request*,void*,unsigned int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,unsigned char const,int,int,int) ;
 TYPE_3__* FUNC_6 (struct request*) ;
 int FUNC_7 (int ,unsigned char const*,int ) ;
 int FUNC_8 (int ,int ,struct scsi_sense_hdr*) ;
 TYPE_2__* FUNC_9 (struct request*) ;
 int FUNC_10 (int) ;

int FUNC_11(ide_drive_t *VAR_10, const unsigned char *VAR_11,
      int VAR_12, void *VAR_13, unsigned *VAR_14,
      struct scsi_sense_hdr *VAR_15, int VAR_16,
      req_flags_t VAR_17)
{
 struct cdrom_info *VAR_18 = VAR_10->driver_data;
 struct scsi_sense_hdr VAR_19;
 int VAR_20 = 10;
 bool VAR_21;

 FUNC_5(VAR_4, "cmd[0]: 0x%x, write: 0x%x, timeout: %d, "
      "rq_flags: 0x%x",
      VAR_11[0], VAR_12, VAR_16, VAR_17);

 if (!VAR_15)
  VAR_15 = &VAR_19;


 do {
  struct request *VAR_22;
  int VAR_23;
  bool VAR_24 = 0;

  VAR_22 = FUNC_1(VAR_10->queue,
   VAR_12 ? VAR_7 : VAR_6, 0);
  FUNC_7(FUNC_9(VAR_22)->cmd, VAR_11, VAR_1);
  FUNC_6(VAR_22)->type = VAR_0;
  VAR_22->rq_flags |= VAR_17;
  VAR_22->timeout = VAR_16;
  if (VAR_13) {
   VAR_23 = FUNC_3(VAR_10->queue, VAR_22, VAR_13,
      *VAR_14, VAR_3);
   if (VAR_23) {
    FUNC_2(VAR_22);
    return VAR_23;
   }
  }

  FUNC_0(VAR_10->queue, VAR_18->disk, VAR_22, 0);
  VAR_23 = FUNC_9(VAR_22)->result ? -VAR_2 : 0;

  if (VAR_13)
   *VAR_14 = FUNC_9(VAR_22)->resid_len;
  FUNC_8(FUNC_9(VAR_22)->sense,
         FUNC_9(VAR_22)->sense_len, VAR_15);





  VAR_21 = (VAR_22->rq_flags & VAR_8) != 0;
  if (VAR_21) {




   if (VAR_15->sense_key == VAR_9)
    FUNC_4(VAR_10);
   else if (VAR_15->sense_key == VAR_5 &&
     VAR_15->asc == 4 && VAR_15->ascq != 4) {





    VAR_24 = 1;
   } else {

    VAR_20 = 0;
   }
   --VAR_20;
  }
  FUNC_2(VAR_22);
  if (VAR_24)
   FUNC_10(2);
 } while (VAR_21 && VAR_20 >= 0);


 return VAR_21 ? -VAR_2 : 0;
}
