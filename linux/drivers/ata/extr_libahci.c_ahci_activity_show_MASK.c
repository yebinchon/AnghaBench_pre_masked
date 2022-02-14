
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {struct ahci_port_priv* private_data; } ;
struct ata_link {size_t pmp; struct ata_port* ap; } ;
struct ata_device {struct ata_link* link; } ;
struct ahci_port_priv {struct ahci_em_priv* em_priv; } ;
struct ahci_em_priv {int blink_policy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct ata_device *VAR_0, char *VAR_1)
{
 struct ata_link *VAR_2 = VAR_0->link;
 struct ata_port *VAR_3 = VAR_2->ap;
 struct ahci_port_priv *VAR_4 = VAR_3->private_data;
 struct ahci_em_priv *VAR_5 = &VAR_4->em_priv[VAR_2->pmp];




 return FUNC_0(VAR_1, "%d\n", VAR_5->blink_policy);
}
