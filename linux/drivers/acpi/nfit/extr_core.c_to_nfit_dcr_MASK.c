
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nfit_mem {struct acpi_nfit_control_region* dcr; } ;
struct device {int dummy; } ;
struct acpi_nfit_control_region {int dummy; } ;


 struct nfit_mem* FUNC_0 (struct nvdimm*) ;
 struct nvdimm* FUNC_1 (struct device*) ;

__attribute__((used)) static struct acpi_nfit_control_region *FUNC_2(struct device *VAR_0)
{
 struct nvdimm *VAR_1 = FUNC_1(VAR_0);
 struct nfit_mem *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->dcr;
}
