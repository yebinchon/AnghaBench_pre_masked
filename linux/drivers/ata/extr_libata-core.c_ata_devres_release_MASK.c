
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_port {scalar_t__ scsi_host; } ;
struct ata_host {int n_ports; struct ata_port** ports; } ;


 int FUNC_0 (struct ata_host*) ;
 struct ata_host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct ata_host *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->n_ports; VAR_3++) {
  struct ata_port *VAR_4 = VAR_2->ports[VAR_3];

  if (!VAR_4)
   continue;

  if (VAR_4->scsi_host)
   FUNC_3(VAR_4->scsi_host);

 }

 FUNC_2(VAR_0, ((void*)0));
 FUNC_0(VAR_2);
}
