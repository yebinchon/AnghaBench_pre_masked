
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_spa {struct nd_region* nd_region; struct acpi_nfit_system_address* spa; } ;
struct nd_region {int dummy; } ;
struct nd_cmd_ars_status {scalar_t__ address; scalar_t__ length; } ;
struct device {int dummy; } ;
struct acpi_nfit_system_address {scalar_t__ address; scalar_t__ length; int range_index; } ;
struct acpi_nfit_desc {struct device* dev; struct nfit_spa* scrub_spa; int init_mutex; struct nd_cmd_ars_status* ars_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int *) ;
 struct device* FUNC_2 (struct nd_region*) ;
 int FUNC_3 (struct nd_region*,int ) ;

__attribute__((used)) static void FUNC_4(struct acpi_nfit_desc *VAR_1,
  struct nfit_spa *VAR_2)
{
 struct nd_cmd_ars_status *VAR_3 = VAR_1->ars_status;
 struct acpi_nfit_system_address *VAR_4 = VAR_2->spa;
 struct nd_region *VAR_5 = VAR_2->nd_region;
 struct device *VAR_6;

 FUNC_1(&VAR_1->init_mutex);





 if (VAR_1->scrub_spa != VAR_2)
  return;

 if ((VAR_3->address >= VAR_4->address && VAR_3->address
    < VAR_4->address + VAR_4->length)
   || (VAR_3->address < VAR_4->address)) {
  if (VAR_3->address + VAR_3->length
    >= VAR_4->address + VAR_4->length)
                  ;
  else
   return;
 } else
  return;

 VAR_1->scrub_spa = ((void*)0);
 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_5);
  FUNC_3(VAR_5, VAR_0);
 } else
  VAR_6 = VAR_1->dev;
 FUNC_0(VAR_6, "ARS: range %d complete\n", VAR_4->range_index);
}
