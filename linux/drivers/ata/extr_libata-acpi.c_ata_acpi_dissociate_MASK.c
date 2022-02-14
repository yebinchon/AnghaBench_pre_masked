
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int tdev; } ;
struct ata_host {int n_ports; struct ata_port** ports; } ;
struct ata_acpi_gtm {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct ata_acpi_gtm* FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*,struct ata_acpi_gtm const*) ;

void FUNC_3(struct ata_host *VAR_0)
{
 int VAR_1;




 for (VAR_1 = 0; VAR_1 < VAR_0->n_ports; VAR_1++) {
  struct ata_port *VAR_2 = VAR_0->ports[VAR_1];
  const struct ata_acpi_gtm *VAR_3 = FUNC_1(VAR_2);

  if (FUNC_0(&VAR_2->tdev) && VAR_3)
   FUNC_2(VAR_2, VAR_3);
 }
}
