
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct ata_port {TYPE_1__ link; } ;


 int FUNC_0 (struct scsi_device*,int ) ;
 int FUNC_1 (struct scsi_device*) ;

int FUNC_2(struct scsi_device *VAR_0, struct ata_port *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_1->link.device);
 return 0;
}
