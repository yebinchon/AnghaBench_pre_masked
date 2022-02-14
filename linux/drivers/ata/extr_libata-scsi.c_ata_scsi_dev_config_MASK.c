
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ sector_size; int manage_start_stop; int security_supported; TYPE_1__* host; int supported_events; struct request_queue* request_queue; } ;
struct request_queue {int bounce_gfp; } ;
struct ata_device {int flags; scalar_t__ class; struct scsi_device* sdev; int id; int max_sectors; } ;
struct TYPE_2__ {int can_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ata_device*,char*) ;
 int FUNC_1 (struct ata_device*,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_13 ;
 int FUNC_5 (struct request_queue*,int ,void*,int ) ;
 int FUNC_6 (struct request_queue*,int ) ;
 int FUNC_7 (struct request_queue*,scalar_t__) ;
 int FUNC_8 (struct request_queue*,scalar_t__) ;
 void* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct scsi_device*,int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct scsi_device *VAR_14,
          struct ata_device *VAR_15)
{
 struct request_queue *VAR_16 = VAR_14->request_queue;

 if (!FUNC_2(VAR_15->id))
  VAR_15->flags |= VAR_4;


 FUNC_6(VAR_16, VAR_15->max_sectors);

 if (VAR_15->class == VAR_1) {
  void *VAR_17;

  VAR_14->sector_size = VAR_8;


  FUNC_8(VAR_16, VAR_6 - 1);


  VAR_17 = FUNC_9(VAR_0, VAR_16->bounce_gfp | VAR_10);
  if (!VAR_17) {
   FUNC_0(VAR_15, "drain buffer allocation failed\n");
   return -VAR_9;
  }

  FUNC_5(VAR_16, VAR_13, VAR_17, VAR_0);
 } else {
  VAR_14->sector_size = FUNC_3(VAR_15->id);
  VAR_14->manage_start_stop = 1;
 }
 if (VAR_14->sector_size > VAR_11)
  FUNC_1(VAR_15,
   "sector_size=%u > PAGE_SIZE, PIO may malfunction\n",
   VAR_14->sector_size);

 FUNC_7(VAR_16, VAR_14->sector_size - 1);

 if (VAR_15->flags & VAR_2)
  FUNC_12(VAR_12, VAR_14->supported_events);

 if (VAR_15->flags & VAR_3) {
  int VAR_18;

  VAR_18 = FUNC_10(VAR_14->host->can_queue, FUNC_4(VAR_15->id));
  VAR_18 = FUNC_10(VAR_7, VAR_18);
  FUNC_11(VAR_14, VAR_18);
 }

 if (VAR_15->flags & VAR_5)
  VAR_14->security_supported = 1;

 VAR_15->sdev = VAR_14;
 return 0;
}
