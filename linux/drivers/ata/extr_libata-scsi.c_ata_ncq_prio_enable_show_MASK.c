
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int lock; } ;
struct ata_device {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_device* FUNC_0 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct scsi_device *VAR_5 = FUNC_5(VAR_2);
 struct ata_port *VAR_6;
 struct ata_device *VAR_7;
 bool VAR_8;
 int VAR_9 = 0;

 VAR_6 = FUNC_1(VAR_5->host);

 FUNC_3(VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto unlock;
 }

 VAR_8 = VAR_7->flags & VAR_0;

unlock:
 FUNC_4(VAR_6->lock);

 return VAR_9 ? VAR_9 : FUNC_2(VAR_4, 20, "%u\n", VAR_8);
}
