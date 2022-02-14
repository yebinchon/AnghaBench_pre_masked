
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_hest_generic_status {scalar_t__ data_length; scalar_t__ raw_data_length; scalar_t__ raw_data_offset; } ;



__attribute__((used)) static inline u32 FUNC_0(struct acpi_hest_generic_status *VAR_0)
{
 if (VAR_0->raw_data_length)
  return VAR_0->raw_data_offset + VAR_0->raw_data_length;

 else
  return sizeof(*VAR_0) + VAR_0->data_length;
}
