
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int queue_depth; TYPE_1__* host; } ;
struct ata_port {int lock; } ;
struct ata_device {int id; int flags; } ;
struct TYPE_2__ {int can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ata_device*) ;
 struct ata_device* FUNC_3 (struct ata_port*,struct scsi_device*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct scsi_device*,int) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

int FUNC_8(struct ata_port *VAR_3, struct scsi_device *VAR_4,
        int VAR_5)
{
 struct ata_device *VAR_6;
 unsigned long VAR_7;

 if (VAR_5 < 1 || VAR_5 == VAR_4->queue_depth)
  return VAR_4->queue_depth;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_6 || !FUNC_0(VAR_6))
  return VAR_4->queue_depth;


 FUNC_6(VAR_3->lock, VAR_7);
 VAR_6->flags &= ~VAR_0;
 if (VAR_5 == 1 || !FUNC_2(VAR_6)) {
  VAR_6->flags |= VAR_0;
  VAR_5 = 1;
 }
 FUNC_7(VAR_3->lock, VAR_7);


 VAR_5 = FUNC_4(VAR_5, VAR_4->host->can_queue);
 VAR_5 = FUNC_4(VAR_5, FUNC_1(VAR_6->id));
 VAR_5 = FUNC_4(VAR_5, VAR_1);

 if (VAR_4->queue_depth == VAR_5)
  return -VAR_2;

 return FUNC_5(VAR_4, VAR_5);
}
