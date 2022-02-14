
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int unique_id; } ;
struct acpi_device {int handle; TYPE_1__ pnp; } ;
struct acpi_dev_match_info {int hrv; scalar_t__ uid; int hid; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 scalar_t__ FUNC_2 (struct acpi_device*,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 struct acpi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, const void *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_4(VAR_0);
 const struct acpi_dev_match_info *VAR_3 = VAR_1;
 unsigned long long VAR_4;
 acpi_status VAR_5;

 if (FUNC_2(VAR_2, VAR_3->hid))
  return 0;

 if (VAR_3->uid && (!VAR_2->pnp.unique_id ||
     FUNC_3(VAR_2->pnp.unique_id, VAR_3->uid)))
  return 0;

 if (VAR_3->hrv == -1)
  return 1;

 VAR_5 = FUNC_1(VAR_2->handle, "_HRV", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5))
  return 0;

 return VAR_4 == VAR_3->hrv;
}
