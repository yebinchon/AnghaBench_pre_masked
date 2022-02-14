
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {unsigned int start; int flags; } ;
struct device {int dummy; } ;
struct acpi_resource_irq {unsigned int* interrupts; } ;
struct acpi_resource_extended_irq {unsigned int* interrupts; } ;
struct TYPE_2__ {struct acpi_resource_extended_irq extended_irq; struct acpi_resource_irq irq; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
struct acpi_ged_event {unsigned int gsi; unsigned int irq; int node; int handle; struct device* dev; } ;
struct acpi_ged_device {int event_list; struct device* dev; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct acpi_resource*,int ,struct resource*) ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct acpi_ged_event* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (unsigned int,int *,int ,unsigned int,char*,struct acpi_ged_event*) ;

__attribute__((used)) static acpi_status FUNC_9(struct acpi_resource *VAR_9,
           void *VAR_10)
{
 struct acpi_ged_event *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14 = VAR_6;
 struct acpi_ged_device *VAR_15 = VAR_10;
 struct device *VAR_16 = VAR_15->dev;
 acpi_handle VAR_17 = FUNC_1(VAR_16);
 acpi_handle VAR_18;
 struct resource VAR_19;
 struct acpi_resource_irq *VAR_20 = &VAR_9->data.irq;
 struct acpi_resource_extended_irq *VAR_21 = &VAR_9->data.extended_irq;

 if (VAR_9->type == VAR_0)
  return VAR_3;

 if (!FUNC_2(VAR_9, 0, &VAR_19)) {
  FUNC_5(VAR_16, "unable to parse IRQ resource\n");
  return VAR_2;
 }
 if (VAR_9->type == VAR_1)
  VAR_13 = VAR_20->interrupts[0];
 else
  VAR_13 = VAR_21->interrupts[0];

 VAR_12 = VAR_19.start;

 if (FUNC_0(FUNC_3(VAR_17, "_EVT", &VAR_18))) {
  FUNC_5(VAR_16, "cannot locate _EVT method\n");
  return VAR_2;
 }

 VAR_11 = FUNC_6(VAR_16, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return VAR_2;

 VAR_11->gsi = VAR_13;
 VAR_11->dev = VAR_16;
 VAR_11->irq = VAR_12;
 VAR_11->handle = VAR_18;

 if (VAR_19.flags & VAR_5)
  VAR_14 |= VAR_7;

 if (FUNC_8(VAR_12, ((void*)0), VAR_8,
     VAR_14, "ACPI:Ged", VAR_11)) {
  FUNC_5(VAR_16, "failed to setup event handler for irq %u\n", VAR_12);
  return VAR_2;
 }

 FUNC_4(VAR_16, "GED listening GSI %u @ IRQ %u\n", VAR_13, VAR_12);
 FUNC_7(&VAR_11->node, &VAR_15->event_list);
 return VAR_3;
}
