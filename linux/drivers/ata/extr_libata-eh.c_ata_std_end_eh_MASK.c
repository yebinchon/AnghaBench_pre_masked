
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {struct Scsi_Host* scsi_host; } ;
struct Scsi_Host {scalar_t__ host_eh_scheduled; } ;



void FUNC_0(struct ata_port *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->scsi_host;

 VAR_1->host_eh_scheduled = 0;
}
