
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct atp867x_priv {int pci66mhz; int eightb_piospd; int slave_piospd; int mstr_piospd; int dma_mode; } ;
struct ata_port {int port_no; struct atp867x_priv* private_data; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (struct ata_port*,int) ;
 int FUNC_3 (struct ata_port*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct ata_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct atp867x_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int ) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ata_port *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_7(VAR_3->host->dev);
 struct atp867x_priv *VAR_5;
 int VAR_6 = VAR_3->port_no;

 VAR_5 = VAR_3->private_data =
  FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 VAR_5->dma_mode = FUNC_1(VAR_3, VAR_6);
 VAR_5->mstr_piospd = FUNC_2(VAR_3, VAR_6);
 VAR_5->slave_piospd = FUNC_3(VAR_3, VAR_6);
 VAR_5->eightb_piospd = FUNC_0(VAR_3, VAR_6);

 VAR_5->pci66mhz =
  FUNC_6(FUNC_4(VAR_3)) & VAR_0;

 return 0;
}
