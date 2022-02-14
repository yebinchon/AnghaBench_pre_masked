
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_taskfile {int command; } ;
struct ata_port {TYPE_1__* host; struct ahci_port_priv* private_data; } ;
struct ata_link {int device; struct ata_port* ap; int eh_context; } ;
struct ahci_port_priv {int * rx_fis; } ;
struct ahci_host_priv {int (* start_engine ) (struct ata_port*) ;int (* stop_engine ) (struct ata_port*) ;} ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (int ,struct ata_taskfile*) ;
 int FUNC_3 (struct ata_taskfile*,int ,int ,int *) ;
 unsigned long* FUNC_4 (int *) ;
 int FUNC_5 (struct ata_link*,unsigned long const*,unsigned long,int*,int ) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct ata_port*) ;

int FUNC_8(struct ata_link *VAR_3, unsigned int *VAR_4,
        unsigned long VAR_5, bool *VAR_6)
{
 const unsigned long *VAR_7 = FUNC_4(&VAR_3->eh_context);
 struct ata_port *VAR_8 = VAR_3->ap;
 struct ahci_port_priv *VAR_9 = VAR_8->private_data;
 struct ahci_host_priv *VAR_10 = VAR_8->host->private_data;
 u8 *VAR_11 = VAR_9->rx_fis + VAR_1;
 struct ata_taskfile VAR_12;
 int VAR_13;

 FUNC_0("ENTER\n");

 VAR_10->stop_engine(VAR_8);


 FUNC_2(VAR_3->device, &VAR_12);
 VAR_12.command = VAR_0;
 FUNC_3(&VAR_12, 0, 0, VAR_11);

 VAR_13 = FUNC_5(VAR_3, VAR_7, VAR_5, VAR_6,
     VAR_2);

 VAR_10->start_engine(VAR_8);

 if (*VAR_6)
  *VAR_4 = FUNC_1(VAR_8);

 FUNC_0("EXIT, rc=%d, class=%u\n", VAR_13, *VAR_4);
 return VAR_13;
}
