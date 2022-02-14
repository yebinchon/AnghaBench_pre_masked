
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int length; } ;
struct acpi_nfit_interleave {int line_count; TYPE_1__ header; } ;



__attribute__((used)) static size_t FUNC_0(struct acpi_nfit_interleave *VAR_0)
{
 if (VAR_0->header.length < sizeof(*VAR_0))
  return 0;
 return sizeof(*VAR_0) + sizeof(u32) * (VAR_0->line_count - 1);
}
