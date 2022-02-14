
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nfit_mem {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_memory_map {int dummy; } ;


 struct acpi_nfit_memory_map* FUNC_0 (struct nfit_mem*) ;
 struct nfit_mem* FUNC_1 (struct nvdimm*) ;
 struct nvdimm* FUNC_2 (struct device*) ;

__attribute__((used)) static struct acpi_nfit_memory_map *FUNC_3(struct device *VAR_0)
{
 struct nvdimm *VAR_1 = FUNC_2(VAR_0);
 struct nfit_mem *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2);
}
