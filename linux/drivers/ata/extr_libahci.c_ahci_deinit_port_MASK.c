
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct ahci_host_priv {int (* stop_engine ) (struct ata_port*) ;} ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_0, const char **VAR_1)
{
 int VAR_2;
 struct ahci_host_priv *VAR_3 = VAR_0->host->private_data;


 VAR_2 = VAR_3->stop_engine(VAR_0);
 if (VAR_2) {
  *VAR_1 = "failed to stop engine";
  return VAR_2;
 }


 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  *VAR_1 = "failed stop FIS RX";
  return VAR_2;
 }

 return 0;
}
