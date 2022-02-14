
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {char* provider_name; int attr_groups; int clear_to_send; int flush_probe; int ndctl; int module; } ;
struct device {int dummy; } ;
struct acpi_nfit_desc {int scrub_tmo; int dwork; int init_mutex; int list; int dimms; int memdevs; int flushes; int idts; int bdws; int dcrs; int spas; struct nvdimm_bus_descriptor nd_desc; int blk_do_io; struct device* dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,struct acpi_nfit_desc*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct acpi_nfit_desc *VAR_7, struct device *VAR_8)
{
 struct nvdimm_bus_descriptor *VAR_9;

 FUNC_2(VAR_8, VAR_7);
 VAR_7->dev = VAR_8;
 VAR_7->blk_do_io = VAR_2;
 VAR_9 = &VAR_7->nd_desc;
 VAR_9->provider_name = "ACPI.NFIT";
 VAR_9->module = VAR_0;
 VAR_9->ndctl = VAR_4;
 VAR_9->flush_probe = VAR_5;
 VAR_9->clear_to_send = VAR_3;
 VAR_9->attr_groups = VAR_1;

 FUNC_1(&VAR_7->spas);
 FUNC_1(&VAR_7->dcrs);
 FUNC_1(&VAR_7->bdws);
 FUNC_1(&VAR_7->idts);
 FUNC_1(&VAR_7->flushes);
 FUNC_1(&VAR_7->memdevs);
 FUNC_1(&VAR_7->dimms);
 FUNC_1(&VAR_7->list);
 FUNC_3(&VAR_7->init_mutex);
 VAR_7->scrub_tmo = 1;
 FUNC_0(&VAR_7->dwork, VAR_6);
}
