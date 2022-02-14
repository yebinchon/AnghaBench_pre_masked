
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {int scrub_mode; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;


 struct nvdimm_bus_descriptor* FUNC_0 (struct device*) ;
 size_t FUNC_1 (char const*,int ,long*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct acpi_nfit_desc* FUNC_4 (struct nvdimm_bus_descriptor*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct nvdimm_bus_descriptor *VAR_5;
 ssize_t VAR_6;
 long VAR_7;

 VAR_6 = FUNC_1(VAR_3, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_1);
 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5) {
  struct acpi_nfit_desc *VAR_8 = FUNC_4(VAR_5);

  switch (VAR_7) {
  case 128:
   VAR_8->scrub_mode = 128;
   break;
  case 129:
   VAR_8->scrub_mode = 129;
   break;
  default:
   VAR_6 = -VAR_0;
   break;
  }
 }
 FUNC_3(VAR_1);
 if (VAR_6)
  return VAR_6;
 return VAR_4;
}
