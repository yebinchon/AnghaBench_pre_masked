
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ata_port {int flags; int port_no; TYPE_1__* host; int tdev; } ;
struct ata_device {int tdev; int devno; TYPE_2__* link; } ;
struct TYPE_6__ {struct ata_device* dev; } ;
struct ata_acpi_hotplug_context {int hp; TYPE_3__ data; } ;
struct acpi_device {scalar_t__ hp; } ;
struct TYPE_5__ {int pmp; struct ata_port* ap; } ;
struct TYPE_4__ {int * dev; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct acpi_device*,int *,int ,int ) ;
 int FUNC_3 (int *,struct acpi_device*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ata_acpi_hotplug_context* FUNC_4 (int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct ata_port*) ;

void FUNC_6(struct ata_device *VAR_6)
{
 struct ata_port *VAR_7 = VAR_6->link->ap;
 struct acpi_device *VAR_8 = FUNC_0(&VAR_7->tdev);
 struct acpi_device *VAR_9 = FUNC_0(VAR_7->host->dev);
 struct acpi_device *VAR_10, *VAR_11;
 struct ata_acpi_hotplug_context *VAR_12;
 u64 VAR_13;





 if (VAR_5 || !VAR_9 ||
   (!(VAR_7->flags & VAR_0) && !VAR_8))
  return;

 if (VAR_7->flags & VAR_0) {
  if (!FUNC_5(VAR_7))
   VAR_13 = FUNC_1(VAR_7->port_no, VAR_2);
  else
   VAR_13 = FUNC_1(VAR_7->port_no, VAR_6->link->pmp);
  VAR_10 = VAR_9;
 } else {
  VAR_13 = VAR_6->devno;
  VAR_10 = VAR_8;
 }

 FUNC_3(&VAR_6->tdev, VAR_10, VAR_13);
 VAR_11 = FUNC_0(&VAR_6->tdev);
 if (!VAR_11 || VAR_11->hp)
  return;

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return;

 VAR_12->data.dev = VAR_6;
 FUNC_2(VAR_11, &VAR_12->hp, VAR_3,
       VAR_4);
}
