
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int flags; TYPE_1__* ops; } ;
struct ata_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* sw_activity_show ) (struct ata_device*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_device* FUNC_0 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_1 (int ) ;
 int FUNC_2 (struct ata_device*,char*) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct scsi_device *VAR_5 = FUNC_3(VAR_2);
 struct ata_port *VAR_6 = FUNC_1(VAR_5->host);
 struct ata_device *VAR_7 = FUNC_0(VAR_6, VAR_5);

 if (VAR_7 && VAR_6->ops->sw_activity_show &&
     (VAR_6->flags & VAR_0))
  return VAR_6->ops->sw_activity_show(VAR_7, VAR_4);
 return -VAR_1;
}
