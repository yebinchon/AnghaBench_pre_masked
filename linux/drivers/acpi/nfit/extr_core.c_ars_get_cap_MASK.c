
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int (* ndctl ) (struct nvdimm_bus_descriptor*,int *,int ,struct nd_cmd_ars_cap*,int,int*) ;} ;
struct nfit_spa {struct acpi_nfit_system_address* spa; } ;
struct nd_cmd_ars_cap {int length; int address; } ;
struct acpi_nfit_system_address {int length; int address; } ;
struct acpi_nfit_desc {struct nvdimm_bus_descriptor nd_desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvdimm_bus_descriptor*,int *,int ,struct nd_cmd_ars_cap*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct acpi_nfit_desc *VAR_1,
  struct nd_cmd_ars_cap *VAR_2, struct nfit_spa *VAR_3)
{
 struct nvdimm_bus_descriptor *VAR_4 = &VAR_1->nd_desc;
 struct acpi_nfit_system_address *VAR_5 = VAR_3->spa;
 int VAR_6, VAR_7;

 VAR_2->address = VAR_5->address;
 VAR_2->length = VAR_5->length;
 VAR_7 = VAR_4->ndctl(VAR_4, ((void*)0), VAR_0, VAR_2,
   sizeof(*VAR_2), &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 return VAR_6;
}
