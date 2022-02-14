
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_port {int dummy; } ;
struct ata_host {unsigned int n_ports; int dev; struct ata_port** ports; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct ata_port*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,unsigned int) ;

u32 FUNC_4(struct ata_host *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_ports; VAR_2++) {
  struct ata_port *VAR_4;

  if (!(VAR_1 & (1 << VAR_2)))
   continue;

  VAR_4 = VAR_0->ports[VAR_2];
  if (VAR_4) {
   FUNC_1(VAR_4);
   FUNC_0("port %u\n", VAR_2);
  } else {
   FUNC_0("port %u (no irq)\n", VAR_2);
   if (FUNC_2())
    FUNC_3(VAR_0->dev,
      "interrupt on disabled port %u\n", VAR_2);
  }

  VAR_3 = 1;
 }

 return VAR_3;
}
