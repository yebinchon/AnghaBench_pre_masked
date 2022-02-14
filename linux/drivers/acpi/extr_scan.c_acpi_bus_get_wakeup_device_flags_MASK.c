
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valid; } ;
struct TYPE_4__ {scalar_t__ prepare_count; TYPE_1__ flags; } ;
struct acpi_device {TYPE_2__ wakeup; int dev; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static void FUNC_6(struct acpi_device *VAR_1)
{
 int VAR_2;


 if (!FUNC_3(VAR_1->handle, "_PRW"))
  return;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_5(&VAR_1->dev, "_PRW evaluation error: %d\n", VAR_2);
  return;
 }

 VAR_1->wakeup.flags.valid = FUNC_4(VAR_1);
 VAR_1->wakeup.prepare_count = 0;







 VAR_2 = FUNC_2(VAR_1, 0, 0, 0);
 if (VAR_2)
  FUNC_0((VAR_0,
    "error in _DSW or _PSW evaluation\n"));
}
