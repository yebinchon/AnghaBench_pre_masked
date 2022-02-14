
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ata_taskfile {int command; } ;
struct ata_port {int port_no; TYPE_1__* host; struct ahci_port_priv* private_data; } ;
struct ata_link {struct ata_port* ap; int device; } ;
struct ahci_port_priv {int * rx_fis; } ;
struct ahci_host_priv {int (* start_engine ) (struct ata_port*) ;int (* stop_engine ) (struct ata_port*) ;} ;
struct TYPE_2__ {struct ahci_host_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,struct ata_taskfile*) ;
 int FUNC_2 (struct ata_taskfile*,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ata_link*,unsigned long const*,unsigned long,int*,int *) ;
 scalar_t__ FUNC_6 (struct ata_link*,int ,int*) ;
 int FUNC_7 (struct ata_port*) ;
 int FUNC_8 (struct ata_port*) ;

__attribute__((used)) static int FUNC_9(struct ata_link *VAR_3, unsigned int *VAR_4,
    unsigned long VAR_5)
{
 static const unsigned long VAR_6[] = { 5, 100, 500};
 struct ata_port *VAR_7 = VAR_3->ap;
 struct ahci_port_priv *VAR_8 = VAR_7->private_data;
 struct ahci_host_priv *VAR_9 = VAR_7->host->private_data;
 u8 *VAR_10 = VAR_8->rx_fis + VAR_1;
 struct ata_taskfile VAR_11;
 bool VAR_12;
 u32 VAR_13;
 int VAR_14;
 int VAR_15 = 100;

 VAR_9->stop_engine(VAR_7);


 FUNC_1(VAR_3->device, &VAR_11);
 VAR_11.command = VAR_0;
 FUNC_2(&VAR_11, 0, 0, VAR_10);

 do {
  FUNC_3(VAR_3->ap->port_no);
  VAR_14 = FUNC_5(VAR_3, VAR_6, VAR_5, &VAR_12, ((void*)0));
  FUNC_4(VAR_3->ap->port_no);




  if (FUNC_6(VAR_3, VAR_2, &VAR_13))
   break;
  if (!(VAR_13 & 0x3))
   break;
 } while (!VAR_12 && VAR_15--);

 VAR_9->start_engine(VAR_7);

 if (VAR_12)
  *VAR_4 = FUNC_0(VAR_7);

 return VAR_14;
}
