
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct acpi_table_einj {int header_length; int entries; TYPE_1__ header; } ;
struct acpi_einj_entry {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct acpi_table_einj *VAR_1)
{
 if ((VAR_1->header_length !=
      (sizeof(struct acpi_table_einj) - sizeof(VAR_1->header)))
     && (VAR_1->header_length != sizeof(struct acpi_table_einj)))
  return -VAR_0;
 if (VAR_1->header.length < sizeof(struct acpi_table_einj))
  return -VAR_0;
 if (VAR_1->entries !=
     (VAR_1->header.length - sizeof(struct acpi_table_einj)) /
     sizeof(struct acpi_einj_entry))
  return -VAR_0;

 return 0;
}
