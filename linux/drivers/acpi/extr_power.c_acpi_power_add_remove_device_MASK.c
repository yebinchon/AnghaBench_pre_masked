
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int power_resources; } ;
struct TYPE_10__ {TYPE_1__* states; TYPE_4__ flags; } ;
struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_8__ {int resources; TYPE_2__ flags; } ;
struct acpi_device {TYPE_5__ power; TYPE_3__ wakeup; } ;
struct TYPE_6__ {int resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_device*,int *,int *,int) ;
 int * VAR_2 ;
 int VAR_3 ;

void FUNC_1(struct acpi_device *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (VAR_4->wakeup.flags.valid)
  FUNC_0(VAR_4, &VAR_4->wakeup.resources,
           &VAR_3, VAR_5);

 if (!VAR_4->power.flags.power_resources)
  return;

 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++)
  FUNC_0(VAR_4,
           &VAR_4->power.states[VAR_6].resources,
           &VAR_2[VAR_6], VAR_5);
}
