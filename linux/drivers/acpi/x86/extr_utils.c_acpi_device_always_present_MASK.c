
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int unique_id; } ;
struct acpi_device {TYPE_1__ pnp; } ;
struct TYPE_9__ {TYPE_3__* dmi_ids; int cpu_ids; int uid; int hid; } ;
struct TYPE_8__ {TYPE_2__* matches; } ;
struct TYPE_7__ {scalar_t__ slot; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (struct acpi_device*,int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(struct acpi_device *VAR_1)
{
 bool VAR_2 = 0;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (FUNC_1(VAR_1, VAR_0[VAR_3].hid))
   continue;

  if (!VAR_1->pnp.unique_id ||
      FUNC_3(VAR_1->pnp.unique_id, VAR_0[VAR_3].uid))
   continue;

  if (!FUNC_4(VAR_0[VAR_3].cpu_ids))
   continue;

  if (VAR_0[VAR_3].dmi_ids[0].matches[0].slot &&
      !FUNC_2(VAR_0[VAR_3].dmi_ids))
   continue;

  VAR_2 = 1;
  break;
 }

 return VAR_2;
}
