
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sata_oxnas_host_priv {int port_in_eh; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {struct sata_oxnas_host_priv* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void FUNC_3(struct ata_port *VAR_0)
{
 struct sata_oxnas_host_priv *VAR_1 = VAR_0->host->private_data;

 FUNC_1("ENTER\n");
 VAR_1->port_in_eh |= FUNC_0(VAR_0->port_no);
 FUNC_2();
}
