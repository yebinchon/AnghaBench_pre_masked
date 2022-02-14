
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ power_setup_done; scalar_t__ power; } ;
struct acpi_processor {TYPE_1__ flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cpuidle_device*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 struct cpuidle_device* FUNC_3 (int ,int ) ;

int FUNC_4(struct acpi_processor *VAR_3)
{
 struct cpuidle_device *VAR_4 = FUNC_3(VAR_0, VAR_3->id);

 if (FUNC_2())
  return 0;

 if (VAR_3->flags.power) {
  FUNC_0(VAR_4);
  VAR_2--;
  if (VAR_2 == 0)
   FUNC_1(&VAR_1);
 }

 VAR_3->flags.power_setup_done = 0;
 return 0;
}
