
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_isa_bridge {int flags; } ;
struct pci_dev {int dummy; } ;
struct pci_bits {int member_0; int member_1; int member_2; int member_3; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int dev; struct via_isa_bridge* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,struct pci_bits const*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_2, unsigned long VAR_3)
{
 struct ata_port *VAR_4 = VAR_2->ap;
 const struct via_isa_bridge *VAR_5 = VAR_4->host->private_data;

 if (!(VAR_5->flags & VAR_1)) {
  static const struct pci_bits VAR_6[] = {
   { 0x40, 1, 0x02, 0x02 },
   { 0x40, 1, 0x01, 0x01 }
  };
  struct pci_dev *VAR_7 = FUNC_2(VAR_4->host->dev);
  if (!FUNC_1(VAR_7, &VAR_6[VAR_4->port_no]))
   return -VAR_0;
 }

 return FUNC_0(VAR_2, VAR_3);
}
