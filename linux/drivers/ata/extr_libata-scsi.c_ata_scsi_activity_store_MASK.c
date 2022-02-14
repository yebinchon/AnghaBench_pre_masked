
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
typedef size_t ssize_t ;
typedef enum sw_activity { ____Placeholder_sw_activity } sw_activity ;
struct TYPE_2__ {int (* sw_activity_store ) (struct ata_device*,int) ;} ;


 int VAR_0 ;


 size_t VAR_1 ;

 struct ata_device* FUNC_0 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int *,int ) ;
 int FUNC_3 (struct ata_device*,int) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
 const char *VAR_4, size_t VAR_5)
{
 struct scsi_device *VAR_6 = FUNC_4(VAR_2);
 struct ata_port *VAR_7 = FUNC_1(VAR_6->host);
 struct ata_device *VAR_8 = FUNC_0(VAR_7, VAR_6);
 enum sw_activity VAR_9;
 int VAR_10;

 if (VAR_8 && VAR_7->ops->sw_activity_store &&
     (VAR_7->flags & VAR_0)) {
  VAR_9 = FUNC_2(VAR_4, ((void*)0), 0);
  switch (VAR_9) {
  case 128: case 129: case 130:
   VAR_10 = VAR_7->ops->sw_activity_store(VAR_8, VAR_9);
   if (!VAR_10)
    return VAR_5;
   else
    return VAR_10;
  }
 }
 return -VAR_1;
}
