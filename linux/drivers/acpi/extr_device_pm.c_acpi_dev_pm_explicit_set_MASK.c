
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* states; } ;
struct acpi_device {int handle; TYPE_3__ power; } ;
typedef int acpi_status ;
struct TYPE_4__ {scalar_t__ explicit_set; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1, int VAR_2)
{
 if (VAR_1->power.states[VAR_2].flags.explicit_set) {
  char VAR_3[5] = { '_', 'P', 'S', '0' + VAR_2, '\0' };
  acpi_status VAR_4;

  VAR_4 = FUNC_1(VAR_1->handle, VAR_3, ((void*)0), ((void*)0));
  if (FUNC_0(VAR_4))
   return -VAR_0;
 }
 return 0;
}
