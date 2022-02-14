
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int length; } ;
struct acpi_nfit_flush_address {int hint_count; TYPE_1__ header; } ;



__attribute__((used)) static size_t FUNC_0(struct acpi_nfit_flush_address *VAR_0)
{
 if (VAR_0->header.length < sizeof(*VAR_0))
  return 0;
 return sizeof(*VAR_0) + sizeof(u64) * (VAR_0->hint_count - 1);
}
