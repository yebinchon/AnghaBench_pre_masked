
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus_descriptor {int dummy; } ;
struct nvdimm {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct acpi_nfit_desc {TYPE_1__ dwork; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct acpi_nfit_desc* FUNC_0 (struct nvdimm_bus_descriptor*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct nvdimm_bus_descriptor *VAR_2,
  struct nvdimm *VAR_3, unsigned int VAR_4)
{
 struct acpi_nfit_desc *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3)
  return 0;
 if (VAR_4 != VAR_1)
  return 0;







 if (FUNC_1(&VAR_5->dwork.work))
  return -VAR_0;

 return 0;
}
