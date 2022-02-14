
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ count; } ;
union acpi_object {scalar_t__ type; TYPE_1__ package; } ;
struct TYPE_8__ {int explicit_set; int valid; } ;
struct acpi_device_power_state {int power; int latency; TYPE_4__ flags; int resources; } ;
struct TYPE_6__ {int power_resources; } ;
struct TYPE_7__ {TYPE_2__ flags; struct acpi_device_power_state* states; } ;
struct acpi_device {int handle; TYPE_3__ power; } ;
struct acpi_buffer {union acpi_object* pointer; scalar_t__ length; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (union acpi_object*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_4 (union acpi_object*,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct acpi_device *VAR_2, int VAR_3)
{
 struct acpi_device_power_state *VAR_4 = &VAR_2->power.states[VAR_3];
 char VAR_5[5] = { '_', 'P', 'R', '0' + VAR_3, '\0' };
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 acpi_status VAR_7;

 FUNC_2(&VAR_4->resources);


 VAR_7 = FUNC_3(VAR_2->handle, VAR_5, ((void*)0), &VAR_6);
 if (FUNC_1(VAR_7)) {
  union acpi_object *VAR_8 = VAR_6.pointer;

  if (VAR_6.length && VAR_8
      && VAR_8->type == VAR_1
      && VAR_8->package.count) {
   int VAR_9 = FUNC_4(VAR_8, 0,
              &VAR_4->resources);
   if (!VAR_9)
    VAR_2->power.flags.power_resources = 1;
  }
  FUNC_0(VAR_6.pointer);
 }


 VAR_5[2] = 'S';
 if (FUNC_5(VAR_2->handle, VAR_5))
  VAR_4->flags.explicit_set = 1;


 if (!FUNC_6(&VAR_4->resources) || VAR_4->flags.explicit_set)
  VAR_4->flags.valid = 1;

 VAR_4->power = -1;
 VAR_4->latency = -1;
}
