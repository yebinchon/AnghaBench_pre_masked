
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {struct ahci_port_priv* private_data; } ;
struct ahci_port_priv {scalar_t__ fbs_enabled; } ;


 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;

__attribute__((used)) static int FUNC_3(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct ahci_port_priv *VAR_2 = VAR_1->private_data;

 if (!FUNC_1(VAR_1) || VAR_2->fbs_enabled)
  return FUNC_0(VAR_0);
 else
  return FUNC_2(VAR_0);
}
