
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_mem {struct acpi_nfit_memory_map* memdev_pmem; struct acpi_nfit_memory_map* memdev_dcr; } ;
struct acpi_nfit_memory_map {int dummy; } ;



__attribute__((used)) static inline struct acpi_nfit_memory_map *FUNC_0(
  struct nfit_mem *VAR_0)
{
 if (VAR_0->memdev_dcr)
  return VAR_0->memdev_dcr;
 return VAR_0->memdev_pmem;
}
