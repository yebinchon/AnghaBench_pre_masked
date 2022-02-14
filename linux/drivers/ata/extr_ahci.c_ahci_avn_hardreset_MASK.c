
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_taskfile {int command; } ;
struct ata_port {int port_no; struct ata_host* host; struct ahci_port_priv* private_data; } ;
struct ata_link {int device; struct ata_port* ap; int eh_context; } ;
struct ata_host {int dev; struct ahci_host_priv* private_data; } ;
struct ahci_port_priv {int * rx_fis; } ;
struct ahci_host_priv {int (* start_engine ) (struct ata_port*) ;int (* stop_engine ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_link*,int ,char*,int) ;
 int FUNC_3 (struct ata_port*,int) ;
 int FUNC_4 (int ,struct ata_taskfile*) ;
 int FUNC_5 (struct ata_taskfile*,int ,int ,int *) ;
 unsigned long VAR_5 ;
 int FUNC_6 (struct pci_dev*,int,int*) ;
 int FUNC_7 (struct pci_dev*,int,int) ;
 unsigned long* FUNC_8 (int *) ;
 int FUNC_9 (struct ata_link*,unsigned long const*,unsigned long,int*,int ) ;
 scalar_t__ FUNC_10 (struct ata_link*,int ,int*) ;
 int FUNC_11 (struct ata_port*) ;
 int FUNC_12 (struct ata_port*) ;
 struct pci_dev* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ata_link *VAR_6, unsigned int *VAR_7,
         unsigned long VAR_8)
{
 const unsigned long *VAR_9 = FUNC_8(&VAR_6->eh_context);
 struct ata_port *VAR_10 = VAR_6->ap;
 struct ahci_port_priv *VAR_11 = VAR_10->private_data;
 struct ahci_host_priv *VAR_12 = VAR_10->host->private_data;
 u8 *VAR_13 = VAR_11->rx_fis + VAR_2;
 unsigned long VAR_14 = VAR_8 - VAR_5;
 struct ata_taskfile VAR_15;
 bool VAR_16;
 int VAR_17, VAR_18;

 FUNC_0("ENTER\n");

 VAR_12->stop_engine(VAR_10);

 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  u16 VAR_19;
  u32 VAR_20;
  int VAR_21 = VAR_10->port_no;
  struct ata_host *VAR_22 = VAR_10->host;
  struct pci_dev *VAR_23 = FUNC_13(VAR_22->dev);


  FUNC_4(VAR_6->device, &VAR_15);
  VAR_15.command = VAR_0;
  FUNC_5(&VAR_15, 0, 0, VAR_13);

  VAR_17 = FUNC_9(VAR_6, VAR_9, VAR_8, &VAR_16,
    VAR_4);

  if (FUNC_10(VAR_6, VAR_3, &VAR_20) != 0 ||
    (VAR_20 & 0xf) != 1)
   break;

  FUNC_2(VAR_6, VAR_1, "avn bounce port%d\n",
    VAR_21);

  FUNC_6(VAR_23, 0x92, &VAR_19);
  VAR_19 &= ~(1 << VAR_21);
  FUNC_7(VAR_23, 0x92, VAR_19);
  FUNC_3(VAR_10, 1000);
  VAR_19 |= 1 << VAR_21;
  FUNC_7(VAR_23, 0x92, VAR_19);
  VAR_8 += VAR_14;
 }

 VAR_12->start_engine(VAR_10);

 if (VAR_16)
  *VAR_7 = FUNC_1(VAR_10);

 FUNC_0("EXIT, rc=%d, class=%u\n", VAR_17, *VAR_7);
 return VAR_17;
}
