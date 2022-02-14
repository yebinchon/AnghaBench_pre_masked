
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpet_data {size_t hd_nirqs; int* hd_irq; void* hd_address; int hd_phys_address; } ;
struct acpi_resource_fixed_memory32 {int address; } ;
struct acpi_resource_extended_irq {int interrupt_count; int polarity; int triggering; int * interrupts; } ;
struct TYPE_3__ {int address_length; int minimum; } ;
struct acpi_resource_address64 {TYPE_1__ address; } ;
struct TYPE_4__ {struct acpi_resource_extended_irq extended_irq; struct acpi_resource_fixed_memory32 fixed_memory32; } ;
struct acpi_resource {scalar_t__ type; TYPE_2__ data; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct acpi_resource*,struct acpi_resource_address64*) ;
 scalar_t__ FUNC_3 (struct hpet_data*) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static acpi_status FUNC_6(struct acpi_resource *VAR_7, void *VAR_8)
{
 struct hpet_data *VAR_9;
 acpi_status VAR_10;
 struct acpi_resource_address64 VAR_11;

 VAR_9 = VAR_8;

 VAR_10 = FUNC_2(VAR_7, &VAR_11);

 if (FUNC_0(VAR_10)) {
  VAR_9->hd_phys_address = VAR_11.address.minimum;
  VAR_9->hd_address = FUNC_4(VAR_11.address.minimum, VAR_11.address.address_length);
  if (!VAR_9->hd_address)
   return VAR_3;

  if (FUNC_3(VAR_9)) {
   FUNC_5(VAR_9->hd_address);
   return VAR_2;
  }
 } else if (VAR_7->type == VAR_1) {
  struct acpi_resource_fixed_memory32 *VAR_12;

  VAR_12 = &VAR_7->data.fixed_memory32;

  VAR_9->hd_phys_address = VAR_12->address;
  VAR_9->hd_address = FUNC_4(VAR_12->address,
      VAR_6);

  if (FUNC_3(VAR_9)) {
   FUNC_5(VAR_9->hd_address);
   return VAR_2;
  }
 } else if (VAR_7->type == VAR_0) {
  struct acpi_resource_extended_irq *VAR_13;
  int VAR_14, VAR_15;

  VAR_13 = &VAR_7->data.extended_irq;

  for (VAR_14 = 0; VAR_14 < VAR_13->interrupt_count; VAR_14++) {
   if (VAR_9->hd_nirqs >= VAR_5)
    break;

   VAR_15 = FUNC_1(((void*)0), VAR_13->interrupts[VAR_14],
          VAR_13->triggering, VAR_13->polarity);
   if (VAR_15 < 0)
    return VAR_3;

   VAR_9->hd_irq[VAR_9->hd_nirqs] = VAR_15;
   VAR_9->hd_nirqs++;
  }
 }

 return VAR_4;
}
