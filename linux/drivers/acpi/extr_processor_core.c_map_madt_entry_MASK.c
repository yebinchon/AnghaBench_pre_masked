
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long length; } ;
struct acpi_table_madt {TYPE_1__ header; } ;
struct acpi_subtable_header {scalar_t__ type; scalar_t__ length; } ;
typedef int phys_cpuid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acpi_subtable_header*,int,int ,int *) ;
 int FUNC_1 (struct acpi_subtable_header*,int ,int *) ;
 int FUNC_2 (struct acpi_subtable_header*,int,int ,int *) ;
 int FUNC_3 (struct acpi_subtable_header*,int,int ,int *) ;

__attribute__((used)) static phys_cpuid_t FUNC_4(struct acpi_table_madt *VAR_5,
       int VAR_6, u32 VAR_7)
{
 unsigned long VAR_8, VAR_9;
 phys_cpuid_t VAR_10 = VAR_4;

 if (!VAR_5)
  return VAR_10;

 VAR_9 = (unsigned long)VAR_5;
 VAR_8 = VAR_9 + VAR_5->header.length;



 VAR_9 += sizeof(struct acpi_table_madt);
 while (VAR_9 + sizeof(struct acpi_subtable_header) < VAR_8) {
  struct acpi_subtable_header *VAR_11 =
   (struct acpi_subtable_header *)VAR_9;
  if (VAR_11->type == VAR_1) {
   if (!FUNC_1(VAR_11, VAR_7, &VAR_10))
    break;
  } else if (VAR_11->type == VAR_3) {
   if (!FUNC_3(VAR_11, VAR_6, VAR_7, &VAR_10))
    break;
  } else if (VAR_11->type == VAR_2) {
   if (!FUNC_2(VAR_11, VAR_6, VAR_7, &VAR_10))
    break;
  } else if (VAR_11->type == VAR_0) {
   if (!FUNC_0(VAR_11, VAR_6, VAR_7, &VAR_10))
    break;
  }
  VAR_9 += VAR_11->length;
 }
 return VAR_10;
}
