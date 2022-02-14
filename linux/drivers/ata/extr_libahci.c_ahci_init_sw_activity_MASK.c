
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {struct ahci_port_priv* private_data; } ;
struct ata_link {size_t pmp; int flags; struct ata_port* ap; } ;
struct ahci_port_priv {struct ahci_em_priv* em_priv; } ;
struct ahci_em_priv {scalar_t__ blink_policy; int timer; struct ata_link* link; scalar_t__ activity; scalar_t__ saved_activity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ata_link *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->ap;
 struct ahci_port_priv *VAR_4 = VAR_3->private_data;
 struct ahci_em_priv *VAR_5 = &VAR_4->em_priv[VAR_2->pmp];


 VAR_5->saved_activity = VAR_5->activity = 0;
 VAR_5->link = VAR_2;
 FUNC_0(&VAR_5->timer, VAR_1, 0);


 if (VAR_5->blink_policy)
  VAR_2->flags |= VAR_0;
}
