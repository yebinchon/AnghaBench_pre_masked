
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,int *) ;
 int * VAR_1 ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_2, unsigned long VAR_3)
{
 struct ata_port *VAR_4 = VAR_2->ap;
 struct pci_dev *VAR_5 = FUNC_2(VAR_4->host->dev);

 if (!FUNC_1(VAR_5, &VAR_1[VAR_4->port_no]))
  return -VAR_0;
 return FUNC_0(VAR_2, VAR_3);
}
