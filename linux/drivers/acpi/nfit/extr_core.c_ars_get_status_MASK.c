
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int (* ndctl ) (struct nvdimm_bus_descriptor*,int *,int ,struct nd_cmd_ars_status*,int ,int*) ;} ;
struct nd_cmd_ars_status {int dummy; } ;
struct acpi_nfit_desc {int max_ars; struct nd_cmd_ars_status* ars_status; struct nvdimm_bus_descriptor nd_desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvdimm_bus_descriptor*,int *,int ,struct nd_cmd_ars_status*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct acpi_nfit_desc *VAR_1)
{
 struct nvdimm_bus_descriptor *VAR_2 = &VAR_1->nd_desc;
 struct nd_cmd_ars_status *VAR_3 = VAR_1->ars_status;
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->ndctl(VAR_2, ((void*)0), VAR_0, VAR_3,
   VAR_1->max_ars, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 return VAR_5;
}
