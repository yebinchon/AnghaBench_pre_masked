
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* host; } ;
struct ata_link {int eh_context; struct ata_port* ap; } ;
struct ahci_host_priv {int (* start_engine ) (struct ata_port*) ;int (* stop_engine ) (struct ata_port*) ;} ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ata_link*,int ,unsigned long,int*,int *) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*) ;

__attribute__((used)) static int FUNC_5(struct ata_link *VAR_1, unsigned int *VAR_2,
     unsigned long VAR_3)
{
 struct ata_port *VAR_4 = VAR_1->ap;
 struct ahci_host_priv *VAR_5 = VAR_4->host->private_data;
 bool VAR_6;
 int VAR_7;

 FUNC_0("ENTER\n");

 VAR_5->stop_engine(VAR_4);

 VAR_7 = FUNC_2(VAR_1, FUNC_1(&VAR_1->eh_context),
     VAR_3, &VAR_6, ((void*)0));

 VAR_5->start_engine(VAR_4);

 FUNC_0("EXIT, rc=%d, class=%u\n", VAR_7, *VAR_2);




 return VAR_6 ? -VAR_0 : VAR_7;
}
