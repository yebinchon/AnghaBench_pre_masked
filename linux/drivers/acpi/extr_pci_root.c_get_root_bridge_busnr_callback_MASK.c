
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_2__ {scalar_t__ address_length; scalar_t__ minimum; } ;
struct acpi_resource_address64 {scalar_t__ resource_type; TYPE_1__ address; } ;
struct acpi_resource {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_resource*,struct acpi_resource_address64*) ;

__attribute__((used)) static acpi_status
FUNC_2(struct acpi_resource *VAR_2, void *VAR_3)
{
 struct resource *VAR_4 = VAR_3;
 struct acpi_resource_address64 VAR_5;
 acpi_status VAR_6;

 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (FUNC_0(VAR_6))
  return VAR_1;

 if ((VAR_5.address.address_length > 0) &&
     (VAR_5.resource_type == VAR_0)) {
  VAR_4->start = VAR_5.address.minimum;
  VAR_4->end = VAR_5.address.minimum + VAR_5.address.address_length - 1;
 }

 return VAR_1;
}
