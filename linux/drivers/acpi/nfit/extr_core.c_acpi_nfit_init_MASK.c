
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfit_table_prev {int flushes; int idts; int bdws; int dcrs; int memdevs; int spas; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int prev; } ;
struct acpi_nfit_desc {int init_mutex; TYPE_1__ flushes; TYPE_1__ idts; TYPE_1__ bdws; TYPE_1__ dcrs; TYPE_1__ memdevs; TYPE_1__ spas; int list; int nvdimm_bus; int nd_desc; struct device* dev; } ;
typedef int acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct acpi_nfit_desc*,struct nfit_table_prev*) ;
 int FUNC_5 (struct acpi_nfit_desc*) ;
 int FUNC_6 (struct acpi_nfit_desc*) ;
 int FUNC_7 (struct acpi_nfit_desc*) ;
 int FUNC_8 (struct acpi_nfit_desc*) ;
 int VAR_3 ;
 void* FUNC_9 (struct acpi_nfit_desc*,struct nfit_table_prev*,void*,void const*) ;
 int FUNC_10 (struct device*,char*,int) ;
 int FUNC_11 (struct device*,int ,struct acpi_nfit_desc*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,TYPE_1__*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct acpi_nfit_desc*) ;
 int FUNC_17 (struct device*,int *) ;

int FUNC_18(struct acpi_nfit_desc *VAR_4, void *VAR_5, acpi_size VAR_6)
{
 struct device *VAR_7 = VAR_4->dev;
 struct nfit_table_prev VAR_8;
 const void *VAR_9;
 int VAR_10;

 if (!VAR_4->nvdimm_bus) {
  FUNC_6(VAR_4);

  VAR_4->nvdimm_bus = FUNC_17(VAR_7,
    &VAR_4->nd_desc);
  if (!VAR_4->nvdimm_bus)
   return -VAR_0;

  VAR_10 = FUNC_11(VAR_7, VAR_3,
    VAR_4);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_5(VAR_4);
  if (VAR_10)
   return VAR_10;


  FUNC_14(&VAR_1);
  FUNC_12(&VAR_4->list, &VAR_2);
  FUNC_15(&VAR_1);
 }

 FUNC_14(&VAR_4->init_mutex);

 FUNC_0(&VAR_8.spas);
 FUNC_0(&VAR_8.memdevs);
 FUNC_0(&VAR_8.dcrs);
 FUNC_0(&VAR_8.bdws);
 FUNC_0(&VAR_8.idts);
 FUNC_0(&VAR_8.flushes);

 FUNC_13(&VAR_8.spas, &VAR_4->spas,
    VAR_4->spas.prev);
 FUNC_13(&VAR_8.memdevs, &VAR_4->memdevs,
    VAR_4->memdevs.prev);
 FUNC_13(&VAR_8.dcrs, &VAR_4->dcrs,
    VAR_4->dcrs.prev);
 FUNC_13(&VAR_8.bdws, &VAR_4->bdws,
    VAR_4->bdws.prev);
 FUNC_13(&VAR_8.idts, &VAR_4->idts,
    VAR_4->idts.prev);
 FUNC_13(&VAR_8.flushes, &VAR_4->flushes,
    VAR_4->flushes.prev);

 VAR_9 = VAR_5 + VAR_6;
 while (!FUNC_2(VAR_5))
  VAR_5 = FUNC_9(VAR_4, &VAR_8, VAR_5, VAR_9);

 if (FUNC_1(VAR_5)) {
  FUNC_10(VAR_7, "nfit table parsing error: %ld\n", FUNC_3(VAR_5));
  VAR_10 = FUNC_3(VAR_5);
  goto out_unlock;
 }

 VAR_10 = FUNC_4(VAR_4, &VAR_8);
 if (VAR_10)
  goto out_unlock;

 VAR_10 = FUNC_16(VAR_4);
 if (VAR_10)
  goto out_unlock;

 VAR_10 = FUNC_7(VAR_4);
 if (VAR_10)
  goto out_unlock;

 VAR_10 = FUNC_8(VAR_4);

 out_unlock:
 FUNC_15(&VAR_4->init_mutex);
 return VAR_10;
}
