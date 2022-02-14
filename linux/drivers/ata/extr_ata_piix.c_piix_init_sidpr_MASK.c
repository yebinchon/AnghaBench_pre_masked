
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct piix_host_priv {scalar_t__* map; int sidpr; } ;
struct pci_dev {int dummy; } ;
struct ata_link {int dummy; } ;
struct ata_port {int flags; int * ops; struct ata_link link; } ;
struct ata_host {struct ata_port** ports; int dev; struct piix_host_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int,int ) ;
 int * FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct ata_host*) ;
 int VAR_7 ;
 int FUNC_7 (struct ata_link*,int ,int*) ;
 int FUNC_8 (struct ata_link*,int ,int) ;
 struct pci_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct ata_host *VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_9(VAR_8->dev);
 struct piix_host_priv *VAR_10 = VAR_8->private_data;
 struct ata_link *VAR_11 = &VAR_8->ports[0]->link;
 u32 VAR_12;
 int VAR_13, VAR_14;


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  if (VAR_10->map[VAR_13] == VAR_2)
   return 0;


 if (FUNC_6(VAR_8))
  return 0;

 if (!(VAR_8->ports[0]->flags & VAR_3))
  return 0;

 if (FUNC_3(VAR_9, VAR_4) == 0 ||
     FUNC_2(VAR_9, VAR_4) != VAR_5)
  return 0;

 if (FUNC_4(VAR_9, 1 << VAR_4, VAR_1))
  return 0;

 VAR_10->sidpr = FUNC_5(VAR_9)[VAR_4];





 FUNC_7(VAR_11, VAR_6, &VAR_12);





 if ((VAR_12 & 0xf00) != 0x300) {
  VAR_12 |= 0x300;
  FUNC_8(VAR_11, VAR_6, VAR_12);
  FUNC_7(VAR_11, VAR_6, &VAR_12);

  if ((VAR_12 & 0xf00) != 0x300) {
   FUNC_1(VAR_8->dev,
     "SCR access via SIDPR is available but doesn't work\n");
   return 0;
  }
 }


 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  struct ata_port *VAR_15 = VAR_8->ports[VAR_13];

  VAR_15->ops = &VAR_7;

  if (VAR_15->flags & VAR_0) {
   VAR_14 = FUNC_0(VAR_15);
   if (VAR_14)
    return VAR_14;
  }
 }

 return 0;
}
