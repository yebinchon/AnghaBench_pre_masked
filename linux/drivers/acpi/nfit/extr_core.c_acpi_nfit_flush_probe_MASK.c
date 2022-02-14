
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int dummy; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {int init_mutex; struct device* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct acpi_nfit_desc* FUNC_4 (struct nvdimm_bus_descriptor*) ;

__attribute__((used)) static int FUNC_5(struct nvdimm_bus_descriptor *VAR_0)
{
 struct acpi_nfit_desc *VAR_1 = FUNC_4(VAR_0);
 struct device *VAR_2 = VAR_1->dev;


 FUNC_2(VAR_2);
 FUNC_3(VAR_2);


 FUNC_0(&VAR_1->init_mutex);
 FUNC_1(&VAR_1->init_mutex);

 return 0;
}
