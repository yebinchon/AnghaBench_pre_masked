
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int lock; } ;
struct ata_device {int flags; TYPE_2__* link; } ;
typedef int ssize_t ;
struct TYPE_3__ {int flags; int action; } ;
struct TYPE_4__ {TYPE_1__ eh_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;
 struct ata_device* FUNC_2 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_3 (int ) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct scsi_device* FUNC_7 (struct device*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_7,
      struct device_attribute *VAR_8,
      const char *VAR_9, size_t VAR_10)
{
 struct scsi_device *VAR_11 = FUNC_7(VAR_7);
 struct ata_port *VAR_12;
 struct ata_device *VAR_13;
 long int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_9, 10, &VAR_14);
 if (VAR_15)
  return VAR_15;
 if ((VAR_14 < 0) || (VAR_14 > 1))
  return -VAR_4;

 VAR_12 = FUNC_3(VAR_11->host);
 VAR_13 = FUNC_2(VAR_12, VAR_11);
 if (FUNC_8(!VAR_13))
  return -VAR_6;

 FUNC_5(VAR_12->lock);
 if (VAR_14)
  VAR_13->flags |= VAR_1;
 else
  VAR_13->flags &= ~VAR_1;

 VAR_13->link->eh_info.action |= VAR_3;
 VAR_13->link->eh_info.flags |= VAR_2;
 FUNC_0(VAR_12);
 FUNC_6(VAR_12->lock);

 FUNC_1(VAR_12);

 if (VAR_14) {
  FUNC_5(VAR_12->lock);
  if (!(VAR_13->flags & VAR_0)) {
   VAR_13->flags &= ~VAR_1;
   VAR_15 = -VAR_5;
  }
  FUNC_6(VAR_12->lock);
 }

 return VAR_15 ? VAR_15 : VAR_10;
}
