
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {struct ahci_port_priv* private_data; } ;
struct ata_link {size_t pmp; int flags; struct ata_port* ap; } ;
struct ahci_port_priv {struct ahci_em_priv* em_priv; } ;
struct ahci_em_priv {int timer; int activity; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ata_link *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->ap;
 struct ahci_port_priv *VAR_4 = VAR_3->private_data;
 struct ahci_em_priv *VAR_5 = &VAR_4->em_priv[VAR_2->pmp];

 if (!(VAR_2->flags & VAR_0))
  return;

 VAR_5->activity++;
 if (!FUNC_2(&VAR_5->timer))
  FUNC_0(&VAR_5->timer, VAR_1 + FUNC_1(10));
}
