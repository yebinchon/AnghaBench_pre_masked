
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_taskfile {int command; } ;
struct ata_port {TYPE_1__* host; struct ahci_port_priv* private_data; } ;
struct ata_link {int eh_context; int device; struct ata_port* ap; } ;
struct ahci_port_priv {int * rx_fis; } ;
struct ahci_host_priv {int (* start_engine ) (struct ata_port*) ;int (* stop_engine ) (struct ata_port*) ;} ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,struct ata_taskfile*) ;
 int FUNC_2 (struct ata_taskfile*,int ,int ,int *) ;
 int FUNC_3 (struct ata_link*,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ata_link*,int ,unsigned long,int*,int *) ;
 int FUNC_6 (struct ata_port*) ;
 int FUNC_7 (struct ata_port*) ;

__attribute__((used)) static int FUNC_8(struct ata_link *VAR_5, unsigned int *VAR_6,
    unsigned long VAR_7)
{
 struct ata_port *VAR_8 = VAR_5->ap;
 struct ahci_port_priv *VAR_9 = VAR_8->private_data;
 struct ahci_host_priv *VAR_10 = VAR_8->host->private_data;
 u8 *VAR_11 = VAR_9->rx_fis + VAR_2;
 struct ata_taskfile VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_10->stop_engine(VAR_8);


 FUNC_1(VAR_5->device, &VAR_12);
 VAR_12.command = VAR_0;
 FUNC_2(&VAR_12, 0, 0, VAR_11);

 VAR_14 = FUNC_5(VAR_5, FUNC_4(&VAR_5->eh_context),
     VAR_7, &VAR_13, ((void*)0));

 VAR_10->start_engine(VAR_8);
 if (VAR_13) {
  VAR_14 = FUNC_3(VAR_5, VAR_4 + 2 * VAR_1,
       VAR_3);
  if (VAR_14)
   FUNC_0(VAR_8);
 }
 return VAR_14;
}
