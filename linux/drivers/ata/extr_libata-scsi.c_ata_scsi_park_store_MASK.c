
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int lock; int park_req_pending; } ;
struct ata_device {scalar_t__ class; int flags; size_t devno; TYPE_2__* link; int unpark_deadline; } ;
typedef int ssize_t ;
struct TYPE_3__ {int * dev_action; } ;
struct TYPE_4__ {TYPE_1__ eh_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,long) ;
 int FUNC_1 (struct ata_port*) ;
 struct ata_device* FUNC_2 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 struct scsi_device* FUNC_8 (struct device*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_10,
       struct device_attribute *VAR_11,
       const char *VAR_12, size_t VAR_13)
{
 struct scsi_device *VAR_14 = FUNC_8(VAR_10);
 struct ata_port *VAR_15;
 struct ata_device *VAR_16;
 long int VAR_17;
 unsigned long VAR_18;
 int VAR_19;

 VAR_19 = FUNC_5(VAR_12, 10, &VAR_17);
 if (VAR_19)
  return VAR_19;
 if (VAR_17 < -2)
  return -VAR_5;
 if (VAR_17 > VAR_4) {
  VAR_19 = -VAR_8;
  VAR_17 = VAR_4;
 }

 VAR_15 = FUNC_3(VAR_14->host);

 FUNC_6(VAR_15->lock, VAR_18);
 VAR_16 = FUNC_2(VAR_15, VAR_14);
 if (FUNC_9(!VAR_16)) {
  VAR_19 = -VAR_6;
  goto unlock;
 }
 if (VAR_16->class != VAR_0 &&
     VAR_16->class != VAR_1) {
  VAR_19 = -VAR_7;
  goto unlock;
 }

 if (VAR_17 >= 0) {
  if (VAR_16->flags & VAR_2) {
   VAR_19 = -VAR_7;
   goto unlock;
  }

  VAR_16->unpark_deadline = FUNC_0(VAR_9, VAR_17);
  VAR_16->link->eh_info.dev_action[VAR_16->devno] |= VAR_3;
  FUNC_1(VAR_15);
  FUNC_4(&VAR_15->park_req_pending);
 } else {
  switch (VAR_17) {
  case -1:
   VAR_16->flags &= ~VAR_2;
   break;
  case -2:
   VAR_16->flags |= VAR_2;
   break;
  }
 }
unlock:
 FUNC_7(VAR_15->lock, VAR_18);

 return VAR_19 ? VAR_19 : VAR_13;
}
