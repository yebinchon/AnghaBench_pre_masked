
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; int device; int dev; } ;
struct ahci_host_priv {int force_port_map; int flags; int mask_port_map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct ahci_host_priv*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_2,
      struct ahci_host_priv *VAR_3)
{
 if (VAR_2->vendor == VAR_1 && VAR_2->device == 0x2361) {
  FUNC_1(&VAR_2->dev, "JMB361 has only one port\n");
  VAR_3->force_port_map = 1;
 }






 if (VAR_3->flags & VAR_0) {
  if (VAR_2->device == 0x6121)
   VAR_3->mask_port_map = 0x3;
  else
   VAR_3->mask_port_map = 0xf;
  FUNC_1(&VAR_2->dev,
     "Disabling your PATA port. Use the boot option 'ahci.marvell_enable=0' to avoid this.\n");
 }

 FUNC_0(&VAR_2->dev, VAR_3);
}
