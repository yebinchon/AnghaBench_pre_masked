
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hest_generic_status {int data_length; int raw_data_offset; scalar_t__ raw_data_length; } ;
struct acpi_hest_generic_data {int dummy; } ;


 int VAR_0 ;

int FUNC_0(const struct acpi_hest_generic_status *VAR_1)
{
 if (VAR_1->data_length &&
     VAR_1->data_length < sizeof(struct acpi_hest_generic_data))
  return -VAR_0;
 if (VAR_1->raw_data_length &&
     VAR_1->raw_data_offset < sizeof(*VAR_1) + VAR_1->data_length)
  return -VAR_0;

 return 0;
}
