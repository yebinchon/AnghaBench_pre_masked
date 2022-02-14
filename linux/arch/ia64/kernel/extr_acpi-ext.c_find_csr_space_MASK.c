
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csr_space {scalar_t__ length; int base; } ;
struct TYPE_2__ {scalar_t__ address_length; int minimum; } ;
struct acpi_resource_address64 {scalar_t__ resource_type; scalar_t__ producer_consumer; TYPE_1__ address; } ;
struct acpi_resource {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_resource*,struct acpi_resource_address64*) ;

__attribute__((used)) static acpi_status FUNC_2(struct acpi_resource *VAR_4, void *VAR_5)
{
 struct csr_space *VAR_6 = VAR_5;
 struct acpi_resource_address64 VAR_7;
 acpi_status VAR_8;

 VAR_8 = FUNC_1(VAR_4, &VAR_7);
 if (FUNC_0(VAR_8) &&
     VAR_7.resource_type == VAR_1 &&
     VAR_7.address.address_length &&
     VAR_7.producer_consumer == VAR_0) {
  VAR_6->base = VAR_7.address.minimum;
  VAR_6->length = VAR_7.address.address_length;
  return VAR_2;
 }
 return VAR_3;
}
