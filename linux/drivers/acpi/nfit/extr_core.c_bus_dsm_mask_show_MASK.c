
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int bus_dsm_mask; } ;
struct nvdimm_bus {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int ) ;
 struct nvdimm_bus_descriptor* FUNC_1 (struct nvdimm_bus*) ;
 struct nvdimm_bus* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nvdimm_bus *VAR_3 = FUNC_2(VAR_0);
 struct nvdimm_bus_descriptor *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_2, "%#lx\n", VAR_4->bus_dsm_mask);
}
