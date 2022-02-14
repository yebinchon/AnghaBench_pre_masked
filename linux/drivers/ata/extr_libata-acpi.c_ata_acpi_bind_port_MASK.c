
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_port {int flags; int tdev; int pflags; int __acpi_init_gtm; int port_no; TYPE_2__* host; } ;
struct TYPE_3__ {struct ata_port* ap; } ;
struct ata_acpi_hotplug_context {int hp; TYPE_1__ data; } ;
struct acpi_device {scalar_t__ hp; } ;
struct TYPE_4__ {int * dev; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct acpi_device*,int *,int ,int ) ;
 int FUNC_2 (int *,struct acpi_device*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct ata_port*,int *) ;
 struct ata_acpi_hotplug_context* FUNC_4 (int,int ) ;
 scalar_t__ VAR_5 ;

void FUNC_5(struct ata_port *VAR_6)
{
 struct acpi_device *VAR_7 = FUNC_0(VAR_6->host->dev);
 struct acpi_device *VAR_8;
 struct ata_acpi_hotplug_context *VAR_9;

 if (VAR_5 || VAR_6->flags & VAR_0 || !VAR_7)
  return;

 FUNC_2(&VAR_6->tdev, VAR_7, VAR_6->port_no);

 if (FUNC_3(VAR_6, &VAR_6->__acpi_init_gtm) == 0)
  VAR_6->pflags |= VAR_1;

 VAR_8 = FUNC_0(&VAR_6->tdev);
 if (!VAR_8 || VAR_8->hp)
  return;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return;

 VAR_9->data.ap = VAR_6;
 FUNC_1(VAR_8, &VAR_9->hp, VAR_3,
       VAR_4);
}
