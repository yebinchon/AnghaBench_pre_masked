
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; } ;
struct acpi_resource_memory32 {int minimum; int address_length; int write_protect; } ;
struct acpi_resource_memory24 {int minimum; int address_length; int write_protect; } ;
struct acpi_resource_fixed_memory32 {int address; int address_length; int write_protect; } ;
struct TYPE_2__ {struct acpi_resource_fixed_memory32 fixed_memory32; struct acpi_resource_memory32 memory32; struct acpi_resource_memory24 memory24; } ;
struct acpi_resource {int type; TYPE_1__ data; } ;





 int VAR_0 ;
 int FUNC_0 (struct resource*,int,int,int ) ;

bool FUNC_1(struct acpi_resource *VAR_1, struct resource *VAR_2)
{
 struct acpi_resource_memory24 *VAR_3;
 struct acpi_resource_memory32 *VAR_4;
 struct acpi_resource_fixed_memory32 *VAR_5;

 switch (VAR_1->type) {
 case 129:
  VAR_3 = &VAR_1->data.memory24;
  FUNC_0(VAR_2, VAR_3->minimum << 8,
      VAR_3->address_length << 8,
      VAR_3->write_protect);
  break;
 case 128:
  VAR_4 = &VAR_1->data.memory32;
  FUNC_0(VAR_2, VAR_4->minimum,
      VAR_4->address_length,
      VAR_4->write_protect);
  break;
 case 130:
  VAR_5 = &VAR_1->data.fixed_memory32;
  FUNC_0(VAR_2, VAR_5->address,
      VAR_5->address_length,
      VAR_5->write_protect);
  break;
 default:
  VAR_2->flags = 0;
  return 0;
 }

 return !(VAR_2->flags & VAR_0);
}
