
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvdimm_bus {int dummy; } ;
struct nd_cmd_ars_status {int out_length; int num_records; TYPE_1__* records; } ;
struct nd_ars_record {int dummy; } ;
struct acpi_nfit_desc {int dev; int scrub_flags; struct nd_cmd_ars_status* ars_status; struct nvdimm_bus* nvdimm_bus; } ;
struct TYPE_2__ {int length; int err_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct nvdimm_bus*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct acpi_nfit_desc *VAR_1)
{
 struct nvdimm_bus *VAR_2 = VAR_1->nvdimm_bus;
 struct nd_cmd_ars_status *VAR_3 = VAR_1->ars_status;
 int VAR_4;
 u32 VAR_5;





 if (VAR_3->out_length < 44)
  return 0;





 if (!FUNC_3(VAR_0, &VAR_1->scrub_flags)) {
  FUNC_0(VAR_1->dev, "skip %d stale records\n",
    VAR_3->num_records);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_records; VAR_5++) {

  if (VAR_3->out_length
    < 44 + sizeof(struct nd_ars_record) * (VAR_5 + 1))
   break;
  VAR_4 = FUNC_2(VAR_2,
    VAR_3->records[VAR_5].err_address,
    VAR_3->records[VAR_5].length);
  if (VAR_4)
   return VAR_4;
 }
 if (VAR_5 < VAR_3->num_records)
  FUNC_1(VAR_1->dev, "detected truncated ars results\n");

 return 0;
}
