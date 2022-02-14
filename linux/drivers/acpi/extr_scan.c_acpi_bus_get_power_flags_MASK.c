
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_10__ {int power_manageable; } ;
struct TYPE_6__ {int explicit_get; int inrush_current; int dsw_present; } ;
struct TYPE_9__ {TYPE_3__* states; TYPE_1__ flags; } ;
struct acpi_device {TYPE_5__ flags; TYPE_4__ power; int handle; } ;
struct TYPE_7__ {int valid; } ;
struct TYPE_8__ {int power; TYPE_2__ flags; int resources; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*,size_t) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_3)
{
 u32 VAR_4;


 if (!FUNC_3(VAR_3->handle, "_PS0") &&
     !FUNC_3(VAR_3->handle, "_PR0"))
  return;

 VAR_3->flags.power_manageable = 1;




 if (FUNC_3(VAR_3->handle, "_PSC"))
  VAR_3->power.flags.explicit_get = 1;

 if (FUNC_3(VAR_3->handle, "_IRC"))
  VAR_3->power.flags.inrush_current = 1;

 if (FUNC_3(VAR_3->handle, "_DSW"))
  VAR_3->power.flags.dsw_present = 1;




 for (VAR_4 = VAR_0; VAR_4 <= VAR_2; VAR_4++)
  FUNC_2(VAR_3, VAR_4);

 FUNC_0(&VAR_3->power.states[VAR_1].resources);
 if (!FUNC_4(&VAR_3->power.states[VAR_2].resources))
  VAR_3->power.states[VAR_1].flags.valid = 1;


 VAR_3->power.states[VAR_0].flags.valid = 1;
 VAR_3->power.states[VAR_0].power = 100;
 VAR_3->power.states[VAR_2].flags.valid = 1;

 if (FUNC_1(VAR_3))
  VAR_3->flags.power_manageable = 0;
}
