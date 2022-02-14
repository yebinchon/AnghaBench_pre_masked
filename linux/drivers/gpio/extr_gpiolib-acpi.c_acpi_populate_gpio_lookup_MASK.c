
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int string_ptr; } ;
struct acpi_resource_gpio {scalar_t__ connection_type; int pin_table_length; int triggering; int polarity; int pin_config; int * pin_table; TYPE_2__ resource_source; } ;
struct TYPE_4__ {struct acpi_resource_gpio gpio; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
struct TYPE_6__ {int quirks; int gpioint; int polarity; int flags; int triggering; int pin_config; } ;
struct acpi_gpio_lookup {scalar_t__ index; int pin_index; int active_low; TYPE_3__ info; int desc; int n; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct acpi_resource_gpio const*) ;

__attribute__((used)) static int FUNC_2(struct acpi_resource *VAR_4, void *VAR_5)
{
 struct acpi_gpio_lookup *VAR_6 = VAR_5;

 if (VAR_4->type != VAR_2)
  return 1;

 if (!VAR_6->desc) {
  const struct acpi_resource_gpio *VAR_7 = &VAR_4->data.gpio;
  bool VAR_8 = VAR_7->connection_type == VAR_1;
  int VAR_9;

  if (VAR_6->info.quirks & VAR_0 && VAR_8)
   VAR_6->index++;

  if (VAR_6->n++ != VAR_6->index)
   return 1;

  VAR_9 = VAR_6->pin_index;
  if (VAR_9 >= VAR_7->pin_table_length)
   return 1;

  VAR_6->desc = FUNC_0(VAR_7->resource_source.string_ptr,
           VAR_7->pin_table[VAR_9]);
  VAR_6->info.pin_config = VAR_7->pin_config;
  VAR_6->info.gpioint = VAR_8;
  if (VAR_6->info.gpioint) {
   VAR_6->info.flags = VAR_3;
   VAR_6->info.polarity = VAR_7->polarity;
   VAR_6->info.triggering = VAR_7->triggering;
  } else {
   VAR_6->info.flags = FUNC_1(VAR_7);
   VAR_6->info.polarity = VAR_6->active_low;
  }
 }

 return 1;
}
