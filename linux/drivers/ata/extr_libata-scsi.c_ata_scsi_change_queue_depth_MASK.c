
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct ata_port {int dummy; } ;


 int FUNC_0 (struct ata_port*,struct scsi_device*,int) ;
 struct ata_port* FUNC_1 (int ) ;

int FUNC_2(struct scsi_device *VAR_0, int VAR_1)
{
 struct ata_port *VAR_2 = FUNC_1(VAR_0->host);

 return FUNC_0(VAR_2, VAR_0, VAR_1);
}
