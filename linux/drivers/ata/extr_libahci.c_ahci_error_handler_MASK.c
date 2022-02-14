
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct ata_port {int pflags; TYPE_2__ link; TYPE_1__* host; } ;
struct ahci_host_priv {int (* stop_engine ) (struct ata_port*) ;int (* start_engine ) (struct ata_port*) ;} ;
struct TYPE_3__ {struct ahci_host_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*) ;

void FUNC_5(struct ata_port *VAR_1)
{
 struct ahci_host_priv *VAR_2 = VAR_1->host->private_data;

 if (!(VAR_1->pflags & VAR_0)) {

  VAR_2->stop_engine(VAR_1);
  VAR_2->start_engine(VAR_1);
 }

 FUNC_1(VAR_1);

 if (!FUNC_0(VAR_1->link.device))
  VAR_2->stop_engine(VAR_1);
}
