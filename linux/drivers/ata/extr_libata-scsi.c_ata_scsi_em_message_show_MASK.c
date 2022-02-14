
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int flags; TYPE_1__* ops; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* em_show ) (struct ata_port*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_port* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ata_port*,char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_2);
 struct ata_port *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->ops->em_show && (VAR_6->flags & VAR_0))
  return VAR_6->ops->em_show(VAR_6, VAR_4);
 return -VAR_1;
}
