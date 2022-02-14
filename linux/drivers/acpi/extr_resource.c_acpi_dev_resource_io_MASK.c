
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; } ;
struct acpi_resource_io {int io_decode; int address_length; int minimum; } ;
struct acpi_resource_fixed_io {int address_length; int address; } ;
struct TYPE_2__ {struct acpi_resource_fixed_io fixed_io; struct acpi_resource_io io; } ;
struct acpi_resource {int type; TYPE_1__ data; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct resource*,int ,int ,int ) ;

bool FUNC_1(struct acpi_resource *VAR_2, struct resource *VAR_3)
{
 struct acpi_resource_io *VAR_4;
 struct acpi_resource_fixed_io *VAR_5;

 switch (VAR_2->type) {
 case 128:
  VAR_4 = &VAR_2->data.io;
  FUNC_0(VAR_3, VAR_4->minimum,
     VAR_4->address_length,
     VAR_4->io_decode);
  break;
 case 129:
  VAR_5 = &VAR_2->data.fixed_io;
  FUNC_0(VAR_3, VAR_5->address,
     VAR_5->address_length,
     VAR_0);
  break;
 default:
  VAR_3->flags = 0;
  return 0;
 }

 return !(VAR_3->flags & VAR_1);
}
