
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ahci_host_priv {int version; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 struct ata_port* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_0);
 struct ata_port *VAR_4 = FUNC_0(VAR_3);
 struct ahci_host_priv *VAR_5 = VAR_4->host->private_data;

 return FUNC_2(VAR_2, "%x\n", VAR_5->version);
}
