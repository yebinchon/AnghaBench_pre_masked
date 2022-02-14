
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_table_facs {int length; int version; scalar_t__ xfirmware_waking_vector; scalar_t__ firmware_waking_vector; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;


 int FUNC_0 (int (*) (struct acpi_table_facs*,scalar_t__,scalar_t__)) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static acpi_status
FUNC_2(struct acpi_table_facs *VAR_1,
       acpi_physical_address VAR_2,
       acpi_physical_address VAR_3)
{
 FUNC_0(FUNC_2);
 VAR_1->firmware_waking_vector = (u32)VAR_2;

 if (VAR_1->length > 32) {
  if (VAR_1->version >= 1) {



   VAR_1->xfirmware_waking_vector = VAR_3;
  } else {


   VAR_1->xfirmware_waking_vector = 0;
  }
 }

 FUNC_1(VAR_0);
}
