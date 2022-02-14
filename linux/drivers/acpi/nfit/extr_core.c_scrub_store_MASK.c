
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct acpi_nfit_desc*,int ) ;
 struct nvdimm_bus_descriptor* FUNC_1 (struct device*) ;
 size_t FUNC_2 (char const*,int ,long*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 struct acpi_nfit_desc* FUNC_5 (struct nvdimm_bus_descriptor*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct nvdimm_bus_descriptor *VAR_6;
 ssize_t VAR_7;
 long VAR_8;

 VAR_7 = FUNC_2(VAR_4, 0, &VAR_8);
 if (VAR_7)
  return VAR_7;
 if (VAR_8 != 1)
  return -VAR_1;

 FUNC_3(VAR_2);
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6) {
  struct acpi_nfit_desc *VAR_9 = FUNC_5(VAR_6);

  VAR_7 = FUNC_0(VAR_9, VAR_0);
 }
 FUNC_4(VAR_2);
 if (VAR_7)
  return VAR_7;
 return VAR_5;
}
