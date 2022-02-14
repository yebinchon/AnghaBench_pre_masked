
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct pci_bits {int member_0; unsigned int member_1; int member_2; int member_3; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,struct pci_bits const*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_1, unsigned long VAR_2)
{
 static const struct pci_bits VAR_3[] = {
  { 0x41U, 1U, 0x80UL, 0x80UL },
 };
 struct ata_port *VAR_4 = VAR_1->ap;
 struct pci_dev *VAR_5 = FUNC_2(VAR_4->host->dev);
 if (!FUNC_1(VAR_5, &VAR_3[VAR_4->port_no]))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
