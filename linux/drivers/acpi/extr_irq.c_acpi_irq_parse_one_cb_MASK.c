
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwnode_handle {int dummy; } ;
struct acpi_resource_irq {size_t interrupt_count; int shareable; int polarity; int triggering; int * interrupts; } ;
struct acpi_resource_extended_irq {size_t interrupt_count; int shareable; int polarity; int triggering; int * interrupts; int resource_source; int producer_consumer; } ;
struct TYPE_2__ {struct acpi_resource_extended_irq extended_irq; struct acpi_resource_irq irq; } ;
struct acpi_resource {int type; TYPE_1__ data; } ;
struct acpi_irq_parse_one_ctx {size_t index; } ;
typedef int acpi_status ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct fwnode_handle* FUNC_0 (int *) ;
 struct fwnode_handle* VAR_3 ;
 int FUNC_1 (struct fwnode_handle*,int ,int ,int ,int ,struct acpi_irq_parse_one_ctx*) ;

__attribute__((used)) static acpi_status FUNC_2(struct acpi_resource *VAR_4,
      void *VAR_5)
{
 struct acpi_irq_parse_one_ctx *VAR_6 = VAR_5;
 struct acpi_resource_irq *VAR_7;
 struct acpi_resource_extended_irq *VAR_8;
 struct fwnode_handle *VAR_9;

 switch (VAR_4->type) {
 case 128:
  VAR_7 = &VAR_4->data.irq;
  if (VAR_6->index >= VAR_7->interrupt_count) {
   VAR_6->index -= VAR_7->interrupt_count;
   return VAR_2;
  }
  VAR_9 = VAR_3;
  FUNC_1(VAR_9, VAR_7->interrupts[VAR_6->index],
      VAR_7->triggering, VAR_7->polarity,
      VAR_7->shareable, VAR_6);
  return VAR_1;
 case 129:
  VAR_8 = &VAR_4->data.extended_irq;
  if (VAR_8->producer_consumer == VAR_0)
   return VAR_2;
  if (VAR_6->index >= VAR_8->interrupt_count) {
   VAR_6->index -= VAR_8->interrupt_count;
   return VAR_2;
  }
  VAR_9 = FUNC_0(&VAR_8->resource_source);
  FUNC_1(VAR_9, VAR_8->interrupts[VAR_6->index],
      VAR_8->triggering, VAR_8->polarity,
      VAR_8->shareable, VAR_6);
  return VAR_1;
 }

 return VAR_2;
}
