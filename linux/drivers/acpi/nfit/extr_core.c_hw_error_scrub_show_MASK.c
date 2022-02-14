
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int dummy; } ;
struct nvdimm_bus {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {int scrub_mode; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct acpi_nfit_desc* FUNC_1 (struct nvdimm_bus_descriptor*) ;
 struct nvdimm_bus_descriptor* FUNC_2 (struct nvdimm_bus*) ;
 struct nvdimm_bus* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nvdimm_bus *VAR_3 = FUNC_3(VAR_0);
 struct nvdimm_bus_descriptor *VAR_4 = FUNC_2(VAR_3);
 struct acpi_nfit_desc *VAR_5 = FUNC_1(VAR_4);

 return FUNC_0(VAR_2, "%d\n", VAR_5->scrub_mode);
}
