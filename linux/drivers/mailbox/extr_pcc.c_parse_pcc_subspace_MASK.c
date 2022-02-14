
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_subtable_headers {int dummy; } acpi_subtable_headers ;
struct TYPE_2__ {scalar_t__ type; } ;
struct acpi_pcct_subspace {TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(union acpi_subtable_headers *VAR_2,
  const unsigned long VAR_3)
{
 struct acpi_pcct_subspace *VAR_4 = (struct acpi_pcct_subspace *) VAR_2;

 if (VAR_4->header.type < VAR_0)
  return 0;

 return -VAR_1;
}
